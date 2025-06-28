// Copyright VUEDK, Inc. All Rights Reserved.

#include "Attributes/ResourceAttribute.h"
#include "ResourceAttributesManager.h"
#include "ResourceAttributesSystem.h"

void UResourceAttribute::Init(UResourceAttributeData* InResourceAttributeData, UResourceAttributesManager* InResourceAttributesManager)
{
	if (!IsValid(InResourceAttributeData))
	{
		UE_LOG(LogResourceAttributesSystem, Error, TEXT("UResourceAttribute::Init: Invalid ResourceAttributeData provided."));
		return;
	}

	if (!IsValid(InResourceAttributesManager))
	{
		UE_LOG(LogResourceAttributesSystem, Error, TEXT("UResourceAttribute::Init: Invalid ResourceAttributesManager provided."));
		return;
	}

	ResourceAttributeData = InResourceAttributeData;
	ResourceAttributesManager = InResourceAttributesManager;
	SetMinValue(ResourceAttributeData->DefaultMinValue);
	SetMaxValue(ResourceAttributeData->DefaultMaxValue);
	SetRegenerationRate(ResourceAttributeData->DefaultRegenerationRate);
	
	CurrentValue = FMath::Clamp(ResourceAttributeData->StartingValue, MinValue, MaxValue);
	if (ResourceAttributeData->bHasRegeneration && ResourceAttributeData->bRegenOnInit)
		StartRegen(ResourceAttributeData->RegenerationDelayOnInit);
}

void UResourceAttribute::Tick(float DeltaTime)
{
	ProcessRegen(DeltaTime);
}

bool UResourceAttribute::IsTickable() const
{
	if (!Check())
		return false;

	return ResourceAttributeData->bHasRegeneration && bIsRegenerating;
}

TStatId UResourceAttribute::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UResourceAttribute, STATGROUP_Tickables);
}

bool UResourceAttribute::IsAtMax() const
{
	return CurrentValue >= MaxValue;
}

bool UResourceAttribute::IsAtMin() const
{
	return CurrentValue <= MinValue;
}

float UResourceAttribute::GetValue() const
{
	return CurrentValue;
}

float UResourceAttribute::GetMinValue() const
{
	return MinValue;
}

float UResourceAttribute::GetMaxValue() const
{
	return MaxValue;
}

float UResourceAttribute::GetRegenerationRate() const
{
	return RegenerationRate;
}

void UResourceAttribute::SetValue(const float NewValue)
{
	const float OldValue = CurrentValue;
	const float TargetValue = FMath::Clamp(NewValue, MinValue, MaxValue);

	if (TargetValue == OldValue)
		return;

	OnResourceAttributeChanged.Broadcast(OldValue, TargetValue);

	if (TargetValue > CurrentValue)
		OnAttributeIncreased(OldValue, TargetValue);
	else
		OnAttributeDecreased(OldValue, TargetValue);

	CurrentValue = TargetValue;

	if (IsAtMin())
		OnResourceAttributeReachedMaxValue.Broadcast(MaxValue);

	if (IsAtMax())
		OnResourceAttributeReachedMinValue.Broadcast(MinValue);
}

void UResourceAttribute::ModifyValue(const float Amount)
{
	const float NewValue = CurrentValue + Amount;
	SetValue(NewValue);
}

void UResourceAttribute::SetMinValue(const float NewMinValue)
{
	MinValue = FMath::Clamp(NewMinValue, FLT_MIN, MaxValue);
}

void UResourceAttribute::SetMaxValue(const float NewMaxValue)
{
	MaxValue = FMath::Clamp(NewMaxValue, MinValue, FLT_MAX);
}

void UResourceAttribute::SetRegenerationRate(const float NewRegenerationRate)
{
	RegenerationRate = FMath::Clamp(NewRegenerationRate, 0.0f, FLT_MAX);
}

void UResourceAttribute::StartRegen(const float Delay)
{
	if (!Check())
	{
		UE_LOG(LogResourceAttributesSystem, Error, TEXT("UResourceAttribute::StartRegen: ResourceAttributeData is not valid."));
		return;
	}

	if (!ResourceAttributeData->bHasRegeneration)
		return;

	bIsRegenerating = false;
	
	const UWorld* World = ResourceAttributesManager->GetWorld();
	if (!IsValid(World))
	{
		UE_LOG(LogResourceAttributesSystem, Error, TEXT("UResourceAttribute::StartRegen: World is not valid."));
		return;
	}

	if (Delay <= 0.0f)
	{
		OnRegenStarted();
		return;
	}
	
	FTimerManager& TimerManager = World->GetTimerManager();
	TimerManager.ClearTimer(RegenTimerHandle);
	TimerManager.SetTimer(
		RegenTimerHandle,
		this,
		&UResourceAttribute::OnRegenStarted,
		Delay
	);
}

void UResourceAttribute::StopRegen()
{
	if (!Check())
	{
		UE_LOG(LogResourceAttributesSystem, Error, TEXT("UResourceAttribute::StopRegen: ResourceAttributeData is not valid."));
		return;
	}

	if (!ResourceAttributeData->bHasRegeneration)
		return;
	
	bIsRegenerating = false;
	
	const UWorld* World = ResourceAttributesManager->GetWorld();
	if (!IsValid(World))
	{
		UE_LOG(LogResourceAttributesSystem, Error, TEXT("UResourceAttribute::StopRegen: World is not valid."));
		return;
	}

	FTimerManager& TimerManager = World->GetTimerManager();
	TimerManager.ClearTimer(RegenTimerHandle);
	OnResourceAttributeRegenStopped.Broadcast(CurrentValue);
}

void UResourceAttribute::ProcessRegen(const float DeltaTime)
{
	const float AddValue = RegenerationRate * DeltaTime;
	CurrentValue = FMath::Clamp(CurrentValue + AddValue, MinValue, MaxValue);

	if (IsAtMax())
		StopRegen();
}

void UResourceAttribute::OnAttributeIncreased(const float OldValue, const float TargetValue)
{
	if (!Check())
		return;

	if (ResourceAttributeData->bRegenAfterIncrement)
		StartRegen(ResourceAttributeData->RegenerationDelayAfterIncrement);

	OnResourceAttributeIncreased.Broadcast(TargetValue - CurrentValue, OldValue, TargetValue);
}

void UResourceAttribute::OnAttributeDecreased(const float OldValue, const float TargetValue)
{
	if (!Check())
		return;

	if (ResourceAttributeData->bRegenAfterDecrement)
		StartRegen(ResourceAttributeData->RegenerationDelayAfterDecrement);

	OnResourceAttributeDecreased.Broadcast(CurrentValue - TargetValue, OldValue, TargetValue);
}

void UResourceAttribute::OnRegenStarted()
{
	bIsRegenerating = true;
	OnResourceAttributeRegenStarted.Broadcast(CurrentValue);
}

bool UResourceAttribute::Check() const
{
	return IsValid(ResourceAttributeData) && IsValid(ResourceAttributesManager);
}

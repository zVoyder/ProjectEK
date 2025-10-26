// Copyright zVoyder, Inc. All Rights Reserved.

#include "Montages/FirearmMontagesManager.h"
#include "WeaponSystem.h"
#include "Montages/Utility/WeaponMontagesEventsHandler.h"
#include "Weapons/WeaponFirearm.h"
#include "Weapons/Data/WeaponShootData.h"

UFirearmMontagesManager::UFirearmMontagesManager(): WeaponFirearm(nullptr)
{
}

void UFirearmMontagesManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (!Check())
		return;

	WeaponFirearm->OnWeaponAttackSuccessEvent.RemoveDynamic(this, &UFirearmMontagesManager::OnWeaponAttackSuccess);
	WeaponFirearm->OnWeaponAttackFailEvent.RemoveDynamic(this, &UFirearmMontagesManager::OnWeaponAttackFail);
}

bool UFirearmMontagesManager::IsAnimShooting() const
{
	for (const FWeaponMontageData& ShootMontage : ShootSuccessMontages)
	{
		if (IsPlayingWeaponMontage(ShootMontage))
			return true;
	}

	return false;
}

bool UFirearmMontagesManager::IsAnimFailShooting() const
{
	for (const FWeaponMontageData& FailShootMontage : ShootFailMontages)
	{
		if (IsPlayingWeaponMontage(FailShootMontage))
			return true;
	}

	return false;
}

bool UFirearmMontagesManager::IsAnimReloading() const
{
	for (const FWeaponMontageData& ReloadMontage : ReloadMontages)
	{
		if (IsPlayingWeaponMontage(ReloadMontage))
			return true;
	}

	return false;
}

void UFirearmMontagesManager::Init()
{
	Super::Init();
	WeaponFirearm = Cast<AWeaponFirearm>(Weapon);
}

void UFirearmMontagesManager::BindEvents()
{
	Super::BindEvents();
	WeaponFirearm->Shooter->OnBehaviourShootSuccess.AddDynamic(this, &UFirearmMontagesManager::OnBehaviourShootSuccess);
	WeaponFirearm->Shooter->OnBehaviourShootFail.AddDynamic(this, &UFirearmMontagesManager::OnBehaviourShootFail);
	
	const UWorld* World = GetWorld();
	if (!IsValid(World))
		return;
	
	if (UWeaponMontagesEventsHandler* EventsHandler = World->GetSubsystem<UWeaponMontagesEventsHandler>())
	{
		EventsHandler->OnAnyMontageBegin.AddUniqueDynamic(this, &UFirearmMontagesManager::HandleAnyMontageBegin);
		EventsHandler->OnAnyMontageFinished.AddUniqueDynamic(this, &UFirearmMontagesManager::HandleAnyMontageFinished);
	}
}

void UFirearmMontagesManager::UnbindEvents()
{
	Super::UnbindEvents();
	WeaponFirearm->Shooter->OnBehaviourShootSuccess.RemoveDynamic(this, &UFirearmMontagesManager::OnBehaviourShootSuccess);
	WeaponFirearm->Shooter->OnBehaviourShootFail.RemoveDynamic(this, &UFirearmMontagesManager::OnBehaviourShootFail);

	const UWorld* World = GetWorld();
	if (!IsValid(World))
		return;

	if (UWeaponMontagesEventsHandler* EventsHandler = World->GetSubsystem<UWeaponMontagesEventsHandler>())
	{
		EventsHandler->OnAnyMontageBegin.RemoveDynamic(this, &UFirearmMontagesManager::HandleAnyMontageBegin);
		EventsHandler->OnAnyMontageFinished.RemoveDynamic(this, &UFirearmMontagesManager::HandleAnyMontageFinished);
	}
}

bool UFirearmMontagesManager::Check() const
{
	return Super::Check() && IsValid(WeaponFirearm) && IsValid(WeaponFirearm->Shooter);
}

void UFirearmMontagesManager::PlayReloadMontage(const int32 MontageIndex)
{
	if (!Check())
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UFirearmMontagesManager::PlayReloadMontage: Check failed."));
		return;
	}
	
	if (!ReloadMontages.IsValidIndex(MontageIndex))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UFirearmMontagesManager::PlayReloadMontage: Invalid ReloadMontageIndex %d."), MontageIndex);
		return;
	}

	const float ReloadTime = WeaponFirearm->GetWeaponReloadTime();
	StartWeaponMontage(
		ReloadMontages[MontageIndex],
		ReloadTime,
		ReloadTime
	);
}

void UFirearmMontagesManager::PlayShootMontage(const int32 MontageIndex)
{
	if (!ShootSuccessMontages.IsValidIndex(MontageIndex))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UFirearmMontagesManager::PlayShootMontage: Invalid ShootMontageIndex %d."), MontageIndex);
		return;
	}
	
	float WeaponPlayRate;
	float CharacterPlayRate;
	GetShootPlayRates(ShootSuccessMontages[MontageIndex], WeaponPlayRate, CharacterPlayRate);
	StartWeaponMontage(
		ShootSuccessMontages[MontageIndex],
		WeaponPlayRate,
		CharacterPlayRate
	);
}

void UFirearmMontagesManager::PlayFailShootMontage(const int32 MontageIndex)
{
	if (!ShootFailMontages.IsValidIndex(MontageIndex))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UFirearmMontagesManager::PlayFailShootMontage: Invalid FailShootMontageIndex %d."), MontageIndex);
		return;
	}
	
	float WeaponPlayRate;
	float CharacterPlayRate;
	GetShootPlayRates(ShootFailMontages[MontageIndex], WeaponPlayRate, CharacterPlayRate);
	StartWeaponMontage(
		ShootFailMontages[MontageIndex],
		WeaponPlayRate,
		CharacterPlayRate
	);
}

void UFirearmMontagesManager::OnBehaviourShootSuccess_Implementation(UShooterBehaviourBase* Behaviour, UShootBarrel* ShootBarrel, int32 ShotIndex)
{
	if (IsAnimShooting())
		return;
	
	int32 MontageIndex = 0;
	const UWeaponShootData* ShootData = Cast<UWeaponShootData>(Behaviour->ShootData);

	if (IsValid(ShootData))
		MontageIndex = ShootData->ShootMontageIndex;

	PlayShootMontage(MontageIndex);
}

void UFirearmMontagesManager::OnBehaviourShootFail_Implementation(UShooterBehaviourBase* Behaviour, EShootFailReason FailReason)
{
	if (IsAnimFailShooting())
		return;
	
	int32 MontageIndex = 0;
	const UWeaponShootData* ShootData = Cast<UWeaponShootData>(Behaviour->ShootData);

	if (IsValid(ShootData))
		MontageIndex = ShootData->FailShootMontageIndex;

	PlayFailShootMontage(MontageIndex);
}

void UFirearmMontagesManager::GetShootPlayRates(const FWeaponMontageData& WeaponMontageData, float& WeaponPlayRate, float& CharacterPlayRate) const
{
	WeaponPlayRate = 0.f;
	CharacterPlayRate = 0.f;
	const float SecondsPerShot = 60.f / WeaponFirearm->GetWeaponFireRate();
	
	if (IsValid(WeaponMontageData.GetWeaponMontage()))
		WeaponPlayRate = WeaponMontageData.GetWeaponMontage()->GetPlayLength() / SecondsPerShot;

	if (IsValid(WeaponMontageData.GetCharacterMontage()))
		CharacterPlayRate = WeaponMontageData.GetCharacterMontage()->GetPlayLength() / SecondsPerShot;
}

void UFirearmMontagesManager::HandleAnyMontageBegin(const FWeaponMontageData& WeaponMontageData)
{
	int32 Index = 0;

	if (ShootSuccessMontages.Contains(WeaponMontageData))
	{
		Index = ShootSuccessMontages.IndexOfByKey(WeaponMontageData);
		OnShootMontagePlayed.Broadcast(WeaponMontageData, Index);
		return;
	}

	if (ShootFailMontages.Contains(WeaponMontageData))
	{
		Index = ShootFailMontages.IndexOfByKey(WeaponMontageData);
		OnFailShootMontagePlayed.Broadcast(WeaponMontageData, Index);
		return;
	}

	if (ReloadMontages.Contains(WeaponMontageData))
	{
		Index = ReloadMontages.IndexOfByKey(WeaponMontageData);
		OnReloadMontagePlayed.Broadcast(WeaponMontageData, Index);
		return;
	}
}

void UFirearmMontagesManager::HandleAnyMontageFinished(const FWeaponMontageData& WeaponMontageData, bool bInterrupted)
{
	int32 Index = 0;

	if (ShootSuccessMontages.Contains(WeaponMontageData))
	{
		Index = ShootSuccessMontages.IndexOfByKey(WeaponMontageData);
		OnShootMontageEnded.Broadcast(WeaponMontageData, Index, bInterrupted);
		return;
	}

	if (ShootFailMontages.Contains(WeaponMontageData))
	{
		Index = ShootFailMontages.IndexOfByKey(WeaponMontageData);
		OnFailShootMontageEnded.Broadcast(WeaponMontageData, Index, bInterrupted);
		return;
	}

	if (ReloadMontages.Contains(WeaponMontageData))
	{
		Index = ReloadMontages.IndexOfByKey(WeaponMontageData);
		OnReloadMontageEnded.Broadcast(WeaponMontageData, Index, bInterrupted);
		return;
	}
}

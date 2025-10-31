// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Behaviours/Handlers/ShootModesHandler.h"
#include "Shooter/Shooter.h"

void UShootModesHandler::SetModeIndex(const int32 NewIndex)
{
	if (!ShootModes.IsValidIndex(NewIndex))
	{
		UE_LOG(LogShooter, Warning, TEXT("UShootModesHandler::SetModeIndex: Invalid ShootMode index %d."), NewIndex);
		return;
	}

	ShootModeIndex = NewIndex;
}

bool UShootModesHandler::RequestShoot(const EShootType ShootType) const
{
	UShootModeBase* CurrentShootMode = GetShootMode();
	if (!IsValid(CurrentShootMode))
	{
		UE_LOG(LogShooter, Warning, TEXT("UShootModesHandler::RequestShoot: Invalid ShootMode."));
		return false;
	}

	return CurrentShootMode->RequestShoot(ShootType);
}

void UShootModesHandler::EndSequence()
{
	for (UShootModeBase* ShootMode : ShootModes)
	{
		if (IsValid(ShootMode))
			ShootMode->EndSequence();
	}
	
	if (GetHandledRequests() <= 0)
		return;
	
	HandledRequests = 0;
	OnShootSequenceEnded.Broadcast();
}

bool UShootModesHandler::IsProcessingRequest() const
{
	for (const UShootModeBase* ShootMode : ShootModes)
	{
		if (ShootMode->IsProcessingRequest())
			return true;
	}
	
	return false;
}

int32 UShootModesHandler::GetModeIndex() const
{
	return ShootModeIndex;
}

int32 UShootModesHandler::GetHandledRequests() const
{
	return HandledRequests;
}

UShootModeBase* UShootModesHandler::GetShootMode() const
{
	if (!ShootModes.IsValidIndex(ShootModeIndex))
		return nullptr;

	return ShootModes[ShootModeIndex];
}

void UShootModesHandler::OnInit()
{
	Super::OnInit();

	UShootData* ShootData = GetShootData();
	if (ShootData->ShootModes.IsEmpty())
	{
		UE_LOG(LogShooter, Warning, TEXT("UShootModesHandler::OnInit: No ShootModes defined in ShootData '%s'."), *ShootData->GetName());
		return;
	}
	
	for (const UShootModeBase* ShootMode : ShootData->ShootModes)
	{
		if (IsValid(ShootMode))
		{
			UShootModeBase* NewShootMode = DuplicateObject<UShootModeBase>(ShootMode, this);
			NewShootMode->Init(Behaviour);
			NewShootMode->OnShootRequestHandled.AddDynamic(this, &UShootModesHandler::OnHandleShootRequest);
			ShootModes.Add(NewShootMode);
		}
	}
}

void UShootModesHandler::OnHandleShootRequest(UShootModeBase* ShootMode, bool bDeployShoot, bool bSuccess)
{
	OnShootRequestHandled.Broadcast(HandledRequests, ShootMode, bDeployShoot, bSuccess);
	HandledRequests++;
}

bool UShootModesHandler::Check() const
{
	return Super::Check() && ShootModes.IsEmpty();
}

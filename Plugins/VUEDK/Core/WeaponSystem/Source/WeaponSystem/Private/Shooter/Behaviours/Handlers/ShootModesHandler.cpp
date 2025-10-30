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

void UShootModesHandler::RequestShoot(const EShootType ShootType) const
{
	UShootMode* CurrentShootMode = GetShootMode();
	if (!IsValid(CurrentShootMode))
		return;

	CurrentShootMode->RequestShoot(ShootType);
}

void UShootModesHandler::EndSequence()
{
	if (GetHandledRequests() <= 0)
		return;
	
	HandledRequests = 0;
	OnShootSequenceEnded.Broadcast();
}

bool UShootModesHandler::IsProcessingRequest() const
{
	for (const UShootMode* ShootMode : ShootModes)
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

UShootMode* UShootModesHandler::GetShootMode() const
{
	if (!ShootModes.IsValidIndex(ShootModeIndex))
		return nullptr;

	return ShootModes[ShootModeIndex];
}

void UShootModesHandler::OnInit()
{
	Super::OnInit();

	UShootData* ShootData = GetShootData();
	for (const UShootMode* ShootMode : ShootData->ShootModes)
	{
		if (IsValid(ShootMode))
		{
			UShootMode* NewShootMode = DuplicateObject<UShootMode>(ShootMode, this);
			NewShootMode->Init(Behaviour);
			NewShootMode->OnShootRequestHandled.AddDynamic(this, &UShootModesHandler::OnHandleShootRequest);
			ShootModes.Add(NewShootMode);
		}
	}
}

void UShootModesHandler::OnHandleShootRequest(UShootMode* ShootMode, bool bDeployShoot, bool bSuccess)
{
	OnShootRequestHandled.Broadcast(HandledRequests, ShootMode, bDeployShoot, bSuccess);
	HandledRequests++;
}

bool UShootModesHandler::Check() const
{
	return Super::Check() && ShootModes.IsEmpty();
}

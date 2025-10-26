// Copyright VUEDK, Inc. All Rights Reserved.

#include "Montages/Data/WeaponMontageData.h"
#include "Montages/Utility/WeaponMontagesEventsHandler.h"

void FWeaponMontageData::CallBeginEvent(const UWorld* World) const
{
	OnMontageBegin.Broadcast();

	if (!IsValid(World))
		return;
		
	if (const UWeaponMontagesEventsHandler* EventsHandler = World->GetSubsystem<UWeaponMontagesEventsHandler>())
		EventsHandler->CallAnyMontageBeginEvent(*this);
}

void FWeaponMontageData::CallFinishEvent(const UWorld* World, const bool bInterrupted) const
{
	OnMontageFinished.Broadcast(bInterrupted);

	if (!IsValid(World))
		return;
		
	if (const UWeaponMontagesEventsHandler* EventsHandler = World->GetSubsystem<UWeaponMontagesEventsHandler>())
		EventsHandler->CallAnyMontageFinishedEvent(*this, bInterrupted);
}



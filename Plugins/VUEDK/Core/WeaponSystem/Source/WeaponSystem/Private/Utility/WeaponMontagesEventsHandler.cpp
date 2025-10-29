// Copyright VUEDK, Inc. All Rights Reserved.

#include "Utility/WeaponSystemEventsHandler.h"

void UWeaponSystemEventsHandler::Deinitialize()
{
	Super::Deinitialize();
	OnAnyMontageBegin.Clear();
	OnAnyMontageFinished.Clear();
}

void UWeaponSystemEventsHandler::CallAnyMontageBeginEvent(const FWeaponMontageData& WeaponMontageData) const
{
	OnAnyMontageBegin.Broadcast(WeaponMontageData);
}

void UWeaponSystemEventsHandler::CallAnyMontageFinishedEvent(const FWeaponMontageData& WeaponMontageData, bool bInterrupted) const
{
	OnAnyMontageFinished.Broadcast(WeaponMontageData, bInterrupted);
}

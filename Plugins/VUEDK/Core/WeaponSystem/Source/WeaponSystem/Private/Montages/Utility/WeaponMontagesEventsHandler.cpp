// Copyright VUEDK, Inc. All Rights Reserved.

#include "Montages/Utility/WeaponMontagesEventsHandler.h"

void UWeaponMontagesEventsHandler::Deinitialize()
{
	Super::Deinitialize();
	OnAnyMontageBegin.Clear();
	OnAnyMontageFinished.Clear();
}

void UWeaponMontagesEventsHandler::CallAnyMontageBeginEvent(const FWeaponMontageData& WeaponMontageData) const
{
	OnAnyMontageBegin.Broadcast(WeaponMontageData);
}

void UWeaponMontagesEventsHandler::CallAnyMontageFinishedEvent(const FWeaponMontageData& WeaponMontageData, bool bInterrupted) const
{
	OnAnyMontageFinished.Broadcast(WeaponMontageData, bInterrupted);
}

// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/InventorySystem/EKWeaponFirearmItem.h"

float UEKWeaponFirearmItem::GetFireRate_Implementation()
{
	return 0.0f;
}

float UEKWeaponFirearmItem::GetMaxRange_Implementation()
{
	return 0.0f;
}

int32 UEKWeaponFirearmItem::GetMagSize_Implementation()
{
	return 0;
}

int32 UEKWeaponFirearmItem::GetCurrentMagAmmo() const
{
	return CurrentMagAmmo;
}

void UEKWeaponFirearmItem::SetCurrentMagAmmo(const int32 NewAmmo)
{
	CurrentMagAmmo = FMath::Clamp(NewAmmo, 0, GetMagSize());
}

void UEKWeaponFirearmItem::NativeOnPostGeneration()
{
	Super::NativeOnPostGeneration();

	if (bHasNewMag)
	{
	    SetCurrentMagAmmo(GetMagSize());
		bHasNewMag = false;
	}
}

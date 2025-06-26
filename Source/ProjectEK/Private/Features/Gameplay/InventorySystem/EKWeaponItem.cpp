// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/InventorySystem/EKWeaponItem.h"
#include "Features/Gameplay/InventorySystem/Data/WeaponItemData.h"

UWeaponItemData* UEKWeaponItem::GetWeaponItemData() const
{
	return Cast<UWeaponItemData>(GetItemData());
}

float UEKWeaponItem::GetWeaponDamage_Implementation()
{
	return 0.0f;
}

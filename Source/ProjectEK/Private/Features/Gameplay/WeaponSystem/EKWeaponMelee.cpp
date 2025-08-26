// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/WeaponSystem/EKWeaponMelee.h"
#include "Features/Gameplay/InventorySystem/EKWeaponItem.h"
#include "Features/Gameplay/WeaponSystem/EKWeaponFirearm.h"

AEKWeaponMelee::AEKWeaponMelee(): WeaponItem(nullptr)
{
}

void AEKWeaponMelee::Init(APawn* InOwner, UObject* InPayload)
{
	Super::Init(InOwner, InPayload);

	if (!IsValid(InPayload))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("AEKWeapon::Init: InPayload is nullptr."));
		return;
	}

	const float Damage = GetWeaponMeleeItem()->GetWeaponDamage();
	SetWeaponDamage(Damage);
}

UEKWeaponItem* AEKWeaponMelee::GetWeaponMeleeItem() const
{
	if (!IsValid(WeaponItem))
		return Cast<UEKWeaponItem>(GetPayload());

	return WeaponItem;
}

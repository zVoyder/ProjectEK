// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/WeaponSystem/EKWeaponFirearm.h"

AEKWeaponFirearm::AEKWeaponFirearm(): WeaponFirearmItem(nullptr)
{
}

void AEKWeaponFirearm::Init(APawn* InOwner, UObject* InPayload)
{
	Super::Init(InOwner, InPayload);
	
	if (!IsValid(InPayload))
	{
		UE_LOG(LogEKWeapons, Display, TEXT("AEKWeaponFirearm::Init: Payload is nullptr."));
		return;
	}
	
	WeaponFirearmItem = GetWeaponFirearmItem();
	const float Damage = WeaponFirearmItem->GetWeaponDamage();
	const float FireRate = WeaponFirearmItem->GetFireRate();
	const float MaxRange = WeaponFirearmItem->GetMaxRange();
	const int32 MagSize = WeaponFirearmItem->GetMagSize();

	SetWeaponDamage(Damage);
	SetWeaponFireRate(FireRate);
	SetWeaponMaxRange(MaxRange);
	SetWeaponMagSize(MagSize);
}

UEKWeaponFirearmItem* AEKWeaponFirearm::GetWeaponFirearmItem() const
{
	if (!IsValid(WeaponFirearmItem))
		return Cast<UEKWeaponFirearmItem>(GetPayload());

	return WeaponFirearmItem;
}

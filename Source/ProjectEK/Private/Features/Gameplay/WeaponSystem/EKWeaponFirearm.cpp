// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/WeaponSystem/EKWeaponFirearm.h"

#include "Utility/ISInventoriesUtility.h"

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
	SetWeaponDamage(Damage);

	if (bUseItemFireRate)
	{
		const float FireRate = WeaponFirearmItem->GetFireRate();
		SetWeaponFireRate(FireRate);
	}

	if (bUseItemMagSize)
	{
		const int32 MagSize = WeaponFirearmItem->GetMagSize();
		SetWeaponMagSize(MagSize);
	}
}

UEKWeaponFirearmItem* AEKWeaponFirearm::GetWeaponFirearmItem() const
{
	if (!IsValid(WeaponFirearmItem))
		return Cast<UEKWeaponFirearmItem>(GetPayload());

	return WeaponFirearmItem;
}

bool AEKWeaponFirearm::TryReloadWithItemData()
{
	const UInventoryBase* MainInventory = UISInventoriesUtility::GetMainInventory();

	if (!IsValid(MainInventory))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::ReloadWithItem: MainInventory is not valid."));
		return false;
	}

	if (!IsValid(AmmoItemData))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::ReloadWithItem: AmmoItemData is not valid."));
		return false;
	}

	const int32 MaxItemStack = AmmoItemData->MaxStackSize;
	TArray<UItemBase*> FoundItems = MainInventory->FindAll(AmmoItemData);
	if (FoundItems.Num() == 0)
		return false;

	const int32 InAmount = GetWeaponMagSize() - GetCurrentAmmo();
	int32 QuantityToReload = InAmount;
	for (UItemBase* Item : FoundItems)
	{
		if (QuantityToReload <= 0)
			break;

		const int32 ItemQuantity = Item->GetCurrentQuantity();
		if (QuantityToReload < ItemQuantity)
		{
			Item->DecreaseQuantity(QuantityToReload);
			QuantityToReload = 0;
			break;
		}
		else
		{
			Item->Remove();
			QuantityToReload -= ItemQuantity;
		}
	}

	if (QuantityToReload <= 0)
	{
		ReloadWithMontage(GetWeaponAmmoType(), InAmount - QuantityToReload);
		return true;
	}

	return false;
}

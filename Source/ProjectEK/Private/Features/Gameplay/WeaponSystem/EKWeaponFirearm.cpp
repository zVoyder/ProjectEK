// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/WeaponSystem/EKWeaponFirearm.h"

#include "Utility/ISInventoriesUtility.h"

AEKWeaponFirearm::AEKWeaponFirearm() : WeaponFirearmItem(nullptr)
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

	const int32 MagSize = WeaponFirearmItem->GetMagSize();
	SetWeaponMagSize(MagSize);
	SetCurrentAmmo(WeaponFirearmItem->GetCurrentMagAmmo());
}

UEKWeaponFirearmItem* AEKWeaponFirearm::GetWeaponFirearmItem() const
{
	if (!IsValid(WeaponFirearmItem))
		return Cast<UEKWeaponFirearmItem>(GetPayload());

	return WeaponFirearmItem;
}

void AEKWeaponFirearm::ReloadWithItemData()
{
	if (!IsValid(AmmoItemData))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::ReloadWithItem: AmmoItemData is not valid."));
		return;
	}

	const UInventoryBase* MainInventory = UISInventoriesUtility::GetMainInventory();
	if (!IsValid(MainInventory))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::OnReloadSuccess_Implementation: MainInventory is not valid."));
		return;
	}

	bIsReloadingWithItemData = true;
	const int32 MaxItemStack = AmmoItemData->MaxStackSize;
	TArray<UItemBase*> FoundItems = MainInventory->FindAll(AmmoItemData);
	if (FoundItems.Num() == 0)
		return;

	const int32 InAmount = GetWeaponMagSize() - GetCurrentAmmo();
	int32 QuantityToReload = InAmount;
	for (UItemBase* Item : FoundItems)
	{
		if (QuantityToReload <= 0)
			break;

		const int32 ItemQuantity = Item->GetCurrentQuantity();
		if (QuantityToReload < ItemQuantity)
		{
			ReloadingItems.Add(Item, QuantityToReload);
			QuantityToReload = 0;
			break;
		}
		else
		{
			ReloadingItems.Add(Item, ItemQuantity);
			QuantityToReload -= ItemQuantity;
		}
	}

	ReloadWithMontage(GetWeaponAmmoType(), InAmount - QuantityToReload);
}

bool AEKWeaponFirearm::CanReload_Implementation() const
{
	return Super::CanReload_Implementation() && CanReloadWithItemData();
}

bool AEKWeaponFirearm::CanReloadWithItemData() const
{
	if (!bIsReloadingWithItemData)
		return true;
	
	if (!IsValid(AmmoItemData))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::CanReloadWithItemData: AmmoItemData is not valid."));
		return false;
	}

	const UInventoryBase* MainInventory = UISInventoriesUtility::GetMainInventory();

	if (!IsValid(MainInventory))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::CanReloadWithItemData: MainInventory is not valid."));
		return false;
	}

	const TArray<UItemBase*> FoundItems = MainInventory->FindAll(AmmoItemData);
	return FoundItems.Num() > 0;
}

void AEKWeaponFirearm::OnCurrentAmmoChanged_Implementation(int32 CurrentAmmo, int32 MagSize)
{
	Super::OnCurrentAmmoChanged_Implementation(CurrentAmmo, MagSize);

	if (IsValid(WeaponFirearmItem))
		WeaponFirearmItem->SetCurrentMagAmmo(CurrentAmmo);
}

void AEKWeaponFirearm::OnReloadSuccess_Implementation(float Remain, float ReloadedAmmo)
{
	Super::OnReloadSuccess_Implementation(Remain, ReloadedAmmo);

	for (const TPair<UItemBase*, int32>& Pair : ReloadingItems)
	{
		UItemBase* Item = Pair.Key;
		const int32 Quantity = Pair.Value;

		if (!IsValid(Item))
			continue;

		Item->DecreaseQuantity(Quantity);
	}
}

void AEKWeaponFirearm::OnReloadEnd_Implementation()
{
	Super::OnReloadEnd_Implementation();
	bIsReloadingWithItemData = false;
	ReloadingItems.Empty();
}

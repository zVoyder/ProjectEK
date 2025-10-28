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
	if (!IsValid(WeaponFirearmItem))
	{
		UE_LOG(LogEKWeapons, Warning, TEXT("AEKWeaponFirearm::Init: WeaponFirearmItem is not valid."));
		return;
	}
	
	if (bUseItemFireRate)
	{
		const float FireRate = WeaponFirearmItem->GetFireRate();
		SetWeaponFireRate(FireRate);
	}
	
	SetWeaponDamage(WeaponFirearmItem->GetWeaponDamage());
	SetWeaponMagazineSize(WeaponFirearmItem->GetMagSize());
	SetCurrentAmmo(WeaponFirearmItem->GetCurrentMagAmmo());
}

UEKWeaponFirearmItem* AEKWeaponFirearm::GetWeaponFirearmItem() const
{
	if (!IsValid(WeaponFirearmItem))
		return Cast<UEKWeaponFirearmItem>(GetPayload());

	return WeaponFirearmItem;
}

bool AEKWeaponFirearm::CanReload_Implementation() const
{
	return Super::CanReload_Implementation() && CanReloadWithItemData();
}

bool AEKWeaponFirearm::CanReloadWithItemData() const
{
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

void AEKWeaponFirearm::OnBehaviourAmmoChange_Implementation(UShooterBehaviourBase* Behaviour, UMagazine* Magazine, int32 CurrentAmmo, int32 MagSize)
{
	Super::OnBehaviourAmmoChange_Implementation(Behaviour, Magazine, CurrentAmmo, MagSize);

	// Since this game doesn't need multiple behaviours, we can directly update a single variable.
	// Otherwise, we could map magazines tags to their respective ammo counts.
	if (IsValid(WeaponFirearmItem))
		WeaponFirearmItem->SetCurrentMagAmmo(CurrentAmmo);
}

void AEKWeaponFirearm::OnReloadInsertAmmo_Implementation(UShooterBehaviourBase* Behaviour, int32 InsertedAmmo, int32 RemainingAmmo)
{
	Super::OnReloadInsertAmmo_Implementation(Behaviour, InsertedAmmo, RemainingAmmo);

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
	
	TArray<UItemBase*> FoundItems = MainInventory->FindAll(AmmoItemData);
	int32 ReloadedAmount = InsertedAmmo;
	for (UItemBase* Item : FoundItems)
	{
		if (ReloadedAmount <= 0)
			break;

		const int32 ItemQuantity = Item->GetCurrentQuantity();
		if (ReloadedAmount < ItemQuantity)
		{
			Item->DecreaseQuantity(ReloadedAmount);
			ReloadedAmount = 0;
			break;
		}
		else
		{
			Item->Remove();
			ReloadedAmount -= ItemQuantity;
		}
	}
}

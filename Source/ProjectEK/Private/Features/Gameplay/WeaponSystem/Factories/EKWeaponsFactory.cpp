// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/WeaponSystem/Factories/EKWeaponsFactory.h"
#include "Features/Gameplay/InventorySystem/EKWeaponFirearmItem.h"
#include "Features/Gameplay/InventorySystem/Data/WeaponItemData.h"

AWeaponBase* UEKWeaponsFactory::CreateWeapon(APawn* Owner, UItemBase* Item)
{
	if (Item->IsA(UEKWeaponFirearmItem::StaticClass()))
		return CreateEKWeaponFirearm(Owner, Cast<UEKWeaponFirearmItem>(Item));

	if (Item->IsA(UEKWeaponItem::StaticClass()))
		return CreateEKWeaponMelee(Owner, Cast<UEKWeaponItem>(Item));
	
	return nullptr;
}

AEKWeaponMelee* UEKWeaponsFactory::CreateEKWeaponMelee(APawn* Owner, UEKWeaponItem* WeaponItem)
{
	AEKWeaponMelee* Weapon = Cast<AEKWeaponMelee>(SpawnWeaponActor(Owner, WeaponItem));

	if (!IsValid(Weapon))
		return nullptr;

	Weapon->Init(Owner, WeaponItem);
	return Weapon;
}

AEKWeaponFirearm* UEKWeaponsFactory::CreateEKWeaponFirearm(APawn* Owner, UEKWeaponFirearmItem* WeaponItem)
{
	AEKWeaponFirearm* WeaponFirearm = Cast<AEKWeaponFirearm>(SpawnWeaponActor(Owner, WeaponItem));

	if (!IsValid(WeaponFirearm))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("UEKWeaponsFactory::CreateWeaponFirearm: WeaponFirearm is nullptr"));
		return nullptr;
	}

	WeaponFirearm->Init(Owner, WeaponItem);
	return WeaponFirearm;
}

AActor* UEKWeaponsFactory::SpawnWeaponActor(const UObject* Instigator, const UEKWeaponItem* WeaponItem)
{
	if (!IsValid(Instigator))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("UEKWeaponsFactory::SpawnWeaponActor: Instigator is not valid."));
		return nullptr;
	}

	if (!IsValid(WeaponItem))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("UEKWeaponsFactory::SpawnWeaponActor: WeaponItem is nullptr"));
		return nullptr;
	}

	const UWeaponItemData* WeaponItemData = WeaponItem->GetWeaponItemData();

	if (!IsValid(WeaponItemData))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("UEKWeaponsFactory::SpawnWeaponActor: WeaponItemData is nullptr"));
		return nullptr;
	}

	UWorld* World = Instigator->GetWorld();
	if (!IsValid(World))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("UEKWeaponsFactory::SpawnWeaponActor: World is nullptr"));
		return nullptr;
	}

	AActor* WeaponActor = World->SpawnActor(WeaponItemData->WeaponClass);

	if (!IsValid(WeaponActor))
	{
		UE_LOG(LogEKWeapons, Error, TEXT("UEKWeaponsFactory::SpawnWeaponActor: WeaponActor is nullptr"));
		return nullptr;
	}

	return WeaponActor;
}

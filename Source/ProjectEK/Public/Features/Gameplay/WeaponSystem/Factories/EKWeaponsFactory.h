// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Features/Gameplay/InventorySystem/EKWeaponItem.h"
#include "Features/Gameplay/WeaponSystem/EKWeaponFirearm.h"
#include "Features/Gameplay/WeaponSystem/EKWeaponMelee.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EKWeaponsFactory.generated.h"

UCLASS()
class PROJECTEK_API UEKWeaponsFactory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static AWeaponBase* CreateWeapon(APawn* Owner, UItemBase* Item);

	static AEKWeaponMelee* CreateEKWeaponMelee(APawn* Owner, UEKWeaponItem* WeaponItem);
	
	static AEKWeaponFirearm* CreateEKWeaponFirearm(APawn* Owner, UEKWeaponFirearmItem* WeaponItem);

private:
	static AActor* SpawnWeaponActor(const UObject* Instigator, const UEKWeaponItem* WeaponItem);
};

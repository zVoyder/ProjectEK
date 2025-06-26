// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGInventory/Data/RPGGearItemData.h"
#include "Features/Gameplay/InventorySystem/EKWeaponItem.h"
#include "Weapons/WeaponBase.h"
#include "WeaponItemData.generated.h"

UCLASS()
class PROJECTEK_API UWeaponItemData : public URPGGearItemData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<AWeaponBase> WeaponClass;

public:
	UWeaponItemData()
	{
		ItemClass = UEKWeaponItem::StaticClass();
	}
};

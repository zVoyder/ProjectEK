// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGInventory/Items/RPGGearItem.h"
#include "EKWeaponItem.generated.h"

class UWeaponItemData;

UCLASS()
class PROJECTEK_API UEKWeaponItem : public URPGGearItem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	UWeaponItemData* GetWeaponItemData() const;
	
	UFUNCTION(BlueprintNativeEvent)
	float GetWeaponDamage();
};

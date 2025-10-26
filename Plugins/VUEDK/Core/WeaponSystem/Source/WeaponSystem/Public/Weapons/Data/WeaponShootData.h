// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Shooter/Data/ShootData.h"
#include "WeaponShootData.generated.h"

/**
 * This asset is intended to be used with a ShooterBehaviour tied to a weapon.
 * If you don't need using a UWeaponFirearm, you can use UShootData directly for your behaviours.
 */
UCLASS()
class WEAPONSYSTEM_API UWeaponShootData : public UShootData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Montages")
	int32 ShootMontageIndex = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Montages")
	int32 FailShootMontageIndex = 0;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Montages")
	int32 ReloadMontageIndex = 0;
};

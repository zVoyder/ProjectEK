// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WeaponMontageData.h"
#include "Engine/DataAsset.h"
#include "WeaponMeleeAttackMontageData.generated.h"

UCLASS()
class WEAPONSYSTEM_API UWeaponMeleeAttackMontageData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Montages")
	FWeaponMontageData AttackMontage;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Montages")
	FWeaponMontageData AttackInterruptMontage;
};

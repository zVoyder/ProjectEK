// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WeaponMeleeData.generated.h"

USTRUCT(BlueprintType)
struct WEAPONSYSTEM_API FWeaponMeleeData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TEnumAsByte<ECollisionChannel> DamageHitBoxChannel = ECC_Visibility;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UDamageType> DamageTypeClass = UDamageType::StaticClass();
};

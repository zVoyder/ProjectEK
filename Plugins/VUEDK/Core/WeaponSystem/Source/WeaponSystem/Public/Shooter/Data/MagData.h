// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/Data/AmmoTypeData.h"
#include "MagData.generated.h"

USTRUCT(BlueprintType)
struct WEAPONSYSTEM_API FMagData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAmmoTypeData* AmmoType;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 DefaultSize;
};

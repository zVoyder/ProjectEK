// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ReloadEntry.generated.h"

class UAmmoTypeData;

USTRUCT(BlueprintType)
struct WEAPONSYSTEM_API FReloadEntry
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	bool bIsMainBehaviour;
	UPROPERTY(BlueprintReadWrite, meta = (EditCondition = "!bIsMainBehaviour"))
	int32 BehaviourIndex;
	UPROPERTY(BlueprintReadWrite)
	UAmmoTypeData* AmmoType;
	UPROPERTY(BlueprintReadWrite)
	int32 AmmoToInsert;
};

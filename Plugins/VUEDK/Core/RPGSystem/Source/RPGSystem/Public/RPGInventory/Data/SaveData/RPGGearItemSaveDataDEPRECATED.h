// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGItemSaveDataDEPRECATED.h"
#include "RPGGearItemSaveDataDEPRECATED.generated.h"

USTRUCT(BlueprintType)
struct FRPGGearItemSaveDataDEPRECATED
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FRPGItemSaveDataDEPRECATED RPGItemSaveData;
	UPROPERTY(BlueprintReadWrite)
	TMap<FGuid, float> GearStats;

	FRPGGearItemSaveDataDEPRECATED(): RPGItemSaveData()
	{
	}
};

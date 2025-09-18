// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGInventory/Data/SaveData/RPGGearItemSaveDataDEPRECATED.h"
#include "RPGGearItemsSaveArray.generated.h"

USTRUCT(BlueprintType)
struct FRPGGearItemsSaveArray
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRPGGearItemSaveDataDEPRECATED> GearItems;

	FRPGGearItemsSaveArray()
	{
		GearItems = TArray<FRPGGearItemSaveDataDEPRECATED>();
	}
};

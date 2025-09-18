// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGInventory/Data/SaveData/RPGItemSaveDataDEPRECATED.h"
#include "RPGItemsSaveArray.generated.h"

USTRUCT(BlueprintType)
struct FRPGItemsSaveArray
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FRPGItemSaveDataDEPRECATED> Items;

	FRPGItemsSaveArray()
	{
		Items = TArray<FRPGItemSaveDataDEPRECATED>();
	}
};

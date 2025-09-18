// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TetrisInventory/Data/SaveData/TetrisItemSaveDataDEPRECATED.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"
#include "RPGItemSaveDataDEPRECATED.generated.h"

USTRUCT(BlueprintType)
struct FRPGItemSaveDataDEPRECATED
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite)
	FTetrisItemSaveDataDEPRECATED TetrisItemSaveData;
	UPROPERTY(BlueprintReadWrite)
	FGuid RarityID;
	UPROPERTY(BlueprintReadWrite)
	FRPGItemVisualDetails VisualDetails;
};

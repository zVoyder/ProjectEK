// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TetrisInventory/Data/SaveData/TetrisItemSaveDataDEPRECATED.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"
#include "RPGItemSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRPGItemSaveData
{
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite)
	FTetrisItemSaveDataDEPRECATED TetrisItemSaveData;
	UPROPERTY(BlueprintReadWrite)
	FGuid RarityID;
	UPROPERTY(BlueprintReadWrite)
	FRPGItemVisualDetails VisualDetails;
};

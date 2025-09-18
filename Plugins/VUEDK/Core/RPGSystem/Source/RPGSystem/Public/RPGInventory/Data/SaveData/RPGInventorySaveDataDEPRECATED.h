// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGInventoryItemsSaveData.h"
#include "TetrisInventory/Data/SaveData/TetrisInventorySaveDataDEPRECATED.h"
#include "RPGInventorySaveDataDEPRECATED.generated.h"

UCLASS()
class RPGSYSTEM_API URPGInventorySaveDataDEPRECATED : public UInventoryBaseSaveDataDEPRECATED
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true))
	FRPGInventoryItemsSaveData RPGItemsSaveData;
};

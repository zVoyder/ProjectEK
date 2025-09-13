// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TetrisItemsSaveArray.h"
#include "Base/Data/SaveData/InventoryBaseSaveDataDEPRECATED.h"
#include "TetrisInventorySaveDataDEPRECATED.generated.h"

UCLASS()
class INVENTORYSYSTEM_API UTetrisInventorySaveDataDEPRECATED : public UInventoryBaseSaveDataDEPRECATED
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGuid, FTetrisItemsSaveArray> TetrisItems;
};

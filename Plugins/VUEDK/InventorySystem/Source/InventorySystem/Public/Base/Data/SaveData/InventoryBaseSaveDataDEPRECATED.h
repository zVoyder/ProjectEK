// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData.h"
#include "InventoryBaseSaveDataDEPRECATED.generated.h"

UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UInventoryBaseSaveDataDEPRECATED : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double MaxWeight;
};

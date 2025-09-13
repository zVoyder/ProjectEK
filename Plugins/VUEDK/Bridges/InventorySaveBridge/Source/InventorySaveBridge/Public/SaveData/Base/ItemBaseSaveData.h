// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData.h"
#include "ItemBaseSaveData.generated.h"

UCLASS()
class INVENTORYSAVEBRIDGE_API UItemBaseSaveData : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame, BlueprintReadOnly)
	int32 SavedQuantity;
	UPROPERTY(SaveGame, BlueprintReadOnly)
	int32 SavedEquipSlotIndex;
};

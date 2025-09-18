// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData/SaveDataBase.h"
#include "Data/SaveData/SaveDataBase.h"
#include "ItemBaseSaveData.generated.h"

class UItemBase;

UCLASS()
class INVENTORYSAVEBRIDGE_API UItemBaseSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame, BlueprintReadOnly)
	FGuid SavedItemDataID;
	UPROPERTY(SaveGame, BlueprintReadOnly)
	int32 SavedQuantity;
	UPROPERTY(SaveGame, BlueprintReadOnly)
	int32 SavedEquipSlotIndex;

public:
	virtual bool SaveObjectDataNative(UObject* ObjectToSave) override;

	virtual bool LoadObjectDatatNative(UObject* ObjectToLoad) override;
};

// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGItemsGeneration/Data/Visuals/RPGItemVisualDetails.h"
#include "SaveData/TetrisInventory/TetrisItemSaveData.h"
#include "RPGItemSaveData.generated.h"

UCLASS()
class RPGSAVEBRIDGE_API URPGItemSaveData : public UTetrisItemSaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	FGuid SavedRarityID;
	UPROPERTY(BlueprintReadWrite, SaveGame)
	FRPGItemVisualDetails SavedVisualDetails;

public:
	virtual bool SaveObjectDataNative(UObject* ObjectToSave) override;

	virtual bool LoadObjectDataNative(UObject* ObjectToLoad) override;
};

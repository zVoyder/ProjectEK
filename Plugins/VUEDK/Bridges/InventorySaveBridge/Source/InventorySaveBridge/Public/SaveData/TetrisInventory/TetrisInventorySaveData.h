// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SaveData/Base/InventoryBaseSaveData.h"
#include "TetrisInventorySaveData.generated.h"

UCLASS()
class INVENTORYSAVEBRIDGE_API UTetrisInventorySaveData : public UInventoryBaseSaveData
{
	GENERATED_BODY()

public:
	virtual UItemBaseSaveData* CreateItemSaveDataInstance_Implementation() override;
	
protected:
	virtual void SaveItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData) override;

	virtual void PostLoadItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData) override;
};

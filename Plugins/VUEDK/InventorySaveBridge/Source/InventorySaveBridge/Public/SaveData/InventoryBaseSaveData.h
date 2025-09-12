// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ItemBaseSaveData.h"
#include "Data/SaveData.h"
#include "InventoryBaseSaveData.generated.h"

class UItemBase;

UCLASS()
class INVENTORYSAVEBRIDGE_API UInventoryBaseSaveData : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame, BlueprintReadOnly)
	TArray<UItemBaseSaveData*> SavedItemsData;
	UPROPERTY(SaveGame, BlueprintReadOnly)
	double SavedMaxWeight;

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintPure)
	UItemBaseSaveData* CreateItemSaveData(UItemBase* Item);

	virtual void SaveItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "SaveItem"))
	void ReceiveSaveItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData);

	virtual void LoadItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData);
	
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "LoadItem"))
	void ReceiveLoadItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData);
};

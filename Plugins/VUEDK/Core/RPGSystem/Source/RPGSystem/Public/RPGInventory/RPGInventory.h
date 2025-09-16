// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData/RPGInventoryItemsSaveData.h"
#include "TetrisInventory/TetrisInventory.h"
#include "RPGInventory.generated.h"

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class RPGSYSTEM_API URPGInventory : public UTetrisInventory
{
	GENERATED_BODY()
	
public:
	URPGInventory();

protected:
	virtual USaveDataBase* CreateSaveDataObject_Implementation() override;

	virtual USaveDataBase* CreateInventorySaveData_Implementation(USaveDataBase* SaveData, TArray<UItemBase*>& ItemsToSave) override;

	virtual void LoadInventorySaveData_Implementation(UInventoryBaseSaveDataDEPRECATED* InventorySaveData) override;

	void CreateRPGInventorySaveData(FRPGInventoryItemsSaveData& RPGItemsSaveData, TArray<UItemBase*>& ItemsToSave);

	void LoadRPGInventorySaveData(FRPGInventoryItemsSaveData& RPGItemsSaveData);
};

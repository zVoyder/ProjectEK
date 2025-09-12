// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/InventoryBase.h"
#include "Components/Savers/Behaviours/SaveBehaviourBase.h"
#include "SaveData/InventoryBaseSaveData.h"
#include "SaveData/ItemBaseSaveData.h"
#include "InventorySaveBehaviour.generated.h"

UCLASS()
class INVENTORYSAVEBRIDGE_API UInventorySaveBehaviour : public USaveBehaviourBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSubclassOf<UInventoryBaseSaveData> InventorySaveDataClass = UInventoryBaseSaveData::StaticClass();
	
protected:
	UPROPERTY()
	UInventoryBase* Inventory;
	
public:
	virtual void BeginPlay() override;

	virtual USaveData* CreateSaveDataInstance_Implementation() override;

	virtual bool Save_Implementation(USaveData* SaveData) override;

	virtual bool Load_Implementation(USaveData* SaveData) override;

private:
	bool Check() const;
};

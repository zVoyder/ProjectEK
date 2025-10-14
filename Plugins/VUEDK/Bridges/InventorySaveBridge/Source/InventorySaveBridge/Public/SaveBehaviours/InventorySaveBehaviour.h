// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/InventoryBase.h"
#include "Components/Savers/Behaviours/SaveBehaviourBase.h"
#include "SaveData/Base/InventoryBaseSaveData.h"
#include "InventorySaveBehaviour.generated.h"

UCLASS()
class INVENTORYSAVEBRIDGE_API UInventorySaveBehaviour : public USaveBehaviourBase
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UInventoryBase* Inventory;
	
public:
	UInventorySaveBehaviour();
	
	virtual void BeginPlay() override;

	virtual USaveDataBase* CreateSaveDataInstance_Implementation() override;

	virtual bool Save_Implementation(USaveDataBase* SaveData) override;

	virtual bool Load_Implementation(USaveDataBase* SaveData) override;
	
	virtual bool Check() const override;
};

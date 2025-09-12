// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveBehaviours/InventorySaveBehaviour.h"

#include "InventorySaveBridge.h"

void UInventorySaveBehaviour::BeginPlay()
{
	const AActor* Actor = GetOwnerActor();
	if (!IsValid(Actor))
		return;

	Inventory = Cast<UInventoryBase>(Actor->FindComponentByClass<UInventoryBase>());
	Super::BeginPlay();
}

USaveData* UInventorySaveBehaviour::CreateSaveDataInstance_Implementation()
{
	UInventoryBaseSaveData* InventoryBaseSaveData = NewObject<UInventoryBaseSaveData>(this, InventorySaveDataClass);

	for (UItemBase* Item : Inventory->GetItems())
	{
		if (!IsValid(Item))
			continue;

		UItemBaseSaveData* ItemSaveData = InventoryBaseSaveData->CreateItemSaveData(Item);
		if (!IsValid(ItemSaveData))
			continue;

		InventoryBaseSaveData->SavedItemsData.Add(ItemSaveData);
	}

	return InventoryBaseSaveData;
}

bool UInventorySaveBehaviour::Save_Implementation(USaveData* SaveData)
{
	if (!Check())
		return false;

	UInventoryBaseSaveData* InventorySaveData = Cast<UInventoryBaseSaveData>(SaveData);
	if (!IsValid(InventorySaveData))
	{
		UE_LOG(LogInventorySaveBridge, Warning, TEXT("UInventorySaveBehaviour::Save_Implementation: SaveData is not of type UInventoryBaseSaveData."));
		return false;
	}

	for (UItemBase* Item : Inventory->GetItems())
	{
		if (!IsValid(Item))
			continue;

		UItemBaseSaveData* ItemSaveData = InventorySaveData->CreateItemSaveData(Item);
		if (!IsValid(ItemSaveData))
			continue;

		InventorySaveData->SaveItem(Item, ItemSaveData);
	}

	return Super::Save_Implementation(SaveData);
}

bool UInventorySaveBehaviour::Load_Implementation(USaveData* SaveData)
{
	if (!Check())
		return false;

	UInventoryBaseSaveData* InventorySaveData = Cast<UInventoryBaseSaveData>(SaveData);
	if (!IsValid(InventorySaveData))
	{
		UE_LOG(LogInventorySaveBridge, Warning, TEXT("UInventorySaveBehaviour::Save_Implementation: SaveData is not of type UInventoryBaseSaveData."));
		return false;
	}

	for (UItemBaseSaveData* ItemSaveData : InventorySaveData->SavedItemsData)
	{
		if (!IsValid(ItemSaveData))
			continue;

		UItemBase* Item = NewObject<UItemBase>(this);
		if (!IsValid(Item))
			continue;

		InventorySaveData->LoadItem(Item, ItemSaveData);
		Inventory->TryAddItem(Item);
	}

	return Super::Load_Implementation(SaveData);
}

bool UInventorySaveBehaviour::Check() const
{
	return IsValid(Inventory);
}

// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/InventoryBaseSaveData.h"
#include "InventorySaveBridge.h"
#include "Base/ItemBase.h"

UItemBaseSaveData* UInventoryBaseSaveData::CreateItemSaveData_Implementation(UItemBase* Item)
{
	if (!IsValid(Item))
		return nullptr;

	UItemBaseSaveData* ItemSaveData = NewObject<UItemBaseSaveData>(this);
	return ItemSaveData;
}

void UInventoryBaseSaveData::SaveItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	if (!IsValid(Item))
	{
		UE_LOG(LogInventorySaveBridge, Error, TEXT("UInventoryBaseSaveData::SaveItem: Invalid Item."));
		return;
	}

	if (!IsValid(ItemSaveData))
	{
		UE_LOG(LogInventorySaveBridge, Error, TEXT("UInventoryBaseSaveData::SaveItem: Invalid ItemSaveData."));
		return;
	}

	ItemSaveData->SavedQuantity = Item->GetCurrentQuantity();
	ItemSaveData->SavedEquipSlotIndex = Item->GetEquipSlotIndex();
	ReceiveSaveItem(Item, ItemSaveData);
	SavedItemsData.Add(ItemSaveData);
}

void UInventoryBaseSaveData::LoadItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	if (!IsValid(Item))
	{
		UE_LOG(LogInventorySaveBridge, Error, TEXT("UInventoryBaseSaveData::LoadItem: Invalid Item."));
		return;
	}
	
	if (!IsValid(ItemSaveData))
	{
		UE_LOG(LogInventorySaveBridge, Error, TEXT("UInventoryBaseSaveData::LoadItem: Invalid ItemSaveData."));
		return;
	}

	Item->SetQuantity(ItemSaveData->SavedQuantity);
	Item->SetEquipSlotIndex(ItemSaveData->SavedEquipSlotIndex);
}

// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/Base/InventoryBaseSaveData.h"
#include "InventorySaveBridge.h"
#include "Base/ItemBase.h"

UItemBaseSaveData* UInventoryBaseSaveData::CreateItemSaveData_Implementation()
{
	UItemBaseSaveData* ItemSaveData = NewObject<UItemBaseSaveData>(this);
	return ItemSaveData;
}

void UInventoryBaseSaveData::SaveItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	SaveItemNative(Item, ItemSaveData);
	ReceiveSaveItem(Item, ItemSaveData);
	SavedItemsData.Add(ItemSaveData);
}

void UInventoryBaseSaveData::PostSaveItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	PostSaveItemNative(Item, ItemSaveData);
	ReceivePostSaveItem(Item, ItemSaveData);
}

void UInventoryBaseSaveData::LoadItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	LoadItemNative(Item, ItemSaveData);
	ReceiveLoadItem(Item, ItemSaveData);
}

void UInventoryBaseSaveData::PostLoadItem(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	PostLoadItemNative(Item, ItemSaveData);
	ReceivePostLoadItem(Item, ItemSaveData);
}

void UInventoryBaseSaveData::SaveItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	ItemSaveData->SavedQuantity = Item->GetCurrentQuantity();
	ItemSaveData->SavedEquipSlotIndex = Item->GetEquipSlotIndex();
}

void UInventoryBaseSaveData::PostSaveItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
}

void UInventoryBaseSaveData::LoadItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	Item->SetQuantity(ItemSaveData->SavedQuantity);
	Item->SetEquipSlotIndex(ItemSaveData->SavedEquipSlotIndex);
}

void UInventoryBaseSaveData::PostLoadItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
}

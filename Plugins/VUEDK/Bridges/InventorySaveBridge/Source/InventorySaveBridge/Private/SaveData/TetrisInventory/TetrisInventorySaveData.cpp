// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/TetrisInventory/TetrisInventorySaveData.h"
#include "SaveData/TetrisInventory/TetrisItemSaveData.h"
#include "TetrisInventory/TetrisItem.h"

UItemBaseSaveData* UTetrisInventorySaveData::CreateItemSaveDataInstance_Implementation()
{
	return NewObject<UTetrisItemSaveData>(this);
}

void UTetrisInventorySaveData::SaveItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	Super::SaveItemNative(Item, ItemSaveData);
	
	UTetrisItemSaveData* TetrisItemSaveData = Cast<UTetrisItemSaveData>(ItemSaveData);
	if (!IsValid(TetrisItemSaveData))
		return;

	const UTetrisItem* TetrisItem = Cast<UTetrisItem>(Item);
	if (!IsValid(TetrisItem))
		return;

	TetrisItemSaveData->SlotPosition = TetrisItem->GetCurrentPosition();
	TetrisItemSaveData->bIsRotated = TetrisItem->IsRotated();
}

void UTetrisInventorySaveData::PostLoadItemNative(UItemBase* Item, UItemBaseSaveData* ItemSaveData)
{
	Super::PostLoadItemNative(Item, ItemSaveData);

	if (Item->IsEquipped())
		return;
	
	const UTetrisItemSaveData* TetrisItemSaveData = Cast<UTetrisItemSaveData>(ItemSaveData);
	if (!IsValid(TetrisItemSaveData))
		return;

	UTetrisItem* TetrisItem = Cast<UTetrisItem>(Item);
	if (!IsValid(TetrisItem))
		return;

	TetrisItem->SetRotation(TetrisItemSaveData->bIsRotated);
	UTetrisInventory* TetrisItemInventory = Cast<UTetrisInventory>(TetrisItem->RelatedInventory);
	if (!IsValid(TetrisItemInventory))
		return;

	TetrisItemInventory->TryMoveItem(TetrisItem, TetrisItemSaveData->SlotPosition);
}

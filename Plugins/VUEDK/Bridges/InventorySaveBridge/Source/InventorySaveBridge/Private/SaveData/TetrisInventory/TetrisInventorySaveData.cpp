// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/TetrisInventory/TetrisInventorySaveData.h"
#include "SaveData/TetrisInventory/TetrisItemSaveData.h"
#include "TetrisInventory/TetrisItem.h"

UItemBaseSaveData* UTetrisInventorySaveData::CreateItemSaveData_Implementation()
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

	const UTetrisItemSaveData* TetrisItemSaveData = Cast<UTetrisItemSaveData>(ItemSaveData);
	if (!IsValid(TetrisItemSaveData))
		return;

	UTetrisItem* TetrisItem = Cast<UTetrisItem>(Item);
	if (!IsValid(TetrisItem))
		return;

	if (TetrisItem->IsEquipped())
		return;

	TetrisItem->SetRotation(TetrisItemSaveData->bIsRotated);
	TetrisItem->SetCurrentPosition(TetrisItemSaveData->SlotPosition);
}

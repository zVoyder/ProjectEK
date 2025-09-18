// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/RPGInventory/RPGInventorySaveData.h"
#include "RPGInventory/Items/RPGGearItem.h"
#include "SaveData/RPGInventory/RPGGearItemSaveData.h"
#include "SaveData/RPGInventory/RPGItemSaveData.h"

void URPGInventorySaveData::RegisterItemsNative()
{
	Super::RegisterItemsNative();
	RegisterItemSaveData(URPGItem::StaticClass(), URPGItemSaveData::StaticClass());
	RegisterItemSaveData(URPGGearItem::StaticClass(), URPGGearItemSaveData::StaticClass());
}

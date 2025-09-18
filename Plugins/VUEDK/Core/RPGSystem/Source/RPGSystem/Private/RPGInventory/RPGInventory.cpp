// Copyright VUEDK, Inc. All Rights Reserved.

#include "RPGInventory/RPGInventory.h"
#include "Base/ItemBase.h"
#include "RPGInventory/Items/RPGGearItem.h"
#include "RPGInventory/Data/SaveData/RPGInventorySaveDataDEPRECATED.h"
#include "Factories/RPGFactory.h"

URPGInventory::URPGInventory()
{
}

USaveDataBase* URPGInventory::CreateSaveDataObject_Implementation()
{
	return NewObject<URPGInventorySaveDataDEPRECATED>();
}

USaveDataBase* URPGInventory::CreateInventorySaveData_Implementation(USaveDataBase* SaveData, TArray<UItemBase*>& ItemsToSave)
{
	Super::Super::CreateInventorySaveData_Implementation(SaveData, ItemsToSave); // Do not use the save data implementation of tetris items
	URPGInventorySaveDataDEPRECATED* RPGInventorySaveData = Cast<URPGInventorySaveDataDEPRECATED>(SaveData);
	CreateRPGInventorySaveData(RPGInventorySaveData->RPGItemsSaveData, ItemsToSave);
	return SaveData;
}

void URPGInventory::LoadInventorySaveData_Implementation(UInventoryBaseSaveDataDEPRECATED* InventorySaveData)
{
	Super::Super::LoadInventorySaveData_Implementation(InventorySaveData);
	URPGInventorySaveDataDEPRECATED* RPGInventorySaveData = Cast<URPGInventorySaveDataDEPRECATED>(InventorySaveData);
	LoadRPGInventorySaveData(RPGInventorySaveData->RPGItemsSaveData);
}

void URPGInventory::CreateRPGInventorySaveData(FRPGInventoryItemsSaveData& RPGItemsSaveData, TArray<UItemBase*>& ItemsToSave)
{
	TArray<UItemBase*> RemaingToSave = ItemsToSave;
	for (UItemBase* Item : ItemsToSave)
	{
		RemaingToSave.Remove(Item); // Either way, the item will be saved
		
		if (Item->IsA(URPGGearItem::StaticClass()))
		{
			const URPGGearItem* GearItem = Cast<URPGGearItem>(Item);
			FGuid ItemID = Item->GetItemData()->ItemDataID;

			if (!RPGItemsSaveData.GearItems.Contains(ItemID))
				RPGItemsSaveData.GearItems.Add(ItemID, FRPGGearItemsSaveArray());

			FRPGGearItemSaveDataDEPRECATED GearItemSaveData = GearItem->CreateRPGGearItemSaveData();
			RPGItemsSaveData.GearItems[ItemID].GearItems.Add(GearItemSaveData);
			continue;
		}

		// All items that are not gear items are considered generic items
		const URPGItem* RPGItem = Cast<URPGItem>(Item);
		FGuid ItemID = Item->GetItemData()->ItemDataID;

		if (!RPGItemsSaveData.GenericItems.Contains(ItemID))
			RPGItemsSaveData.GenericItems.Add(ItemID, FRPGItemsSaveArray());

		FRPGItemSaveDataDEPRECATED ItemSaveData = RPGItem->CreateRPGItemSaveData();
		RPGItemsSaveData.GenericItems[ItemID].Items.Add(ItemSaveData);
	}

	ItemsToSave = RemaingToSave;
}

void URPGInventory::LoadRPGInventorySaveData(FRPGInventoryItemsSaveData& RPGItemsSaveData)
{
	for (auto& GenericItems : RPGItemsSaveData.GenericItems)
	{
		const FGuid ItemID = GenericItems.Key;

		for (FRPGItemSaveDataDEPRECATED& RPGItemSaveData : GenericItems.Value.Items)
		{
			UItemDataBase* ItemData = GetItemDataFromRegistry(ItemID);

			if (ItemData == nullptr)
			{
				UE_LOG(LogInventorySystem, Warning, TEXT("Item data not found for item ID: %s"), *ItemID.ToString());
				continue;
			}

			if (URPGItemData* RPGItemData = Cast<URPGItemData>(ItemData))
			{
				URPGItem* RPGItem = URPGFactory::CreateRPGGenericItem(this, RPGItemData, nullptr, false);
				RPGItem->LoadRPGItemSaveData(this, RPGItemSaveData);
			}
		}
	}
	
	for (auto& GearItems : RPGItemsSaveData.GearItems)
	{
		const FGuid ItemID = GearItems.Key;

		for (FRPGGearItemSaveDataDEPRECATED& GearItemSaveData : GearItems.Value.GearItems)
		{
			UItemDataBase* ItemData = GetItemDataFromRegistry(ItemID);

			if (ItemData == nullptr)
			{
				UE_LOG(LogInventorySystem, Warning, TEXT("Item data not found for item ID: %s"), *ItemID.ToString());
				continue;
			}

			if (URPGGearItemData* GearData = Cast<URPGGearItemData>(ItemData))
			{
				URPGGearItem* GearItem = URPGFactory::CreateRPGGearItem(this, GearData, nullptr, false);
				GearItem->LoadRPGGearItemSaveData(this, GearItemSaveData);
			}
		}
	}
}

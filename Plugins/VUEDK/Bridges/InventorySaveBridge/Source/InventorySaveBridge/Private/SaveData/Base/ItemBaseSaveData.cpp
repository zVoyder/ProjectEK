// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/Base/ItemBaseSaveData.h"
#include "Base/ItemBase.h"
#include "Base/Data/ItemDataBase.h"

bool UItemBaseSaveData::SaveObjectDataNative(UObject* ObjectToSave)
{
	const UItemBase* Item = Cast<UItemBase>(ObjectToSave);

	if (!IsValid(Item))
		return false;

	SavedItemDataID = Item->GetItemData()->ItemDataID;
	SavedQuantity = Item->GetCurrentQuantity();
	SavedEquipSlotIndex = Item->GetEquipSlotIndex();
	return Super::SaveObjectDataNative(ObjectToSave);
}

bool UItemBaseSaveData::LoadObjectDataNative(UObject* ObjectToLoad)
{
	UItemBase* Item = Cast<UItemBase>(ObjectToLoad);

	if (!IsValid(Item))
		return false;

	Item->SetQuantity(SavedQuantity);
	Item->SetEquipSlotIndex(SavedEquipSlotIndex);
	return Super::LoadObjectDataNative(ObjectToLoad);
}

bool UItemBaseSaveData::PostLoadObjectDataNative(UObject* ObjectToLoad)
{
	return PostLoadObjectData(ObjectToLoad);
}

bool UItemBaseSaveData::PostLoadObjectData_Implementation(UObject* ObjectToLoad)
{
	return true;
}

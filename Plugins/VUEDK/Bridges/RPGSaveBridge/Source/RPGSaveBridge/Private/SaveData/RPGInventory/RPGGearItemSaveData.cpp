// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/RPGInventory/RPGGearItemSaveData.h"

#include "InventorySaveBridge.h"
#include "RPGInventory/Items/RPGGearItem.h"
#include "RPGInventory/Utility/RPGInventoriesUtility.h"

bool URPGGearItemSaveData::SaveObjectDataNative(UObject* ObjectToSave)
{
	const URPGGearItem* RPGGearItem = Cast<URPGGearItem>(ObjectToSave);
	if (!IsValid(RPGGearItem))
		return false;

	const URPGGearItemStatsContainer* GearStatsContainer = RPGGearItem->GearStatsContainer;
	if (!IsValid(GearStatsContainer))
		return false;
	
	for (const auto& StatModifier : GearStatsContainer->GetValues())
		SavedGearStats.Add(StatModifier.Key->StatID, StatModifier.Value);
	
	return Super::SaveObjectDataNative(ObjectToSave);
}

bool URPGGearItemSaveData::LoadObjectDatatNative(UObject* ObjectToLoad)
{
	const URPGGearItem* RPGGearItem = Cast<URPGGearItem>(ObjectToLoad);
	if (!IsValid(RPGGearItem))
		return false;

	URPGGearItemStatsContainer* GearStatsContainer = RPGGearItem->GearStatsContainer;
	if (!IsValid(GearStatsContainer))
		return false;
	
	for (const auto& Stats : SavedGearStats)
	{
		if (UCoreStatData* StatData = URPGInventoriesUtility::GetItemStatByID(Stats.Key); IsValid(StatData))
			GearStatsContainer->AddStat(StatData, Stats.Value);
		else
			UE_LOG(LogInventorySaveBridge, Warning, TEXT("URPGGearItemSaveData::LoadObjectNative: Failed to load RPGGearItem bonus stat with ID: %s"), *Stats.Key.ToString());
	}
	
	return Super::LoadObjectDatatNative(ObjectToLoad);
}

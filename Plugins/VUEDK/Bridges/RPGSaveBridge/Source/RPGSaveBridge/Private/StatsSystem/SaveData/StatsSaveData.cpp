// Copyright VUEDK, Inc. All Rights Reserved.

#include "StatsSystem/SaveData/StatsSaveData.h"
#include "StatsSystem/StatsBridgeBase.h"

bool UStatsSaveData::SaveObjectDataNative(UObject* ObjectToSave)
{
	const UStatsBridgeBase* StatsBridge = Cast<UStatsBridgeBase>(ObjectToSave);
	
	if (!IsValid(StatsBridge))
		return false;

	for (auto& Pair : StatsBridge->SpecialStatsContainer->GetValues())
		SavedSpecialStats.Add(Pair.Key->StatID, Pair.Value);

	for (auto& Pair : StatsBridge->CoreStatsContainer->GetValues())
		SavedCoreStats.Add(Pair.Key->StatID, Pair.Value);

	return Super::SaveObjectDataNative(ObjectToSave);
}

bool UStatsSaveData::LoadObjectDataNative(UObject* ObjectToLoad)
{
	const UStatsBridgeBase* StatsBridge = Cast<UStatsBridgeBase>(ObjectToLoad);
	if (!IsValid(StatsBridge))
		return false;

	for (auto& SpecialStatsMap = SavedSpecialStats; auto& Pair : SpecialStatsMap)
	{
		if (USpecialStatData* SpecialStatData = StatsBridge->GetSpecialStatByID(Pair.Key))
			StatsBridge->SpecialStatsContainer->AddStat(SpecialStatData, Pair.Value);
	}

	for (auto& CoreStatsMap = SavedCoreStats; auto& Pair : CoreStatsMap)
	{
		if (UCoreStatData* CoreStatData = StatsBridge->GetCoreStatByID(Pair.Key))
			StatsBridge->CoreStatsContainer->AddStat(CoreStatData, Pair.Value);
	}
	
	return Super::LoadObjectDataNative(ObjectToLoad);
}

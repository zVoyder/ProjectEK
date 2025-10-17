// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/QuestLogSaveData.h"
#include "QuestManager.h"

bool UQuestLogSaveData::SaveObjectDataNative(UObject* ObjectToSave)
{
	const UQuestManager* QuestManager = Cast<UQuestManager>(ObjectToSave);
	if (!IsValid(QuestManager))
		return false;

	for (const TTuple<UQuestData*, UQuestBase*> QuestTuple : QuestManager->AllQuests)
	{
		UQuestSaveData* QuestSaveData = NewObject<UQuestSaveData>(this);
		if (!IsValid(QuestSaveData))
			continue;

		QuestSaveData->SaveObjectDataNative(QuestTuple.Value);
		SavedQuests.Add(QuestTuple.Key->GetFName(), QuestSaveData);
	}

	if (!IsValid(QuestManager->TrackedQuest) || !IsValid(QuestManager->TrackedQuest->QuestData))
	{
		SavedTrackedQuest = NAME_None;
		return Super::SaveObjectDataNative(ObjectToSave);
	}

	SavedTrackedQuest = QuestManager->TrackedQuest->QuestData->GetFName();
	return Super::SaveObjectDataNative(ObjectToSave);
}

bool UQuestLogSaveData::LoadObjectDataNative(UObject* ObjectToLoad)
{
	UQuestManager* QuestManager = Cast<UQuestManager>(ObjectToLoad);
	if (!IsValid(QuestManager))
		return false;

	QuestManager->ResetQuestLog();
	for (const auto& SavedQuestTuple : SavedQuests)
	{
		UQuestBase* Quest = QuestManager->GetQuestByFName(SavedQuestTuple.Key);
		if (!Quest)
			continue; // If the quest is not found, skip it

		SavedQuestTuple.Value->LoadObjectDataNative(Quest);
		
		switch (SavedQuestTuple.Value->SavedStatus)
		{
		case EQuestStatus::Active:
			QuestManager->AddToActiveQuests(Quest->QuestData);
			break;
		
		case EQuestStatus::Inactive:
			QuestManager->AddToInactiveQuests(Quest->QuestData);
			break;
		
		case EQuestStatus::Completed:
			QuestManager->AddToCompletedQuests(Quest->QuestData);
			break;
		
		default: ;
		}
	}
	
	QuestManager->TrackedQuest = nullptr;
	if (SavedTrackedQuest != NAME_None)
		QuestManager->TrackQuestByFName(SavedTrackedQuest);

	return Super::LoadObjectDataNative(ObjectToLoad);
}

// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveData/CheckpointsSaveData.h"
#include "CheckpointsManager.h"

bool UCheckpointsSaveData::SaveObjectDataNative(UObject* ObjectToSave)
{
	const UCheckpointsManager* CheckpointsManager = Cast<UCheckpointsManager>(ObjectToSave);

	if (!CheckpointsManager)
		return false;

	SavedCheckpointIndex = CheckpointsManager->GetCheckpointIndex();
	SavedCheckpoints = CheckpointsManager->GetCheckpointsMap();
	return Super::SaveObjectDataNative(ObjectToSave);
}

bool UCheckpointsSaveData::LoadObjectDatatNative(UObject* ObjectToLoad)
{
	UCheckpointsManager* CheckpointsManager = Cast<UCheckpointsManager>(ObjectToLoad);

	if (!CheckpointsManager)
		return false;
	
	CheckpointsManager->SetCheckpointIndex(SavedCheckpointIndex);
	CheckpointsManager->SetCheckpointsMap(SavedCheckpoints);
	return Super::LoadObjectDatatNative(ObjectToLoad);
}

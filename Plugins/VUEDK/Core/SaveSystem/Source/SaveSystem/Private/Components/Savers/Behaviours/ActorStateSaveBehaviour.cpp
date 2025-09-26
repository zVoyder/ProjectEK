// Copyright VUEDK, Inc. All Rights Reserved.

#include "Components/Savers/Behaviours/ActorStateSaveBehaviour.h"

#include "SaveManager.h"
#include "Data/SaveData/ActorStateSaveData.h"
#include "Utility/SSUtility.h"

USaveDataBase* UActorStateSaveBehaviour::CreateSaveDataInstance_Implementation()
{
	UActorStateSaveData* SaveData = NewObject<UActorStateSaveData>();
	SaveData->Init(this);
	return SaveData;
}

bool UActorStateSaveBehaviour::Save_Implementation(USaveDataBase* SaveData)
{
	UActorStateSaveData* ActorStateSaveData = Cast<UActorStateSaveData>(SaveData);
	if (!IsValid(ActorStateSaveData))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("UTransformSaveBehaviour::Save_Implementation: SaveData is not of type UActorStateSaveData."));
		return false;
	}
	
	UDefaultSaveGame* SaveGame = USSUtility::GetSaveGame();
	if (IsValid(SaveGame))
		SaveGame->DestroyedActors.Remove(GetCompositeSaveBehaviourID());

	return ActorStateSaveData->SaveObjectDataNative(GetOwnerActor());
}

bool UActorStateSaveBehaviour::Load_Implementation(USaveDataBase* SaveData)
{
	UActorStateSaveData* ActorStateSaveData = Cast<UActorStateSaveData>(SaveData);
	if (!IsValid(ActorStateSaveData))
	{
		UE_LOG(LogSaveSystem, Warning, TEXT("UTransformSaveBehaviour::Load_Implementation: SavedData is not of type UActorStateSaveData."));
		return false;
	}

	const UDefaultSaveGame* SaveGame = USSUtility::GetSaveGame();
	if (!IsValid(SaveGame))
		return false;

	if (SaveGame->DestroyedActors.Contains(GetCompositeSaveBehaviourID()))
	{
		if (AActor* OwnerActor = GetOwnerActor())
		{
			OwnerActor->Destroy();
			return true;
		}

		return false;
	}
	
	return ActorStateSaveData->LoadObjectDatatNative(GetOwnerActor());
}

void UActorStateSaveBehaviour::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UDefaultSaveGame* SaveGame = USSUtility::GetSaveGame();

	if (!IsValid(SaveGame))
		return;

	SaveGame->DestroyedActors.Add(GetCompositeSaveBehaviourID());
}

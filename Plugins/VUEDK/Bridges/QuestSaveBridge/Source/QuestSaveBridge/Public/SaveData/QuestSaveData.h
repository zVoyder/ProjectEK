// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TaskSaveData.h"
#include "Data/Enums/QuestStatus.h"
#include "Data/SaveData/SaveDataBase.h"
#include "QuestSaveData.generated.h"

UCLASS()
class QUESTSAVEBRIDGE_API UQuestSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	EQuestStatus SavedStatus;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TMap<FName, UTaskSaveData*> SavedTasks;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int32 SavedTaskIndex;

public:
	virtual bool SaveObjectDataNative(UObject* ObjectToSave) override;

	virtual bool LoadObjectDatatNative(UObject* ObjectToLoad) override;
};

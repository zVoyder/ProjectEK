// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TaskBase.h"
#include "UObjects/Quests/QuestBase.h"
#include "CountTask.generated.h"

UCLASS(NotBlueprintable, BlueprintType)
class QUESTSYSTEM_API UCountTask : public UTaskBase
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Task")
	int32 CountToAchieve;
	
private:
	int32 CurrentCount;

public:
	virtual void Init(UTaskData* InitData, UQuestBase* Quest) override;
	
	virtual void AchieveTask(const bool bFullyAchieve = false) override;
	
	virtual void ResetTask() override;

	void SetCurrentCount(int32 NewCount);
	
	/**
	 * Gets the current progress count for this task.
	 * @return The current count value.
	 */
	UFUNCTION(BlueprintPure)
	int32 GetCurrentCount() const;
};

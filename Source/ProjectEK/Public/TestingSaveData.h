// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TestingInstancedSaveData.h"
#include "Data/SaveData.h"
#include "TestingSaveData.generated.h"

UCLASS()
class PROJECTEK_API UTestingSaveData : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame, Instanced)
	UTestingInstancedSaveData* InstancedData;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	int32 SomeInt;
};

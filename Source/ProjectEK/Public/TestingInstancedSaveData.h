// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData.h"
#include "TestingInstancedSaveData.generated.h"

UCLASS()
class PROJECTEK_API UTestingInstancedSaveData : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	FString TestString;
};

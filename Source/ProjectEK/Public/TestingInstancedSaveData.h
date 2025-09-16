// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData/SaveDataBase.h"
#include "TestingInstancedSaveData.generated.h"

class UNestedSaveData;

UCLASS()
class PROJECTEK_API UTestingInstancedSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	FString TestString;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	UNestedSaveData* NestedData;
};

UCLASS()
class PROJECTEK_API UNestedSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	FString NestedSaveDataString;
};


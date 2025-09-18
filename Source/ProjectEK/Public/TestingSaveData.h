// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TestingInstancedSaveData.h"
#include "Data/SaveData/SaveDataBase.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Utility/SSSerializationUtility.h"
#include "TestingSaveData.generated.h"

UCLASS()
class PROJECTEK_API UTestingSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TArray<UTestingInstancedSaveData*> InstancedData;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	TSet<UTestingInstancedSaveData*> InstancedDataSet;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	TMap<FString, UTestingInstancedSaveData*> InstancedDataMap;

	UPROPERTY(BlueprintReadWrite, SaveGame)
	UTestingInstancedSaveData* InstanceData = nullptr;
	
	UPROPERTY(BlueprintReadWrite, SaveGame)
	int32 SomeInt;
};

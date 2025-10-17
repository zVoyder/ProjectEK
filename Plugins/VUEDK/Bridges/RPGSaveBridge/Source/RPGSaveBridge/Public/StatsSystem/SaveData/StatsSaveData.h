// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData/SaveDataBase.h"
#include "StatsSaveData.generated.h"

UCLASS()
class RPGSAVEBRIDGE_API UStatsSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TMap<FGuid, float> SavedSpecialStats;
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TMap<FGuid, float> SavedCoreStats;

public:
	virtual bool SaveObjectDataNative(UObject* ObjectToSave) override;

	virtual bool LoadObjectDataNative(UObject* ObjectToLoad) override;
};

// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "RPGItemSaveData.h"
#include "RPGGearItemSaveData.generated.h"

UCLASS()
class RPGSAVEBRIDGE_API URPGGearItemSaveData : public URPGItemSaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, SaveGame)
	TMap<FGuid, float> SavedGearStats;

public:
	virtual bool SaveObjectDataNative(UObject* ObjectToSave) override;

	virtual bool LoadObjectDatatNative(UObject* ObjectToLoad) override;
};

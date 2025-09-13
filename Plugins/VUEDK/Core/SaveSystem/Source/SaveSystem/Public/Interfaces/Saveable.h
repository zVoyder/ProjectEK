// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData.h"
#include "UObject/Object.h"
#include "Saveable.generated.h"

UINTERFACE(BlueprintType)
class SAVESYSTEM_API USaveable : public UInterface
{
	GENERATED_BODY()
};

class ISaveable
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	USaveData* CreateSaveDataInstance();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Save(USaveData* SaveData);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Load(USaveData* SaveData);
};

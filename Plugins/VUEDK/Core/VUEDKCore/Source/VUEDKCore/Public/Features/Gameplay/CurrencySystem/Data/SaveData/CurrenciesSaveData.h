// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData/SaveDataBase.h"
#include "CurrenciesSaveData.generated.h"

UCLASS()
class VUEDKCORE_API UCurrenciesSaveData : public USaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	TMap<FGuid, int32> CurrenciesSaveMap;
};

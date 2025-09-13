// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TetrisItemSaveDataDEPRECATED.h"
#include "TetrisItemsSaveArray.generated.h"

USTRUCT(BlueprintType)
struct FTetrisItemsSaveArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTetrisItemSaveDataDEPRECATED> Items;
};

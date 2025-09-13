// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/Data/SaveData/ItemSaveData.h"
#include "TetrisItemSaveDataDEPRECATED.generated.h"

USTRUCT(BlueprintType, Blueprintable)
struct FTetrisItemSaveDataDEPRECATED
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FItemSaveData ItemSaveData;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint SlotPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsRotated;

	FTetrisItemSaveDataDEPRECATED(): SlotPosition(),
	                       bIsRotated(false)
	{
	}
};

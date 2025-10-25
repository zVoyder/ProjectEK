// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ReloadEntry.h"
#include "Engine/DataAsset.h"
#include "ReloadRequest.generated.h"

class UAmmoTypeData;

USTRUCT(BlueprintType)
struct WEAPONSYSTEM_API  FReloadRequest
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	TArray<FReloadEntry> Entries;
	UPROPERTY(BlueprintReadWrite)
	bool bParallel = true;
	UPROPERTY(BlueprintReadWrite, meta = (EditCondition = "bParallel"))
	bool bUseInsertAmmoNotifiers = false;
};

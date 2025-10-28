// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Magazine.h"
#include "UObject/Object.h"
#include "MagazinesManager.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class WEAPONSYSTEM_API UMagazinesManager : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Instanced)
	TArray<UMagazine*> Magazines;

public:
	void Init();

	UFUNCTION(BlueprintPure)
	UMagazine* GetMagazine(const int32 Index) const;

	UFUNCTION(BlueprintPure)
	bool HasMagazineOfIndex(const int32 Index) const;
};

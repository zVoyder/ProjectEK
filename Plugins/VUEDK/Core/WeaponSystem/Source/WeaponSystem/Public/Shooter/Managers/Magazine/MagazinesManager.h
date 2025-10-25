// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Magazine.h"
#include "UObject/Object.h"
#include "MagazinesManager.generated.h"

UCLASS()
class WEAPONSYSTEM_API UMagazinesManager : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Instanced, Category = "Magazines")
	TMap<FGameplayTag, UMagazine*> MagazinesMap;

public:
	void Init();

	UFUNCTION(BlueprintPure)
	UMagazine* GetMagazineByTag(const FGameplayTag& MagazineTag) const;

	UFUNCTION(BlueprintPure)
	bool HasMagazineWithTag(const FGameplayTag& MagazineTag) const;
};

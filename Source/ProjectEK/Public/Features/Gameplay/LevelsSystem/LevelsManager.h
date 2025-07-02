// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Attributes/ResourceAttribute.h"
#include "Components/ActorComponent.h"
#include "Features/Gameplay/CurrencySystem/CurrenciesManager.h"
#include "Features/Gameplay/CurrencySystem/Data/CurrencyData.h"
#include "StatsSystem/CharacterStats/CharacterStats.h"
#include "LevelsManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnLevelUpgrade
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnLevelRollback
);

/**
 * Manages the player levels in the game, spending points to increase stats.
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class PROJECTEK_API ULevelsManager : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnLevelUpgrade OnLevelUpgrade;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnLevelRollback OnLevelRollback;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Levels|Upgrade")
	UCurrencyData* CurrencyData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Levels|Upgrade")
	int32 LevelsPerUpgrade = 1;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Levels|Upgrade")
	float BaseUpgradeCost = 100.0f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Levels|Upgrade")
	UCurveFloat* CostCurve;

private:
	UPROPERTY()
	USpecialStatsContainer* Stats;
	UPROPERTY()
	UCurrenciesManager* CurrencyManager;

public:
	ULevelsManager();

	UFUNCTION(BlueprintCallable)
	void Init();

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	bool TryUpgradeStat(USpecialStatData* Stat) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	bool TryRollbackStat(USpecialStatData* Stat) const;

	UFUNCTION(BlueprintPure)
	int32 GetPlayerLevel() const;

	UFUNCTION(BlueprintPure)
	bool HasEnoughPointsForUpgrade(float& OutCost) const;

	UFUNCTION(BlueprintPure)
	int32 GetCostOfNextLevel() const;

	UFUNCTION(BlueprintPure)
	int32 GetCostOfPreviousLevel() const;

	UFUNCTION(BlueprintPure)
	int32 GetCostOfCurrentLevel() const;

	UFUNCTION(BlueprintPure)
	int32 GetCostForLevel(int32 Level) const;

private:
	bool Check() const;
};

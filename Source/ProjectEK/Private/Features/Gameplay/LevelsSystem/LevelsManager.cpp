// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Gameplay/LevelsSystem/LevelsManager.h"
#include "UGameFramework/GameCastingSystem/GameCastingHelper.h"

ULevelsManager::ULevelsManager(): CurrencyData(nullptr),
                                  CostCurve(nullptr),
                                  Stats(nullptr),
                                  CurrencyManager(nullptr)
{
	PrimaryComponentTick.bCanEverTick = false;
}

void ULevelsManager::Init()
{
	AGameplayPlayerState* GameplayPlayerState = UGameCastingHelper::GetGameplayPlayerState();

	if (!IsValid(GameplayPlayerState))
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::Init: GameplayPlayerState is not valid in ULevelsManager::Init()"));
		return;
	}

	Stats = GameplayPlayerState->GetCharacterStats()->SpecialStatsContainer;
	CurrencyManager = GameplayPlayerState->CurrencyManager;
}

bool ULevelsManager::TryUpgradeStat(USpecialStatData* Stat) const
{
	if (!Check())
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::TryUpgradeStat: CharacterStats is not valid in ULevelsManager::TryUpgradeStat()"));
		return false;
	}

	float UpgradeCost = 0.0f;
	if (!HasEnoughPointsForUpgrade(UpgradeCost))
		return false;

	if (Stats->TryModifyValue(Stat, LevelsPerUpgrade))
	{
		int32 ConsumedAmount = 0.0f;
		CurrencyManager->ConsumeCurrency(CurrencyData, UpgradeCost, ConsumedAmount);
		OnLevelUpgrade.Broadcast();
		return true;
	}

	return false;
}

bool ULevelsManager::TryRollbackStat(USpecialStatData* Stat) const
{
	if (!Check())
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::TryRollbackStat: CharacterStats is not valid in ULevelsManager::TryRollbackStat()"));
		return false;
	}

	if (!Stats->HasValue(Stat))
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::TryRollbackStat: Stat is not valid in ULevelsManager::TryRollbackStat()"));
		return false;
	}

	if (Stats->GetValueAsInt(Stat) <= 0)
		return false;

	const float RefundCost = GetCostOfCurrentLevel();
	if (Stats->TryModifyValue(Stat, -LevelsPerUpgrade))
	{
		int32 Remaining = 0.0f;
		CurrencyManager->AddCurrency(CurrencyData, RefundCost, Remaining);
		OnLevelRollback.Broadcast();
		return true;
	}

	return false;
}

int32 ULevelsManager::GetPlayerLevel() const
{
	if (!Check())
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::GetPlayerLevel: CharacterStats is not valid in ULevelsManager::GetPlayerLevel()"));
		return 0;
	}

	int32 Level = 0;

	for (const auto& SpecialStat : Stats->GetSpecialStatsValues())
	{
		if (SpecialStat.Value > 0)
			Level += SpecialStat.Value;
	}

	return Level;
}

bool ULevelsManager::HasEnoughPointsForUpgrade(float& OutCost) const
{
	if (!Check())
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::HasEnoughPointsForUpgrade: CharacterStats is not valid in ULevelsManager::HasEnoughPointsForUpgrade()"));
		return false;
	}

	OutCost = GetCostOfNextLevel();
	return CurrencyManager->HasEnoughCurrencyAmount(CurrencyData, OutCost);
}

int32 ULevelsManager::GetCostOfNextLevel() const
{
	return GetCostForLevel(GetPlayerLevel() + 1);
}

int32 ULevelsManager::GetCostOfPreviousLevel() const
{
	return GetCostForLevel(GetPlayerLevel() - 1);
}

int32 ULevelsManager::GetCostOfCurrentLevel() const
{
	return GetCostForLevel(GetPlayerLevel());
}

int32 ULevelsManager::GetCostForLevel(const int32 Level) const
{
	if (!Check())
	{
		UE_LOG(LogTemp, Error, TEXT("ULevelsManager::GetCostForLevel: CharacterStats is not valid in ULevelsManager::GetCostForLevel()"));
		return 0.0f;
	}

	float Cost = BaseUpgradeCost;
	if (IsValid(CostCurve))
		Cost = CostCurve->GetFloatValue(Level);

	return Cost;
}

bool ULevelsManager::Check() const
{
	return IsValid(Stats) && IsValid(CurrencyManager);
}

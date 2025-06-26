// Copyright VUEDK, Inc. All Rights Reserved.

#include "Features/Gameplay/CurrencySystem/CurrenciesManager.h"
#include "Features/Gameplay/CurrencySystem/Data/SaveData/CurrenciesSaveData.h"

UCurrenciesManager::UCurrenciesManager()
{
	PrimaryComponentTick.bCanEverTick = false;
}

USaveData* UCurrenciesManager::CreateSaveData()
{
	UCurrenciesSaveData* SaveData = NewObject<UCurrenciesSaveData>();
	SaveData->CurrenciesSaveMap = CurrenciesMap;
	return SaveData;
}

bool UCurrenciesManager::LoadSaveData(USaveData* SavedData)
{
	const UCurrenciesSaveData* CurrenciesSaveData = Cast<UCurrenciesSaveData>(SavedData);

	if (!IsValid(CurrenciesSaveData))
		return false;

	CurrenciesMap = CurrenciesSaveData->CurrenciesSaveMap;

	UpdateCurrencies();
	
	return true;
}

UCurrenciesSaveData* UCurrenciesManager::CreateCurrenciesSaveData()
{
	return Cast<UCurrenciesSaveData>(CreateSaveData());
}

void UCurrenciesManager::LoadCurrenciesSaveData(UCurrenciesSaveData* CurrenciesSaveData)
{
	LoadSaveData(CurrenciesSaveData);
}

int32 UCurrenciesManager::GetCurrencyAmount(const UCurrencyData* Currency) const
{
	if (!HasCurrency(Currency))
		return 0;

	return CurrenciesMap[Currency->CurrencyID];
}

bool UCurrenciesManager::HasCurrency(const UCurrencyData* Currency) const
{
	return IsValid(Currency) && CurrenciesMap.Contains(Currency->CurrencyID);
}

bool UCurrenciesManager::HasEnoughCurrencyAmount(const UCurrencyData* Currency, const int32 AmountToCheck) const
{
	if (!HasCurrency(Currency))
		return false;
	
	const int32 MinAmount = Currency->GetMinAmount();
	const int32 Amount = CurrenciesMap[Currency->CurrencyID];
	return Amount - AmountToCheck >= MinAmount;
}

void UCurrenciesManager::AddCurrency(UCurrencyData* Currency, int32 AmountToAdd, int32& OutRemaining)
{
	OutRemaining = AmountToAdd;

	if (!HasCurrency(Currency))
		return;

	AmountToAdd = FMath::Abs(AmountToAdd);
	const int32 MaxAmount = Currency->GetMaxAmount();
	const int32& Amount = CurrenciesMap[Currency->CurrencyID];
	OutRemaining = Amount + AmountToAdd > MaxAmount ? AmountToAdd - (MaxAmount - Amount) : 0;
	SetCurrencyAmount(Currency, Amount + AmountToAdd);
}

void UCurrenciesManager::ConsumeCurrency(UCurrencyData* Currency, int32 AmountToConsume, int32& OutConsumedAmount)
{
	AmountToConsume = FMath::Abs(AmountToConsume);
	const int32 MinAmount = Currency->GetMinAmount();
	const int32 Amount = CurrenciesMap[Currency->CurrencyID];
	OutConsumedAmount = Amount - AmountToConsume < MinAmount ? Amount - MinAmount : AmountToConsume;
	SetCurrencyAmount(Currency, Amount - AmountToConsume);
}

bool UCurrenciesManager::IsCurrencyMaxed(const UCurrencyData* Currency) const
{
	if (!HasCurrency(Currency))
		return false;

	return CurrenciesMap[Currency->CurrencyID] >= Currency->GetMaxAmount();
}

void UCurrenciesManager::BeginPlay()
{
	Super::BeginPlay();
	Init();
}

void UCurrenciesManager::Init()
{
	for (const UCurrencyData* Currency : Currencies)
		CurrenciesMap.Add(Currency->CurrencyID, Currency->GetMinAmount());
}

void UCurrenciesManager::SetCurrencyAmount(UCurrencyData* Currency, const int32 Amount)
{
	CurrenciesMap[Currency->CurrencyID] = Amount;
	CurrenciesMap[Currency->CurrencyID] = FMath::Clamp(CurrenciesMap[Currency->CurrencyID], Currency->GetMinAmount(), Currency->GetMaxAmount());
	OnAnyCurrencyAmountChanged.Broadcast(Currency, CurrenciesMap[Currency->CurrencyID]);
}

void UCurrenciesManager::UpdateCurrencies()
{
	for (UCurrencyData* Currency : Currencies)
		OnAnyCurrencyAmountChanged.Broadcast(Currency, CurrenciesMap[Currency->CurrencyID]);
}

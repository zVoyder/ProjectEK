// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Data/CurrencyData.h"
#include "Data/SaveData/CurrenciesSaveData.h"
#include "Interfaces/Saveable.h"
#include "CurrenciesManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnAnyCurrencyAmountChanged,
	UCurrencyData*, Currency,
	int32, NewAmount
);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class VUEDKCORE_API UCurrenciesManager : public UActorComponent, public ISaveable
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnAnyCurrencyAmountChanged OnAnyCurrencyAmountChanged;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSet<UCurrencyData*> Currencies;

private:
	TMap<FGuid, int32> CurrenciesMap;

public:
	UCurrenciesManager();

	virtual USaveData* CreateSaveData() override;
	
	virtual bool LoadSaveData(USaveData* SavedData) override;

	UFUNCTION(BlueprintCallable)
	UCurrenciesSaveData* CreateCurrenciesSaveData();

	UFUNCTION(BlueprintCallable)
	void LoadCurrenciesSaveData(UCurrenciesSaveData* CurrenciesSaveData);

	UFUNCTION(BlueprintPure)
	int32 GetCurrencyAmount(const UCurrencyData* Currency) const;

	UFUNCTION(BlueprintPure)
	bool HasCurrency(const UCurrencyData* Currency) const;

	UFUNCTION(BlueprintPure)
	bool HasEnoughCurrencyAmount(const UCurrencyData* Currency, const int32 AmountToCheck) const;

	UFUNCTION(BlueprintCallable)
	void AddCurrency(UCurrencyData* Currency, int32 AmountToAdd, int32& OutRemaining);

	UFUNCTION(BlueprintCallable)
	void ConsumeCurrency(UCurrencyData* Currency, int32 AmountToConsume, int32& OutConsumedAmount);

	UFUNCTION(BlueprintPure)
	bool IsCurrencyMaxed(const UCurrencyData* Currency) const;

protected:
	virtual void BeginPlay() override;
	
private:
	void Init();
	
	void SetCurrencyAmount(UCurrencyData* Currency, int32 Amount);

	void UpdateCurrencies();
};

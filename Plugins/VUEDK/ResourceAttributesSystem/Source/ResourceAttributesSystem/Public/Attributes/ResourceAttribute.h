// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/ResourceAttributeData.h"
#include "UObject/Object.h"
#include "ResourceAttribute.generated.h"

class UResourceAttributesManager;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnResourceAttributeChanged,
	float,
	OldValue,
	float,
	NewValue
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnResourceAttributeIncreased,
	float,
	IncreaseValue,
	float,
	OldValue,
	float,
	NewValue
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnResourceAttributeDecreased,
	float,
	DecreaseValue,
	float,
	OldValue,
	float,
	NewValue
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnResourceAttributeReachedMaxValue,
	float,
	CurrentValue
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnResourceAttributeReachedMinValue,
	float,
	CurrentValue
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnResourceAttributeRegenerationStarted,
	float,
	CurrentValue
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnResourceAttributeRegenerationStopped,
	float,
	CurrentValue
);

UCLASS(Blueprintable)
class RESOURCEATTRIBUTESSYSTEM_API UResourceAttribute : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeChanged OnResourceAttributeChanged;
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeIncreased OnResourceAttributeIncreased;
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeDecreased OnResourceAttributeDecreased;
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeReachedMaxValue OnResourceAttributeReachedMaxValue;
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeReachedMinValue OnResourceAttributeReachedMinValue;
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeRegenerationStarted OnResourceAttributeRegenStarted;
	UPROPERTY(BlueprintAssignable)
	FOnResourceAttributeRegenerationStopped OnResourceAttributeRegenStopped;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Resource Attribute|Data")
	UResourceAttributeData* ResourceAttributeData;

private:
	UPROPERTY()
	UResourceAttributesManager* ResourceAttributesManager = nullptr;
	bool bIsRegenerating = false;
	float MinValue = 0.0f;
	float MaxValue = 100.0f;
	float RegenerationRate = 0.1f;
	float CurrentValue = 0.0f;
	FTimerHandle RegenTimerHandle;

public:
	UFUNCTION(BlueprintCallable)
	void Init(UResourceAttributeData* InResourceAttributeData, UResourceAttributesManager* InResourceAttributesManager);

	virtual void Tick(float DeltaTime) override;

	virtual bool IsTickable() const override;

	virtual TStatId GetStatId() const override;

	UFUNCTION(BlueprintPure)
	bool IsAtMax() const;

	UFUNCTION(BlueprintPure)
	bool IsAtMin() const;

	UFUNCTION(BlueprintPure)
	float GetValue() const;

	UFUNCTION(BlueprintPure)
	float GetMinValue() const;

	UFUNCTION(BlueprintPure)
	float GetMaxValue() const;

	UFUNCTION(BlueprintPure)
	float GetRegenerationRate() const;

	UFUNCTION(BlueprintCallable)
	void SetValue(const float NewValue);

	UFUNCTION(BlueprintCallable)
	void ModifyValue(const float Amount);

	UFUNCTION(BlueprintCallable)
	void SetMinValue(const float NewMinValue);

	UFUNCTION(BlueprintCallable)
	void SetMaxValue(const float NewMaxValue);

	UFUNCTION(BlueprintCallable)
	void SetRegenerationRate(const float NewRegenerationRate);

	UFUNCTION(BlueprintCallable)
	void StartRegen(const float Delay = 0.0f);

	UFUNCTION(BlueprintCallable)
	void StopRegen();

private:
	void ProcessRegen(const float DeltaTime);

	void OnAttributeIncreased(const float OldValue, const float TargetValue);

	void OnAttributeDecreased(const float OldValue, const float TargetValue);

	UFUNCTION()
	void OnRegenStarted();

	bool Check() const;
};

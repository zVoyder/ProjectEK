// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Montages/Data/WeaponMontageData.h"
#include "WeaponSystemEventsHandler.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnAnyMontageBegin,
	const FWeaponMontageData&, WeaponMontageData
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnAnyMontageFinished,
	const FWeaponMontageData&, WeaponMontageData,
	bool, bInterrupted
);

UCLASS()
class WEAPONSYSTEM_API UWeaponSystemEventsHandler : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnAnyMontageBegin OnAnyMontageBegin;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnAnyMontageFinished OnAnyMontageFinished;

public:
	virtual void Deinitialize() override;
	
	void CallAnyMontageBeginEvent(const FWeaponMontageData& WeaponMontageData) const;

	void CallAnyMontageFinishedEvent(const FWeaponMontageData& WeaponMontageData, bool bInterrupted) const;
};

// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Shooter/Data/MagData.h"
#include "UObject/Object.h"
#include "Magazine.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnMagazineRefilled,
	int32, CurrentAmmo,
	int32, RefilledAmmo,
	int32, RemainingAmmo
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnAmmoChanged,
	int32, CurrentAmmo,
	int32, MagSize
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnMagazineFull
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnMagazineEmpty
);

UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class WEAPONSYSTEM_API UMagazine : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnMagazineRefilled OnMagazineRefilled;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnAmmoChanged OnAmmoChanged;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnMagazineFull OnMagazineFull;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnMagazineEmpty OnMagazineEmpty;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FMagData MagazineData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool bInitiallyFull = false;

private:
	int32 CurrentAmmoCount;
	int32 CurrentSize;

public:
	void Init();

	UFUNCTION(BlueprintCallable)
	void SetCurrentAmmo(const int32 NewAmmo);

	UFUNCTION(BlueprintCallable)
	void ModifyCurrentAmmo(const int32 Ammo);

	UFUNCTION(BlueprintCallable)
	bool TryConsumeAmmo(const int32 Ammo);

	/**
	 * Refills the magazine with the specified amount of ammo.
	 * @param Ammo - The amount of ammo to add.
	 * @param OutRemainingAmmo - The amount of ammo that could not be added (excess).
	 * @return - The amount of ammo actually added to the magazine.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	int32 Refill(const int32 Ammo, int32& OutRemainingAmmo);

	/**
	 * Refills the magazine to its maximum capacity.
	 */
	UFUNCTION(BlueprintCallable)
	void RefillAllMagazine();

	/**
	 * Refills the magazine with a specific type of ammo.
	 * @param AmmoType - The type of ammo to use for refilling.
	 * @param Ammo - The amount of ammo to add.
	 * @param OutRemainingAmmo - The amount of ammo that could not be added (excess).
	 * @return - The amount of ammo actually added to the magazine.
	 */
	UFUNCTION(BlueprintCallable)
	int32 RefillWithAmmoType(UAmmoTypeData* AmmoType, const int32 Ammo, int32& OutRemainingAmmo);
	
	UFUNCTION(BlueprintCallable)
	void SetMagazineSize(int32 NewSize);
	
	UFUNCTION(BlueprintPure)
	int32 GetMagazineSize() const;
	
	UFUNCTION(BlueprintPure)
	UAmmoTypeData* GetAmmoType() const;

	UFUNCTION(BlueprintPure)
	int32 GetCurrentAmmo() const;

	UFUNCTION(BlueprintPure)
	int32 GetNeededAmmoToFull() const;

	UFUNCTION(BlueprintPure)
	bool IsFull() const;

	UFUNCTION(BlueprintPure)
	bool IsEmpty() const;
	
	UFUNCTION(BlueprintPure)
	bool IsOfAmmoType(const UAmmoTypeData* AmmoType) const;

	UFUNCTION(BlueprintPure)
	bool CanConsumeAmmo(const int32 Ammo) const;

	UFUNCTION(BlueprintCallable)
	void ResetMagazineSizeToDefault();

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnRefill(int32 CurrentAmmo, int32 RefilledAmmo, int32 RemainingAmmo);

	UFUNCTION(BlueprintNativeEvent)
	void OnAmmoChange(int32 CurrentAmmo, int32 MagSize);

	UFUNCTION(BlueprintNativeEvent)
	void OnFull();

	UFUNCTION(BlueprintNativeEvent)
	void OnEmpty();

private:
	void CallAmmoChangeEvent(const int32 MagSize);

	void CallRefillEvent(const int32& OutRemainingAmmo, const int32 RefilledAmmo);
	
	void CallMagEmptyEvent();
	
	void CallMagFullEvent();
};

// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/WeaponMontagesManagerBase.h"
#include "Data/WeaponMontageData.h"
#include "Shooter/Behaviours/ShooterBehaviourBase.h"
#include "FirearmMontagesManager.generated.h"

class AWeaponFirearm;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnFirearmMontagePlayed,
	const FWeaponMontageData&, WeaponMontageData,
	int32, MontageIndex
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnFirearmMontageFinished,
	const FWeaponMontageData&, WeaponMontageData,
	int32, MontageIndex,
	bool, bInterrupted
);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEM_API UFirearmMontagesManager : public UWeaponMontagesManagerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnFirearmMontagePlayed OnShootMontagePlayed;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnFirearmMontagePlayed OnFailShootMontagePlayed;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnFirearmMontagePlayed OnReloadMontagePlayed;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnFirearmMontageFinished OnShootMontageEnded;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnFirearmMontageFinished OnFailShootMontageEnded;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnFirearmMontageFinished OnReloadMontageEnded;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Actions|Shoot")
	TArray<FWeaponMontageData> ShootSuccessMontages;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Actions|Shoot")
	TArray<FWeaponMontageData> ShootFailMontages;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Actions|Reload")
	TArray<FWeaponMontageData> ReloadMontages;

protected:
	UPROPERTY()
	AWeaponFirearm* WeaponFirearm;

public:
	UFirearmMontagesManager();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	UFUNCTION(BlueprintCallable)
	void PlayReloadMontage(const int32 MontageIndex = 0);
	
	UFUNCTION(BlueprintCallable)
	void PlayShootMontage(const int32 MontageIndex = 0);

	UFUNCTION(BlueprintCallable)
	void PlayFailShootMontage(const int32 MontageIndex = 0);
	
	UFUNCTION(BlueprintCallable)
	void StopShootMontage(const FAlphaBlendArgs& WeaponBlendOut, const FAlphaBlendArgs& CharacterBlendOut);

	UFUNCTION(BlueprintCallable)
	void StopFailShootMontage(const FAlphaBlendArgs& WeaponBlendOut, const FAlphaBlendArgs& CharacterBlendOut);
	
	UFUNCTION(BlueprintCallable)
	void StopReloadMontage(const FAlphaBlendArgs& WeaponBlendOut, const FAlphaBlendArgs& CharacterBlendOut);

	/**
	 * Checks if a shooting animation is currently playing.
	 * @return true if the shooting animation is playing, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsAnimShooting() const;

	/**
	 * Checks if a fail shooting animation is currently playing.
	 * @return true if a fail shooting animation is playing, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsAnimFailShooting() const;

	/**
	 * Checks if a reloading animation is currently playing.
	 * @return true if a reloading animation is playing, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsAnimReloading() const;
	
protected:
	virtual void SetupWeapons(AWeaponBase* InWeapon) override;
	
	virtual void BindEvents() override;

	virtual void UnbindEvents() override;
	
	virtual bool Check() const override;
	
	/**
	 * Called when a shooting behaviour successfully executes a shot. By default, plays the corresponding shooting montage.
	 * Override this function to customize behavior.
	 * @param Behaviour The shooter behaviour that executed the shot.
	 * @param ShootBarrel The barrel from which the shot was fired.
	 * @param ShotIndex The index of the shot in the sequence.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnBehaviourShootSuccess(UShooterBehaviourBase* Behaviour, UShootBarrel* ShootBarrel, int32 ShotIndex);

	/**
	 * Called when a shooting behaviour fails to execute a shot. By default, plays the corresponding fail shooting montage.
	 * Override this function to customize behavior.
	 * @param Behaviour The shooter behaviour that attempted the shot.
	 * @param FailReason The reason for the shooting failure.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnBehaviourShootFail(UShooterBehaviourBase* Behaviour, EShootFailReason FailReason);

private:
	void GetShootPlayRates(const FWeaponMontageData& WeaponMontageData, float& WeaponPlayRate, float& CharacterPlayRate) const;

	void GetReloadPlayRates(const FWeaponMontageData& WeaponMontageData, float& WeaponPlayRate, float& CharacterPlayRate) const;

	UFUNCTION()
	void HandleAnyMontageBegin(const FWeaponMontageData& WeaponMontageData);

	UFUNCTION()
	void HandleAnyMontageFinished(const FWeaponMontageData& WeaponMontageData, bool bInterrupted);
};

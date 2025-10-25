// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Data/ReloadEventData.h"
#include "Data/WeaponFirearmData.h"
#include "Montages/FirearmMontagesManager.h"
#include "Shooter/Shooter.h"
#include "WeaponFirearm.generated.h"

class UShootBarrel;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnReloadStarted,
	FReloadEventData, ReloadPayload
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnReloadInsertedAmmo,
	FReloadEventData, ReloadPayload
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnReloadEnded
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FOnReloadInterrupted,
	FReloadEventData, ReloadPayload
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnAimEnabled
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnAimDisabled
);

UCLASS()
class WEAPONSYSTEM_API AWeaponFirearm : public AWeaponBase
{
	GENERATED_BODY()

	friend class UReloadInsertAmmoNotify;

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnReloadStarted OnReloadStarted;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnReloadEnded OnReloadEnded;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnReloadInsertedAmmo OnReloadInsertedAmmo;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnReloadInterrupted OnReloadInterrupted;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnAimEnabled OnAimEnabled;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnAimDisabled OnAimDisabled;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UShooter* Shooter;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UFirearmMontagesManager* FirearmMontagesManager;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UShootBarrel* MainShootBarrel;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FWeaponFirearmData WeaponFirearmData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon")
	FName ShootBarrelSocketName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Advanced")
	bool bCanDeployAttackIfReloading = false;

private:
	bool bIsAimingDownSight;
	bool bHasReloadInsertedAmmo;
	float AimSpread;
	float DefaultRecoilStrength;
	float AdsRecoilStrength;
	FReloadEventData ReloadPayload;

public:
	AWeaponFirearm();

#if WITH_EDITOR
	virtual void OnConstruction(const FTransform& Transform) override;
#endif

	/**
	 * Initializes the weapon with the given owner and optional payload.
	 * It sets up the first shooter behaviour with the main shoot barrel.
	 * @param InOwner - The pawn that owns this weapon.
	 * @param InPayload - Optional payload data for initialization.
	 */
	virtual void Init(APawn* InOwner, UObject* InPayload = nullptr) override;

	UFUNCTION(BlueprintCallable)
	bool Shoot(const int32 BehaviourIndex = 0) const;

	UFUNCTION(BlueprintCallable)
	void EndShootSequence(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	bool IsMagFull(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	bool IsMagEmpty(const int32 BehaviourIndex = 0) const;

	/**
	 * Adds dynamic spread to the weapon, affecting aim stability.
	 * @param AddSpread - The amount of spread to add.
	 * @param ChangeRate - The rate at which the spread changes.
	 * @param RecoveryRate - The rate at which the spread recovers.
	 * @param BehaviourIndex - The index of the shooter behaviour to apply the spread to.
	 */
	UFUNCTION(BlueprintCallable)
	void AddWeaponDynamicSpread(const float AddSpread, const float ChangeRate = 1.0f, const float RecoveryRate = 1.0f, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void ResetCooldown(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void ResetSpread(const int32 BehaviourIndex = 0) const;
	
	virtual void SetWeaponDamage(const float NewDamage) override;

	UFUNCTION(BlueprintCallable)
	void SetDamage(const float NewDamage, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void SetWeaponFireRate(const float NewFireRate, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void SetWeaponMagazineSize(const int32 NewSize, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void SetWeaponMaxRange(const float NewRange, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void SetWeaponRecoilStrength(const float NewRecoilStrength, const int32 BehaviourIndex = 0) const;

	/**
	 * Sets the reload time of the weapon.
	 * @param NewReloadTime - The new reload time.
	 */
	UFUNCTION(BlueprintCallable)
	void SetWeaponReloadTime(const float NewReloadTime);
	
	UFUNCTION(BlueprintCallable)
	void SetCurrentAmmo(const int32 NewAmmo, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void SetWeaponShootType(const EShootType NewShootType, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void InstantSetSpread(const float InSpread, const bool bOverrideDefault = true, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void SetWeaponSpread(const float InSpread, const bool bOverrideDefault = true, const int32 BehaviourIndex = 0) const;

	UFUNCTION(BlueprintPure)
	UShooterBehaviourBase* GetShooterBehaviour(const int32 BehaviourIndex) const;

	UFUNCTION(BlueprintPure)
	UMagazine* GetWeaponMagazineByTag(FGameplayTag MagazineTag) const;

	/**
	 * Gets the firearm data structure containing various weapon properties.
	 * @return The weapon data structure.
	 */
	UFUNCTION(BlueprintPure)
	FWeaponFirearmData GetWeaponFirearmData() const;
	
	UFUNCTION(BlueprintPure)
	float GetWeaponFireRate(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	float GetWeaponMagSize(const int32 BehaviourIndex = 0) const;

	UFUNCTION(BlueprintPure)
	float GetWeaponMaxRange(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	float GetWeaponRecoilStrength(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	float GetWeaponReloadTime() const;
	
	UFUNCTION(BlueprintPure)
	int32 GetCurrentAmmo(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	int32 GetNeededAmmo(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	UAmmoTypeData* GetWeaponAmmoType(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	EShootType GetWeaponShootType(const int32 BehaviourIndex = 0) const;

	UFUNCTION(BlueprintPure)
	float GetWeaponMaxSpread(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	float GetDefaultSpread(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	float GetWeaponSpread(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void ResetToDefaultShootType(const int32 BehaviourIndex = 0) const;
	
	/**
	 * Reloads the weapon using the montage animation for the specified ammo type and amount.
	 * @param InAmmoType - The ammo type data to use for reloading.
	 * @param Ammo - The amount of ammo to reload.
	 */
	UFUNCTION(BlueprintCallable)
	void ReloadOfAmmoType(UAmmoTypeData* InAmmoType, const int32 Ammo);

	void ReloadShooterBehaviourOfAmmoType(UAmmoTypeData* InAmmoType, const int32 Ammo, int32 BehaviourIndex);

	/**
	 * Fully reloads the weapon using the montage animation for the specified ammo type.
	 * @param InAmmoType - The ammo type data to use for reloading.
	 */
	UFUNCTION(BlueprintCallable)
	void FullReloadOfAmmoType(UAmmoTypeData* InAmmoType);

	/**
	 * Reloads the weapon using the montage animation for the specified amount of ammo.
	 * @param Ammo - The amount of ammo to reload.
	 */
	UFUNCTION(BlueprintCallable)
	void Reload(const int32 Ammo);

	/**
	 * Fully reloads the weapon using the montage animation to fill the magazine.
	 */
	UFUNCTION(BlueprintCallable)
	void FullReload();

	/**
	 * Interrupts the reload process, optionally specifying blend out times.
	 * @param CharacterBlendOutTime - The blend out time for the character animation.
	 * @param WeaponBlendOutTime - The blend out time for the weapon animation.
	 */
	UFUNCTION(BlueprintCallable)
	void InterruptReload(float CharacterBlendOutTime = 0.0f, float WeaponBlendOutTime = 0.0f);
	
	UFUNCTION(BlueprintCallable)
	void SetAim(const bool bIsEnabled, const int32 BehaviourIndex = 0);

	/**
	 * Checks if the weapon is currently aiming.
	 * @return true if aiming, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsAiming() const;

	/**
	 * Checks if the weapon is currently reloading.
	 * @return true if reloading, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsReloading() const;

protected:
	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual bool CanShoot();
	
	virtual bool NativeDeployWeaponAttack() override;
	
	virtual void OnEndWeaponAttack_Implementation() override;
	
	virtual void EnableAim(int32 BehaviourIndex = 0);
	
	virtual void DisableAim(int32 BehaviourIndex = 0);
	
	/**
	 * Checks if the weapon can reload.
	 * @return True if the weapon can reload, false otherwise.
	 */
	UFUNCTION(BlueprintNativeEvent)
	bool CanReload() const;
	
	/**
	 * Called when the reload process starts.
	 * @param ReloadEventData - The data associated with the reload event.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnReloadStart(FReloadEventData ReloadEventData);

	/**
	 * Called when the reload is ended, regardless of success or interruption.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnReloadEnd();
	
	/**
	 * Called when the reload process ends successfully, when the ammo is inserted.
	 * @param Remain - The remaining ammo after reload.
	 * @param ReloadedAmmo - The amount of ammo that was reloaded.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnReloadSuccess(float Remain, float ReloadedAmmo);

	/**
	 * Called when the reload is interrupted.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnReloadFail();

	/**
	 * Called when the weapon goes into Aim state.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnEnableAim();

	/**
	 * Called when the weapon exits Aim state.
	 */
	UFUNCTION(BlueprintNativeEvent)
	void OnDisableAim();
	
	/**
	 * Gets the payload data for the reload event.
	 * @return The reload event data containing ammo type and amount.
	 */
	FReloadEventData GetReloadPayload() const;

private:
	/**
	 * Binds events related to the weapon's functionalities.
	 */
	void BindEvents();

	/**
	 * Unbinds events related to the weapon's functionalities.
	 */
	void UnbindEvents();

	/**
	 * Sets the payload for the reload event.
	 * @param InReloadPayload - The reload event data containing ammo type and amount.
	 */
	void SetReloadPayload(const FReloadEventData InReloadPayload);

	/**
	 * Reloads the weapon by inserting ammo into the magazine.
	 */
	void ReloadInsertAmmo();
	
	/**
	 * Called when the reload montage ends.
	 * @param bInterrupted - True if the montage was interrupted, false if it completed normally.
	 */
	UFUNCTION()
	void OnReloadMontageEnded(const bool bInterrupted);
	
	void SetAimSpreadModifier(const int32 BehaviourIndex = 0);
	
	void SetAimRecoilModifier(const int32 BehaviourIndex = 0);
	
	void ResetAimWeaponRecoil(const int32 BehaviourIndex = 0) const;
	
	void ResetAimWeaponSpread(const int32 BehaviourIndex = 0) const;
	
	void AttachBarrelToSocket() const;
};

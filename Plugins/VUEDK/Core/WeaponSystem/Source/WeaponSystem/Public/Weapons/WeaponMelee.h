// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Data/WeaponMeleeData.h"
#include "Hitbox/MeleeHitboxesManager.h"
#include "Montages/MeleeMontagesManager.h"
#include "WeaponMelee.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnWeaponAttackHit,
	UMeleeHitbox*, Hitbox,
	FHitResult, HitResult,
	float, Damage
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FOnWeaponAttackInterrupt,
	UMeleeHitbox*, Hitbox,
	FHitResult, HitResult
);

UCLASS()
class WEAPONSYSTEM_API AWeaponMelee : public AWeaponBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnWeaponAttackInterrupt OnWeaponAttackInterrupt;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnWeaponAttackHit OnWeaponAttackHit;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Data")
	FWeaponMeleeData WeaponMeleeData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMeleeHitboxesManager* MeleeHitboxesManager;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMeleeMontagesManager* MeleeMontagesManager;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Debug", meta = (Tooltip = "Enables debug draws"))
	bool bDebug = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Debug", meta = (EditCondition = "bDebug"))
	float DebugDrawDuration = 0.0f;
#endif

private:
	bool bIsBlockActive = false;
	UPROPERTY()
	TSet<AActor*> ActorsCurrentlyInHitbox;

public:
	AWeaponMelee();

	virtual bool IsWeaponAttacking() const override;

	/**
	 * Checks if the weapon is currently blocking.
	 * @return true if blocking, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsWeaponBlocking() const;

	/**
	 * Checks if the weapon can defend (can be overridden in Blueprints).
	 * @return true if the weapon can defend, false otherwise.
	 */
	UFUNCTION(BlueprintNativeEvent)
	bool CanDefend() const;

	/**
	 * Starts the defense action for the weapon.
	 * @return true if defense started successfully, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	bool StartDefense() const;

	/**
	 * Stops the defense action for the weapon.
	 * @return true if defense stopped successfully, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	bool StopDefense();

	/**
	 * Enables the damage hitbox for the weapon.
	 */
	UFUNCTION(BlueprintCallable)
	void EnableDamageHitbox() const;

	/**
	 * Disables the damage hitbox for the weapon.
	 */
	UFUNCTION(BlueprintCallable)
	void DisableDamageHitbox() const;

	/**
	 * Sets the block state of the weapon.
	 * @param bActive - True to activate block, false to deactivate.
	 */
	void SetBlockActive(const bool bActive);

	/** 
	 * Gets the current attack montage data.
	 * @return The current UWeaponMeleeAttackMontageData instance.
	 */
	UFUNCTION(BlueprintPure)
	UWeaponMeleeAttackData* GetCurrentAttack() const;

	UFUNCTION(BlueprintCallable)
	void SetAttackSpeedMultiplier(const float NewMultiplier) const;

	UFUNCTION(BlueprintCallable)
	void SetDefenseSpeedMultiplier(const float NewMultiplier) const;

	UFUNCTION(BlueprintCallable)
	void SetInterruptSpeedMultiplier(const float NewMultiplier) const;

	UFUNCTION(BlueprintPure)
	float GetAttackSpeedMultiplier() const;

	UFUNCTION(BlueprintPure)
	float GetDefenseSpeedMultiplier() const;

	UFUNCTION(BlueprintPure)
	float GetInterruptSpeedMultiplier() const;

	void CallHitEvent(UMeleeHitbox* Hitbox, const FHitResult& HitResult, float Damage);

	void CallInterruptEvent(UMeleeHitbox* Hitbox, const FHitResult& HitResult);

protected:
	virtual void BeginPlay() override;

	virtual bool NativeDeployWeaponAttack() override;

	UFUNCTION(BlueprintNativeEvent)
	void OnAttackHit(UMeleeHitbox* Hitbox, FHitResult HitResult, float Damage);

	UFUNCTION(BlueprintNativeEvent)
	void OnAttackInterrupted(UMeleeHitbox* Hitbox, FHitResult HitResult);
};

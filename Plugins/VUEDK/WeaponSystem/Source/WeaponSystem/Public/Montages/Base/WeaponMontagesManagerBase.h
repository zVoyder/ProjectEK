// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/WeaponBase.h"
#include "Components/ActorComponent.h"
#include "WeaponMontagesManagerBase.generated.h"

UCLASS(Abstract, NotBlueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEM_API UWeaponMontagesManagerBase : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Equip")
	FWeaponMontageData EquipMontageData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Equip")
	FWeaponMontageData UnequipMontageData;

protected:
	UPROPERTY()
	AWeaponBase* Weapon;

private:
	bool bIsWeaponReadyToUse = true;

public:
	UWeaponMontagesManagerBase();

	UFUNCTION(BlueprintCallable)
	void StartWeaponMontage(FWeaponMontageData WeaponMontageData, const float WeaponPlayRate, const float CharacterPlayRate) const;

	UFUNCTION(BlueprintCallable)
	void InterruptWeaponMontage(const FWeaponMontageData& WeaponMontageData, const float CharacterBlendOutTime, const float WeaponBlendOutTime) const;

	UFUNCTION(BlueprintPure)
	bool IsPlayingWeaponMontage(const FWeaponMontageData& WeaponMontageData) const;

	/**
	 * Checks if the weapon is ready to use, meaning that it is not currently playing an equip or unequip montage.
	 * @return True if the weapon is ready to use, false otherwise.
	 */
	UFUNCTION(BlueprintPure)
	bool IsWeaponReadyToUse() const;
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	virtual void BeginPlay() override;

	virtual bool Check() const;

	UFUNCTION()
	virtual void OnWeaponAttackSuccess();

	UFUNCTION()
	virtual void OnWeaponAttackFail();

	UFUNCTION()
	virtual void OnWeaponEndAttack();

private:
	void StartEquipMontage();
	
	void StartUnequipMontage();
	
	UFUNCTION()
	void OnWeaponEquipped();

	UFUNCTION()
	void OnWeaponUnequipped();

	UFUNCTION()
	void OnWeaponReadyToUse(bool bInterrupted);
};

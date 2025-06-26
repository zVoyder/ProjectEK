// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/WeaponMontagesManagerBase.h"
#include "Data/WeaponMeleeAttackMontageData.h"
#include "MeleeMontagesManager.generated.h"

class AWeaponMelee;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEM_API UMeleeMontagesManager : public UWeaponMontagesManagerBase
{
	GENERATED_BODY()

public:
	// -- Montages --
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Actions")
	FWeaponMontageData DefensiveMontageData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Actions")
	TArray<FWeaponMeleeAttackMontageData> AttackMontages;

private:
	UPROPERTY()
	AWeaponMelee* WeaponMelee;
	int32 CurrentAttackIndex = 0;
	bool bWantsToAttack = false;
	bool bIsAttacking = false;
	bool bEndAttack = false;
	FWeaponMeleeAttackMontageData* CurrentAttackMontage = nullptr;

public:
	UMeleeMontagesManager();
	
	UFUNCTION(BlueprintPure)
	int32 GetAttackIndex() const;

	bool IsMontageAttacking() const;

protected:
	virtual void BeginPlay() override;
	
	virtual void OnWeaponAttackSuccess() override;

	virtual void OnWeaponEndAttack() override;
	
	void PlayNextAttackMontage();

	void PlayAttackMontageAt(const int32 AttackIndex);
	
	void PlayAttackMontage(FWeaponMeleeAttackMontageData& AttackMontage);
	
	void EndAttackSequence();

	UFUNCTION()
	void OnMontageAttackFinished(bool bInterrupted);

private:
	void ClearCurrentMontage();
};

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
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Attacks")
	FAlphaBlendArgs StartBlendIn;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Attacks")
	FAlphaBlendArgs StopBlendOut;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Attacks")
	TArray<FWeaponMeleeAttackMontageData> AttackMontages;
	
private:
	UPROPERTY()
	AWeaponMelee* WeaponMelee;
	int32 CurrentAttackIndex = 0;
	bool bWantsToAttack = false;
	bool bHasBufferedAttack = false;
	bool bIsAttacking = false;
	bool bEndAttack = false;
	FWeaponMeleeAttackMontageData* CurrentAttackMontage = nullptr;

public:
	UMeleeMontagesManager();

	UFUNCTION(BlueprintPure)
	int32 GetAttackIndex() const;

	bool IsMontageAttacking() const;

	void CheckBufferAttack();

	void ClearBufferedAttack();
	
	void OnAttackBeginNotify();
	
	void OnAttackFinishedNotify();
	
protected:
	virtual void BeginPlay() override;

	virtual void OnWeaponAttackSuccess() override;

	virtual void OnWeaponEndAttack() override;

	void StartComboAttack();

	void EndComboAttack() const;

	void PlayNextAttackMontage();

	void PlayAttackMontageAt(const int32 AttackIndex);

	void PlayAttackMontage(FWeaponMeleeAttackMontageData& AttackMontage);

	void EndAttackSequence();
};

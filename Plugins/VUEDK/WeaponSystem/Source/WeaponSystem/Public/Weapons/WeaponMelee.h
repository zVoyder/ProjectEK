// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "Components/CapsuleComponent.h"
#include "Data/WeaponMeleeData.h"
#include "Montages/MeleeMontagesManager.h"
#include "WeaponMelee.generated.h"

UCLASS()
class WEAPONSYSTEM_API AWeaponMelee : public AWeaponBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Data")
	FWeaponMeleeData WeaponMeleeData;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMeleeMontagesManager* MeleeMontagesManager;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UCapsuleComponent* DamageHitboxPreview;

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Debug")
	bool bDebug = false;
#endif

private:
	bool bIsHitboxEnabled = false;
	bool bIsBlockActive = false;
	UPROPERTY()
	TSet<AActor*> ActorsCurrentlyInHitbox;

public:
	AWeaponMelee();

	virtual void Tick(float DeltaSeconds) override;

	virtual bool IsWeaponAttacking() const override;

	UFUNCTION(BlueprintPure)
	bool IsWeaponBlocking() const;

	UFUNCTION(BlueprintNativeEvent)
	bool CanDefend() const;
	
	UFUNCTION(BlueprintCallable)
	void StartDefense() const;

	UFUNCTION(BlueprintCallable)
	void StopDefense();
	
	UFUNCTION(BlueprintCallable)
	void EnableDamageHitbox();

	UFUNCTION(BlueprintCallable)
	void DisableDamageHitbox();

	void SetBlockActive(const bool bActive);

protected:
	virtual bool NativeDeployWeaponAttack() override;

private:
	void TraceDamageHitbox();

	void HandleHitActors(TArray<FHitResult> HitResults);

	void ClearHitActors();
};

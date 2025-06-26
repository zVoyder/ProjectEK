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
	UPROPERTY()
	TSet<AActor*> ActorsCurrentlyInHitbox;

public:
	AWeaponMelee();

	virtual void Tick(float DeltaSeconds) override;

	virtual bool IsWeaponAttacking() const override;
	
	UFUNCTION(BlueprintCallable)
	void EnableDamageHitbox();

	UFUNCTION(BlueprintCallable)
	void DisableDamageHitbox();

protected:
	virtual bool DeployWeaponAttack_Implementation() override;
	
private:
	void TraceDamageHitbox();

	void HandleHitActors(TArray<FHitResult> HitResults);

	void ClearHitActors();
};

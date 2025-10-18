// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MeleeHitboxesManager.generated.h"

class AWeaponMelee;
class UMeleeHitbox;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEM_API UMeleeHitboxesManager : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<UMeleeHitbox*> MeleeHitboxes;
	UPROPERTY()
	TSet<AActor*> ActorsCurrentlyInHitbox;
	UPROPERTY()
	AWeaponMelee* WeaponMelee;
	bool bIsTracingHitboxes = false;
	
public:
	UMeleeHitboxesManager();
	
	void Init(AWeaponMelee* InWeaponMelee);
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetTracingHitboxes(bool bEnableTrace);

private:
	void TraceDamageHitbox();
	
	void HandleHitActors(TMap<UMeleeHitbox*, TArray<FHitResult>> HitboxesHitResults);
	
	void ClearHitActors();

	bool Check() const;
};

// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ShootBarrel.h"
#include "Behaviours/ShooterBehaviourBase.h"
#include "Components/ActorComponent.h"
#include "Data/ShootData.h"
#include "Managers/Magazine/MagazinesManager.h"
#include "Shooter.generated.h"

DEFINE_LOG_CATEGORY_STATIC(LogShooter, All, All);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WEAPONSYSTEM_API UShooter : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Instanced)
	TArray<UShooterBehaviourBase*> ShooterBehaviours;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta = (ToolTip = "If true, allows multiple shooter behaviours to shoot at the same time."))
	bool bCanShootInParallel = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UMagazinesManager* MagazinesManager;

public:
	UShooter();

	UFUNCTION(BlueprintCallable)
	void Init(APawn* InOwner);

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void SetupShootBarrel(UShootBarrel* InShootBarrel, const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable, BlueprintPure = false)
	bool Shoot(const int32 BehaviourIndex = 0) const;

	UFUNCTION(BlueprintCallable)
	void EndShootSequence(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintCallable)
	void EnableAllBehaviours() const;

	UFUNCTION(BlueprintCallable)
	void DisableAllBehaviours() const;

	UFUNCTION(BlueprintPure)
	UShooterBehaviourBase* GetShooterBehaviour(const int32 BehaviourIndex = 0) const;
	
	UFUNCTION(BlueprintPure)
	UMagazine* GetMagazineByTag(const FGameplayTag& MagazineTag) const;

	UFUNCTION(BlueprintPure)
	bool IsAnyBehaviourShooting() const;

private:
	void TickBehaviours(const float DeltaTime) const;
};

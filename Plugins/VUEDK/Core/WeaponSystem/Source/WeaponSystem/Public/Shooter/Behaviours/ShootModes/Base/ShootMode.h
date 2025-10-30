// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Shooter/Data/ShootType.h"
#include "UObject/Object.h"
#include "ShootMode.generated.h"

class UShooterBehaviourBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(
	FOnShootRequestHandled,
	UShootMode*, ShootMode,
	bool, bDeployShoot,
	bool, bSuccess
);

UCLASS(Blueprintable, BlueprintType, EditInlineNew)
class WEAPONSYSTEM_API UShootMode : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnShootRequestHandled OnShootRequestHandled;
	
private:
	UPROPERTY()
	UShooterBehaviourBase* Behaviour;
	bool bIsProcessingRequest = false;

public:
	void Init(UShooterBehaviourBase* InBehaviour);

	virtual void Tick(float DeltaTime) override;
	
	virtual bool IsTickable() const override;
	
	virtual TStatId GetStatId() const override;

	void RequestShoot(const EShootType ShootType);

	bool IsProcessingRequest() const;

protected:
	/**
	 * Deploys the shoot of this related shooter behaviour.
	 */
	UFUNCTION(BlueprintCallable)
	void DeployShoot() const;
	
	UFUNCTION(BlueprintPure)
	UShooterBehaviourBase* GetRelatedBehaviour() const;
	
	UFUNCTION(BlueprintCallable)
	void FinishShootRequest(const bool bDeployShoot = true, const bool bSuccess = true);
	
	UFUNCTION(BlueprintNativeEvent)
	void OnRequestShoot(EShootType ShootType);
	
	UFUNCTION(BlueprintNativeEvent)
	void OnProcessingRequest(const float DeltaTime);

	bool Check() const;
};

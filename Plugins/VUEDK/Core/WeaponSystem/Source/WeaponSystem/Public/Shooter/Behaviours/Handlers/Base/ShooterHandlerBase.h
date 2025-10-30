// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Shooter/ShootBarrel.h"
#include "UObject/Object.h"
#include "Shooter/Data/ShootData.h"
#include "Shooter/Data/ShootFailReason.h"
#include "ShooterHandlerBase.generated.h"

class UShootBarrel;
class UShooterBehaviourBase;

UCLASS(Abstract, NotBlueprintable)
class WEAPONSYSTEM_API UShooterHandlerBase : public UObject, public FTickableGameObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UShooterBehaviourBase* Behaviour;

public:
	void Init(UShooterBehaviourBase* InBehaviour);
	
	virtual void Tick(float DeltaTime) override;
	
	virtual bool IsTickable() const override;
	
	virtual TStatId GetStatId() const override;

protected:
	virtual void OnInit();
	
	virtual void BindEvents();
	
	UFUNCTION()
	virtual void OnBehaviourEnabled(UShooterBehaviourBase* InBehaviour);
	
	UFUNCTION()
	virtual void OnBehaviourDisabled(UShooterBehaviourBase* InBehaviour);
	
	UFUNCTION()
	virtual void OnBehaviourShootSuccess(UShooterBehaviourBase* InBehaviour, UShootBarrel* ShootBarrel, int32 ShotIndex);
	
	UFUNCTION()
	virtual void OnBehaviourShootFail(UShooterBehaviourBase* InBehaviour, EShootFailReason FailReason);

	UShootData* GetShootData() const;
	
	virtual bool Check() const;
};

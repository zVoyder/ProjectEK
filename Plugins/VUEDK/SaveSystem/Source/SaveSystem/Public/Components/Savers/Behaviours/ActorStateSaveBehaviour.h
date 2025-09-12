// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SaveBehaviourBase.h"
#include "ActorStateSaveBehaviour.generated.h"

UCLASS()
class SAVESYSTEM_API UActorStateSaveBehaviour : public USaveBehaviourBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorSaveBehaviour|Transform")
	bool bSaveLocation = true;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorSaveBehaviour|Transform")
	bool bSaveRotation = true;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorSaveBehaviour|Transform")
	bool bSaveScale = true;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorSaveBehaviour|Physics")
	bool bSaveLinearVelocity = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorSaveBehaviour|Physics")
	bool bSaveAngularVelocity = false;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "ActorSaveBehaviour|Physics")
	bool bSaveMass = false;
	
public:
	virtual USaveData* CreateSaveDataInstance_Implementation() override;

	virtual bool Save_Implementation(USaveData* SaveData) override;

	virtual bool Load_Implementation(USaveData* SaveData) override;
};

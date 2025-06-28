// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ResourceAttributesManager.h"
#include "RPGInventory/RPGInventory.h"
#include "StatsSystem/CharacterStats/CharacterStats.h"
#include "UGameFramework/PlayerStates/Base/ProjectEKPlayerState.h"
#include "GameplayPlayerState.generated.h"

UCLASS()
class PROJECTEK_API AGameplayPlayerState : public AProjectEKPlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Inventory")
	URPGInventory* Inventory;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Equipment")
	UEquipment* Equipment;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player|Resource Attributes")
	UResourceAttributesManager* ResourceAttributesManager;
	
public:
	AGameplayPlayerState();

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, BlueprintPure)
	UCharacterStats* GetCharacterStats();

private:
	void InitStats();
};

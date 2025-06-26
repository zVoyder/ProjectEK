// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/ProjectEKGameState.h"
#include "RPGInventory/RPGInventoriesManager.h"
#include "GameplayGameState.generated.h"

UCLASS()
class PROJECTEK_API AGameplayGameState : public AProjectEKGameState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	URPGInventoriesManager* InventoriesManager;

public:
	AGameplayGameState();
};

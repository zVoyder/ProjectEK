// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/GameStates/GameplayGameState.h"

AGameplayGameState::AGameplayGameState()
{
	InventoriesManager = CreateDefaultSubobject<URPGInventoriesManager>(TEXT("InventoriesManager"));
}

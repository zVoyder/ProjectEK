// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/Controllers/GameplayController.h"
#include "Utility/InputsHandlerUtility.h"

void AGameplayController::BeginPlay()
{
	Super::BeginPlay();
	UInputsHandlerUtility::SetModeGameplay();
}

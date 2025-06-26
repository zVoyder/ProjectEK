// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/Controllers/MenuController.h"
#include "Utility/InputsHandlerUtility.h"

void AMenuController::BeginPlay()
{
	Super::BeginPlay();
	UInputsHandlerUtility::SetModeUI();
}

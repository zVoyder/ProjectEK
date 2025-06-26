// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputMappingContext.h"
#include "Data/ContextsBehaviour.h"
#include "Data/InputModeGameplay.h"
#include "Data/InputModeUI.h"
#include "UObject/Object.h"
#include "InputsHandlerSystemSettings.generated.h"

UCLASS(Config = InputsHandlerSystemSettings, DefaultConfig, meta = (DisplayName = "Inputs Handler System Settings"))
class INPUTSHANDLERSYSTEM_API UInputsHandlerSystemSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditDefaultsOnly, Category = "Mapping Contexts", meta = (ToolTip = "Input mapping contexts that are always active and shared across all input setups."))
	TSet<TSoftObjectPtr<UInputMappingContext>> CommonContexts;
	UPROPERTY(Config, EditAnywhere, Category = "Mapping Contexts", meta = (ToolTip = "Input mapping contexts that are only active when the game is in gameplay mode."))
	TSet<TSoftObjectPtr<UInputMappingContext>> GameplayContexts;
	UPROPERTY(Config, EditAnywhere, Category = "Mapping Contexts", meta = (ToolTip = "Input mapping contexts that are only active when the game is in UI mode."))
	TSet<TSoftObjectPtr<UInputMappingContext>> UIContexts;
	UPROPERTY(Config, EditAnywhere, Category = "Mapping Contexts")
	EContextsBehaviour ContextsBehaviour;
	UPROPERTY(Config, EditAnywhere, Category = "Mapping Contexts", meta = (ClampMin = "0", EditCondition = "ContextsBehaviour == EContextsBehaviour::Priority"))
	int32 UIContextsPriority = 1;
	UPROPERTY(Config, EditAnywhere, Category = "Mapping Contexts", AdvancedDisplay, meta = (EditCondition = "ContextsBehaviour == EContextsBehaviour::Priority", ToolTip = "Input mapping contexts that are excluded when the game is in UI mode with priority."))
	TSet<TSoftObjectPtr<UInputMappingContext>> ExcludedContexts;
	UPROPERTY(Config, EditAnywhere, Category = Settings)
	FInputModeGameplay InputModeGameplay;
	UPROPERTY(Config, EditAnywhere, Category = Settings)
	FInputModeUI InputModeUI;

public:
	explicit UInputsHandlerSystemSettings(const FObjectInitializer& ObjectInitializer);
};

// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/Controllers/Base/ProjectEKPlayerController.h"
#include "EnhancedInputComponent.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "Utility/InputsHandlerUtility.h"

AProjectEKPlayerController::AProjectEKPlayerController()
{
	MenuManager = CreateDefaultSubobject<UMenuManager>(TEXT("MenuManager"));
}

void AProjectEKPlayerController::BeginPlay()
{
	Super::BeginPlay();
	MenuManager->OnMenuOpened.AddDynamic(this, &AProjectEKPlayerController::OnMenuOpened);
	MenuManager->OnMenuClosed.AddDynamic(this, &AProjectEKPlayerController::OnMenuClosed);
}

void AProjectEKPlayerController::BeginDestroy()
{
	Super::BeginDestroy();
	MenuManager->OnMenuOpened.RemoveDynamic(this, &AProjectEKPlayerController::OnMenuOpened);
	MenuManager->OnMenuClosed.RemoveDynamic(this, &AProjectEKPlayerController::OnMenuClosed);
}

void AProjectEKPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(InputComponent);

	if (!IsValid(EnhancedInput))
		return;

	if (IsValid(BackAction))
		EnhancedInput->BindAction(BackAction, ETriggerEvent::Triggered, this, &AProjectEKPlayerController::OnBackAction);

	if (IsValid(ConfirmAction))
		EnhancedInput->BindAction(ConfirmAction, ETriggerEvent::Triggered, this, &AProjectEKPlayerController::OnConfirmAction);

	if (IsValid(LeftAction))
		EnhancedInput->BindAction(LeftAction, ETriggerEvent::Triggered, this, &AProjectEKPlayerController::OnLeftAction);

	if (IsValid(RightAction))
		EnhancedInput->BindAction(RightAction, ETriggerEvent::Triggered, this, &AProjectEKPlayerController::OnRightAction);
}

UBetterUIEventsHandlerSubsystem* AProjectEKPlayerController::GetUIEventsHandlerSubsystem() const
{
	if (IsValid(UIEventsHandlerSubsystem))
		return UIEventsHandlerSubsystem;

	const UGameInstance* GameInstance = GetGameInstance();

	if (!IsValid(GameInstance))
		return nullptr;

	return GameInstance->GetSubsystem<UBetterUIEventsHandlerSubsystem>();
}

void AProjectEKPlayerController::OnMenuOpened_Implementation(UMenuWidget* MenuWidget, FGameplayTag MenuTag)
{
	UInputsHandlerUtility::SetModeUI();
}

void AProjectEKPlayerController::OnMenuClosed_Implementation(UMenuWidget* MenuWidget, FGameplayTag MenuTag)
{
	UInputsHandlerUtility::SetModeGameplay();
}

void AProjectEKPlayerController::OnBackAction(const FInputActionValue& Value)
{
	const UBetterUIEventsHandlerSubsystem* Events = GetUIEventsHandlerSubsystem();

	if (!IsValid(Events))
		return;

	Events->RequestBack();
}

void AProjectEKPlayerController::OnConfirmAction(const FInputActionValue& Value)
{
	const UBetterUIEventsHandlerSubsystem* Events = GetUIEventsHandlerSubsystem();

	if (!IsValid(Events))
		return;

	Events->RequestConfirm();
}

void AProjectEKPlayerController::OnLeftAction(const FInputActionValue& Value)
{
	const UBetterUIEventsHandlerSubsystem* Events = GetUIEventsHandlerSubsystem();

	if (!IsValid(Events))
		return;
	
	Events->RequestLeftSelect();
}

void AProjectEKPlayerController::OnRightAction(const FInputActionValue& Value)
{
	const UBetterUIEventsHandlerSubsystem* Events = GetUIEventsHandlerSubsystem();

	if (!IsValid(Events))
		return;

	Events->RequestRightSelect();
}

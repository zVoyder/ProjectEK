// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BetterUIEventsHandlerSubsystem.h"
#include "InputAction.h"
#include "Components/MenuManager.h"
#include "GameFramework/PlayerController.h"
#include "ProjectEKPlayerController.generated.h"

UCLASS(Abstract)
class PROJECTEK_API AProjectEKPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UMenuManager* MenuManager;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UInputAction* BackAction;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UInputAction* ConfirmAction;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UInputAction* LeftAction;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	UInputAction* RightAction;

private:
	UPROPERTY()
	UBetterUIEventsHandlerSubsystem* UIEventsHandlerSubsystem;

public:
	AProjectEKPlayerController();
	
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;

	virtual void SetupInputComponent() override;

	UFUNCTION(BlueprintCallable)
	UBetterUIEventsHandlerSubsystem* GetUIEventsHandlerSubsystem() const;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnMenuOpened(UMenuWidget* MenuWidget, FGameplayTag MenuTag);

	UFUNCTION(BlueprintNativeEvent)
	void OnMenuClosed(UMenuWidget* MenuWidget, FGameplayTag MenuTag);

	UFUNCTION()
	void OnBackAction(const FInputActionValue& Value);

	UFUNCTION()
	void OnConfirmAction(const FInputActionValue& Value);

	UFUNCTION()
	void OnLeftAction(const FInputActionValue& Value);

	UFUNCTION()
	void OnRightAction(const FInputActionValue& Value);
};

// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameCastingSubsystem.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameCastingHelper.generated.h"

UCLASS()
class PROJECTEK_API UGameCastingHelper : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static UGameCastingSubsystem* GameCastingSubsystem;

public:
	static void Init(UGameCastingSubsystem* InGameCastingSubsystem);
	
	UFUNCTION(BlueprintPure)
	static AGameplayGamemode* GetGameplayGamemode();

	UFUNCTION(BlueprintPure)
	static AMenuGamemode* GetMenuGamemode();

	UFUNCTION(BlueprintPure)
	static AProjectEKCharacter* GetGameCharacter();

	UFUNCTION(BlueprintPure)
	static AGameplayController* GetGameplayController();

	UFUNCTION(BlueprintPure)
	static AMenuController* GetMenuController();
	
	UFUNCTION(BlueprintPure)
	static AGameplayGameState* GetGameplayGameState();
	
	UFUNCTION(BlueprintPure)
	static AGameplayPlayerState* GetGameplayPlayerState();

private:
	static bool Check();
};

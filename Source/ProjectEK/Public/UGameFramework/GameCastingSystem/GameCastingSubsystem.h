// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Features/Player/ProjectEKCharacter.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UGameFramework/Controllers/GameplayController.h"
#include "UGameFramework/Controllers/MenuController.h"
#include "UGameFramework/Gamemodes/GameplayGamemode.h"
#include "UGameFramework/Gamemodes/MenuGamemode.h"
#include "UGameFramework/GameStates/GameplayGameState.h"
#include "UGameFramework/PlayerStates/GameplayPlayerState.h"
#include "GameCastingSubsystem.generated.h"

DEFINE_LOG_CATEGORY_STATIC(LogGameCasting, All, All);

UCLASS()
class PROJECTEK_API UGameCastingSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY()
	AGameplayGamemode* GameplayGamemode;
	UPROPERTY()
	AMenuGamemode* MenuGamemode;
	UPROPERTY()
	AProjectEKCharacter* GameCharacter;
	UPROPERTY()
	AGameplayController* GameplayController;
	UPROPERTY()
	AMenuController* MenuController;
	UPROPERTY()
	AGameplayGameState* GameplayGameState;
	UPROPERTY()
	AGameplayPlayerState* GameplayPlayerState;
	
public:
	UFUNCTION(BlueprintPure)
	AGameplayGamemode* GetGameplayGamemode() const;
	
	UFUNCTION(BlueprintPure)
	AMenuGamemode* GetMenuGamemode() const;
	
	UFUNCTION(BlueprintPure)
	AProjectEKCharacter* GetGameCharacter() const;
	
	UFUNCTION(BlueprintPure)
	AGameplayController* GetGameplayController() const;
	
	UFUNCTION(BlueprintPure)
	AMenuController* GetMenuController() const;
	
	UFUNCTION(BlueprintPure)
	AGameplayGameState* GetGameplayGameState() const;
	
	UFUNCTION(BlueprintPure)
	AGameplayPlayerState* GetGameplayPlayerState() const;
	
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;

private:
	bool TryCacheGameplayGamemode(const UWorld* World);
	
	bool TryCacheMenuGamemode(const UWorld* World);

	bool TryCacheGameCharacter(const UWorld* World);
	
	bool TryCacheGameplayController(const UWorld* World);
	
	bool TryCacheMenuController(const UWorld* World);
	
	bool TryCacheGameplayGameState(const UWorld* World);
	
	bool TryCacheGameplayPlayerState(const UWorld* World);
};

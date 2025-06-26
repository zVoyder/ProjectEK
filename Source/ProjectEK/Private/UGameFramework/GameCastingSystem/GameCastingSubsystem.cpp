// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/GameCastingSystem/GameCastingSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "UGameFramework/GameCastingSystem/GameCastingHelper.h"

AGameplayGamemode* UGameCastingSubsystem::GetGameplayGamemode() const
{
	return GameplayGamemode;
}

AMenuGamemode* UGameCastingSubsystem::GetMenuGamemode() const
{
	return MenuGamemode;
}

AProjectEKCharacter* UGameCastingSubsystem::GetGameCharacter() const
{
	return GameCharacter;
}

AGameplayController* UGameCastingSubsystem::GetGameplayController() const
{
	return GameplayController;
}

AMenuController* UGameCastingSubsystem::GetMenuController() const
{
	return MenuController;
}

AGameplayGameState* UGameCastingSubsystem::GetGameplayGameState() const
{
	return GameplayGameState;
}

AGameplayPlayerState* UGameCastingSubsystem::GetGameplayPlayerState() const
{
	return GameplayPlayerState;
}

void UGameCastingSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);

	const UWorld* World = InWorld.GetWorld();
	if (!IsValid(World) || !World->IsGameWorld())
	{
		UE_LOG(LogGameCasting, Error, TEXT("World is not valid or is not a game world. Project might crash!"));
		return;
	}

	if (!TryCacheGameplayGamemode(World))
		TryCacheMenuGamemode(World);

	if (!TryCacheGameplayController(World))
		TryCacheMenuController(World);

	TryCacheGameplayPlayerState(World);
	TryCacheGameplayGameState(World);
	TryCacheGameCharacter(World);
	
	UGameCastingHelper::Init(this);
	UE_LOG(LogGameCasting, Display, TEXT("GameCastingSubsystem::OnWorldBeginPlay: GameCastingHelper initialized."));
}

bool UGameCastingSubsystem::TryCacheGameplayGamemode(const UWorld* World)
{
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(World);
	GameplayGamemode = Cast<AGameplayGamemode>(GameMode);

	if (!IsValid(GameplayGamemode))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheGameplayGamemode: GameplayGamemode failed cast."));
		return false;
	}

	return true;
}

bool UGameCastingSubsystem::TryCacheMenuGamemode(const UWorld* World)
{
	AGameModeBase* GameMode = UGameplayStatics::GetGameMode(World);
	MenuGamemode = Cast<AMenuGamemode>(GameMode);

	if (!IsValid(GameplayGamemode))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheGameplayGamemode: MenuGamemode failed cast."));
		return false;
	}

	return true;
}

bool UGameCastingSubsystem::TryCacheGameCharacter(const UWorld* World)
{
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(World, 0);
	GameCharacter = Cast<AProjectEKCharacter>(Pawn);

	if (!IsValid(GameCharacter))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheGameCharacter: GameCharacter failed cast."));
		return false;
	}
	
	return true;
}

bool UGameCastingSubsystem::TryCacheGameplayController(const UWorld* World)
{
	APlayerController* Controller = UGameplayStatics::GetPlayerController(World, 0); // Index 0 because in this project we only have one player controller
	GameplayController = Cast<AGameplayController>(Controller);

	if (!IsValid(GameplayController))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheGameplayController: GameplayController failed cast."));
		return false;
	}

	return true;
}

bool UGameCastingSubsystem::TryCacheMenuController(const UWorld* World)
{
	APlayerController* Controller = UGameplayStatics::GetPlayerController(World, 0);
	MenuController = Cast<AMenuController>(Controller);

	if (!IsValid(MenuController))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheMenuController: MenuController failed cast."));
		return false;
	}

	return true;
}

bool UGameCastingSubsystem::TryCacheGameplayGameState(const UWorld* World)
{
	AGameStateBase* GameState = UGameplayStatics::GetGameState(World);
	GameplayGameState = Cast<AGameplayGameState>(GameState);

	if (!IsValid(GameplayGameState))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheGameplayGameState: GameplayGameState failed cast."));
		return false;
	}

	return true;
}

bool UGameCastingSubsystem::TryCacheGameplayPlayerState(const UWorld* World)
{
	APlayerState* PlayerState = UGameplayStatics::GetPlayerState(World, 0);
	GameplayPlayerState = Cast<AGameplayPlayerState>(PlayerState);

	if (!IsValid(GameplayPlayerState))
	{
		UE_LOG(LogGameCasting, Warning, TEXT("GameCastingSubsystem::CacheGameplayPlayerState: GameplayPlayerState failed cast."));
		return false;
	}

	return true;
}

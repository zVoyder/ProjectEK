// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/GameCastingSystem/GameCastingHelper.h"
#include "UGameFramework/GameCastingSystem/GameCastingSubsystem.h"

UGameCastingSubsystem* UGameCastingHelper::GameCastingSubsystem;

void UGameCastingHelper::Init(UGameCastingSubsystem* InGameCastingSubsystem)
{
	GameCastingSubsystem = InGameCastingSubsystem;

	if (!IsValid(GameCastingSubsystem))
		UE_LOG(LogGameCasting, Error, TEXT("UGameCastingHelper::Init: GameCastingSubsystem is not valid. Project might crash!"));
}

AGameplayGamemode* UGameCastingHelper::GetGameplayGamemode()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetGameplayGamemode: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetGameplayGamemode();
}

AMenuGamemode* UGameCastingHelper::GetMenuGamemode()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetMenuGamemode: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetMenuGamemode();
}

AProjectEKCharacter* UGameCastingHelper::GetGameCharacter()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetGameCharacter: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetGameCharacter();
}

AGameplayController* UGameCastingHelper::GetGameplayController()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetGameplayController: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetGameplayController();
}

AMenuController* UGameCastingHelper::GetMenuController()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetMenuController: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetMenuController();
}

AGameplayGameState* UGameCastingHelper::GetGameplayGameState()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetGameplayGameState: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetGameplayGameState();
}

AGameplayPlayerState* UGameCastingHelper::GetGameplayPlayerState()
{
	if (!Check())
	{
		UE_LOG(LogGameCasting, Warning, TEXT("UGameCastingHelper::GetGameplayPlayerState: Check failed."));
		return nullptr;
	}

	return GameCastingSubsystem->GetGameplayPlayerState();
}

bool UGameCastingHelper::Check()
{
	return IsValid(GameCastingSubsystem);
}

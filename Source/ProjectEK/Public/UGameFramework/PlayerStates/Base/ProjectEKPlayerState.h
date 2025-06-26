// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/Savers/Saver.h"
#include "GameFramework/PlayerState.h"
#include "ProjectEKPlayerState.generated.h"

UCLASS(Abstract)
class PROJECTEK_API AProjectEKPlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USaver* Saver;

public:
	AProjectEKPlayerState();
};

// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/ProjectEKPlayerController.h"
#include "GameplayController.generated.h"

UCLASS()
class PROJECTEK_API AGameplayController : public AProjectEKPlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};

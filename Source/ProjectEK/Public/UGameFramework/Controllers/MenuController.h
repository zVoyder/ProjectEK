// Copyright zVoyder, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Base/ProjectEKPlayerController.h"
#include "MenuController.generated.h"

UCLASS()
class PROJECTEK_API AMenuController : public AProjectEKPlayerController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;
};

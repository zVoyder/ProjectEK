// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MeleeHitboxTracerBase.h"
#include "MeleeHitboxCubeTracer.generated.h"

UCLASS()
class WEAPONSYSTEM_API UMeleeHitboxCubeTracer : public UMeleeHitboxTracerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector BoxHalfExtent;

protected:
	virtual FCollisionShape CreateCollisionShape() override;
};

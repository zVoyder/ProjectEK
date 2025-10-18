// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MeleeHitboxTracerBase.h"
#include "MeleeHitboxSphereTracer.generated.h"

UCLASS()
class WEAPONSYSTEM_API UMeleeHitboxSphereTracer : public UMeleeHitboxTracerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SphereRadius = 30.0f;

protected:
	virtual FCollisionShape CreateCollisionShape() override;
};

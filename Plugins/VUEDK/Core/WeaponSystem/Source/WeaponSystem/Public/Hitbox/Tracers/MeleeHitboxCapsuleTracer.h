// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "MeleeHitboxTracerBase.h"
#include "MeleeHitboxCapsuleTracer.generated.h"

UCLASS()
class WEAPONSYSTEM_API UMeleeHitboxCapsuleTracer : public UMeleeHitboxTracerBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleHalfHeight = 44.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleRadius = 22.0f;
	
protected:
	virtual FCollisionShape CreateCollisionShape() override;
};

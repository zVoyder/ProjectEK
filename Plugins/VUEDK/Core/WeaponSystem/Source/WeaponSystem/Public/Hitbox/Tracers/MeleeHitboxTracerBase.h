// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Hitbox/MeleeHitbox.h"
#include "UObject/Object.h"
#include "MeleeHitboxTracerBase.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType, EditInlineNew)
class WEAPONSYSTEM_API UMeleeHitboxTracerBase : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	UMeleeHitbox* MeleeHitbox;
	
public:
	virtual UWorld* GetWorld() const override;
	
	void Init(UMeleeHitbox* InMeleeHitbox);
	
	TArray<FHitResult> TraceHitbox();

protected:
	virtual FCollisionShape CreateCollisionShape();
	
	FCollisionQueryParams CreateCollisionParams() const;
	
	ECollisionChannel GetCollisionChannel() const;
	
	bool Check() const;
};

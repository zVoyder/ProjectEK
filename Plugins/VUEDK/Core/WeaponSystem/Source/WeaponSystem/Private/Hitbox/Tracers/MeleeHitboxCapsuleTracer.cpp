// Copyright VUEDK, Inc. All Rights Reserved.

#include "Hitbox/Tracers/MeleeHitboxCapsuleTracer.h"

FCollisionShape UMeleeHitboxCapsuleTracer::CreateCollisionShape()
{
	return FCollisionShape::MakeCapsule(CapsuleRadius, CapsuleHalfHeight);
}

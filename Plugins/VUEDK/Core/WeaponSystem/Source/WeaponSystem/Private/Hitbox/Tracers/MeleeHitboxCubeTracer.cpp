// Copyright VUEDK, Inc. All Rights Reserved.

#include "Hitbox/Tracers/MeleeHitboxCubeTracer.h"

FCollisionShape UMeleeHitboxCubeTracer::CreateCollisionShape()
{
	return FCollisionShape::MakeBox(BoxHalfExtent);
}

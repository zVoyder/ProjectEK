// Copyright VUEDK, Inc. All Rights Reserved.

#include "Hitbox/Tracers/MeleeHitboxSphereTracer.h"
#include "WeaponSystem.h"

FCollisionShape UMeleeHitboxSphereTracer::CreateCollisionShape()
{
	return FCollisionShape::MakeSphere(SphereRadius);
}

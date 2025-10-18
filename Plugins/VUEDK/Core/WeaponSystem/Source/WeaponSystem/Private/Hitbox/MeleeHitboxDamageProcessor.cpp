// Copyright VUEDK, Inc. All Rights Reserved.

#include "Hitbox/MeleeHitboxDamageProcessor.h"

float UMeleeHitboxDamageProcessor::ProcessDamageNative(const float WeaponDamage, UMeleeHitbox* Hitbox, AWeaponMelee* WeaponMelee) const
{
	return ProcessDamage(WeaponDamage, Hitbox, WeaponMelee) * DamageMultiplier;
}

float UMeleeHitboxDamageProcessor::ProcessDamage_Implementation(const float WeaponDamage, UMeleeHitbox* Hitbox, AWeaponMelee* WeaponMelee) const
{
	return WeaponDamage;
}


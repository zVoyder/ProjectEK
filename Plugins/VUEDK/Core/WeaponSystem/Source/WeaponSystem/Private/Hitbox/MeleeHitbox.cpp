// Copyright VUEDK, Inc. All Rights Reserved.

#include "Hitbox/MeleeHitbox.h"
#include "WeaponSystem.h"
#include "Hitbox/Tracers/MeleeHitboxTracerBase.h"
#include "Weapons/WeaponMelee.h"

UMeleeHitbox::UMeleeHitbox()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMeleeHitbox::Init(AWeaponMelee* InWeaponMelee)
{
	if (!IsValid(InWeaponMelee))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UMeleeHitbox::Init: InWeaponMelee is not valid."));
		return;
	}

	if (!IsValid(HitboxTracer))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UMeleeHitbox::Init: HitboxType is not valid."));
		return;
	}
	
	HitboxTracer->Init(this);
	WeaponMelee = InWeaponMelee;
}

TArray<FHitResult> UMeleeHitbox::TraceHitbox() const
{
	if (!Check())
		return TArray<FHitResult>();

	return HitboxTracer->TraceHitbox();
}

float UMeleeHitbox::GetProcessedDamage()
{
	if (!Check())
		return 0.0f;

	return DamageProcessor->ProcessDamage(WeaponMelee->GetWeaponDamage(), this, GetWeaponMelee());
}

AWeaponMelee* UMeleeHitbox::GetWeaponMelee() const
{
	return WeaponMelee;
}

bool UMeleeHitbox::Check() const
{
	return IsValid(WeaponMelee) && IsValid(HitboxTracer) && IsValid(DamageProcessor);
}

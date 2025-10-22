// Copyright VUEDK, Inc. All Rights Reserved.

#include "Weapons/WeaponMelee.h"
#include "WeaponSystem.h"
#include "Kismet/GameplayStatics.h"

AWeaponMelee::AWeaponMelee()
{
	MeleeMontagesManager = CreateDefaultSubobject<UMeleeMontagesManager>(TEXT("MeleeMontagesManager"));
	MeleeHitboxesManager = CreateDefaultSubobject<UMeleeHitboxesManager>(TEXT("MeleeHitboxesManager"));
}

bool AWeaponMelee::IsWeaponAttacking() const
{
	return MeleeMontagesManager->IsMontageAttacking();
}

bool AWeaponMelee::IsWeaponBlocking() const
{
	return MeleeMontagesManager->IsMontageDefending() && bIsBlockActive;
}

bool AWeaponMelee::CanDefend_Implementation() const
{
	return IsValid(MeleeMontagesManager->DefensiveMontage.GetCharacterMontage());
}

bool AWeaponMelee::StartDefense() const
{
	if (!CanDefend())
        return false;
	
	MeleeMontagesManager->SetWantsToDefend(true);
	return true;
}

bool AWeaponMelee::StopDefense()
{
	if (!CanDefend())
		return false;
	
	MeleeMontagesManager->SetWantsToDefend(false);
	bIsBlockActive = false;
	return true;
}

void AWeaponMelee::EnableDamageHitbox() const
{
	MeleeHitboxesManager->SetTracingHitboxes(true);
}

void AWeaponMelee::DisableDamageHitbox() const
{
	MeleeHitboxesManager->SetTracingHitboxes(false);
}

void AWeaponMelee::SetBlockActive(const bool bActive)
{
	bIsBlockActive = bActive;
}

UWeaponMeleeAttackData* AWeaponMelee::GetCurrentAttack() const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::GetCurrentAttackMontageData: MeleeMontagesManager is not valid."));
		return nullptr;
	}

	return MeleeMontagesManager->GetCurrentAttackMontage();
}

void AWeaponMelee::SetAttackSpeedMultiplier(const float NewMultiplier) const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::SetAttackSpeedMultiplier: MeleeMontagesManager is not valid."));
		return;
	}

	MeleeMontagesManager->SetAttackSpeedMultiplier(NewMultiplier);
}

void AWeaponMelee::SetDefenseSpeedMultiplier(const float NewMultiplier) const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::SetDefenseSpeedMultiplier: MeleeMontagesManager is not valid."));
		return;
	}
	
	MeleeMontagesManager->SetDefenseSpeedMultiplier(NewMultiplier);
}

void AWeaponMelee::SetInterruptSpeedMultiplier(const float NewMultiplier) const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::SetInterruptSpeedMultiplier: MeleeMontagesManager is not valid."));
		return;
	}

	MeleeMontagesManager->SetInterruptSpeedMultiplier(NewMultiplier);
}

float AWeaponMelee::GetAttackSpeedMultiplier() const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::GetAttackSpeedMultiplier: MeleeMontagesManager is not valid."));
		return 1.0f;
	}
	
	return MeleeMontagesManager->GetAttackSpeedMultiplier();
}

float AWeaponMelee::GetDefenseSpeedMultiplier() const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::GetDefenseSpeedMultiplier: MeleeMontagesManager is not valid."));
		return 1.0f;
	}

	return MeleeMontagesManager->GetDefenseSpeedMultiplier();
}

float AWeaponMelee::GetInterruptSpeedMultiplier() const
{
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::GetInterruptSpeedMultiplier: MeleeMontagesManager is not valid."));
		return 1.0f;
	}

	return MeleeMontagesManager->GetInterruptSpeedMultiplier();
}

void AWeaponMelee::CallHitEvent(UMeleeHitbox* Hitbox, const FHitResult& HitResult, float Damage)
{
	OnWeaponAttackHit.Broadcast(Hitbox, HitResult, Damage);
	OnAttackHit(Hitbox, HitResult, Damage);
}

void AWeaponMelee::CallInterruptEvent(UMeleeHitbox* Hitbox, const FHitResult& HitResult)
{
	OnWeaponAttackInterrupt.Broadcast(Hitbox, HitResult);
	OnAttackInterrupted(Hitbox, HitResult);
}

void AWeaponMelee::BeginPlay()
{
	Super::BeginPlay();

	if (!IsValid(MeleeHitboxesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::BeginPlay: MeleeHitboxesManager is not valid."));
		return;
	}
	
	MeleeHitboxesManager->Init(this);
}

bool AWeaponMelee::NativeDeployWeaponAttack()
{
	if (!Super::NativeDeployWeaponAttack())
		return false;
	
	if (!IsValid(MeleeMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::NativeDeployWeaponAttack: MeleeMontagesManager is not valid."));
		return false;
	}
	
	if (MeleeMontagesManager->IsBusy())
		return false;

	return true;
}

void AWeaponMelee::OnAttackHit_Implementation(UMeleeHitbox* Hitbox, FHitResult HitResult, float Damage)
{
}

void AWeaponMelee::OnAttackInterrupted_Implementation(UMeleeHitbox* Hitbox, FHitResult HitResult)
{
}

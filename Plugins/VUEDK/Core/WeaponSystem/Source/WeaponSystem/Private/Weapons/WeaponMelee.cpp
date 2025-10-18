// Copyright VUEDK, Inc. All Rights Reserved.

#include "Weapons/WeaponMelee.h"
#include "WeaponSystem.h"
#include "Kismet/GameplayStatics.h"

AWeaponMelee::AWeaponMelee()
{
	MeleeMontagesManager = CreateDefaultSubobject<UMeleeMontagesManager>(TEXT("MeleeMontagesManager"));
	DamageHitboxPreview = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DamageHitboxPreview"));
	DamageHitboxPreview->SetupAttachment(WeaponMesh);
	DamageHitboxPreview->SetCollisionEnabled(ECollisionEnabled::NoCollision);
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
	if (!IsValid(MeleeHitboxesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::EnableDamageHitbox: MeleeHitboxesManager is not valid."));
		return;
	}
	
	MeleeHitboxesManager->SetTracingHitboxes(true);
}

void AWeaponMelee::DisableDamageHitbox() const
{
	if (!IsValid(MeleeHitboxesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponMelee::DisableDamageHitbox: MeleeHitboxesManager is not valid."));
		return;
	}
	
	MeleeHitboxesManager->SetTracingHitboxes(false);
}

void AWeaponMelee::SetBlockActive(const bool bActive)
{
	bIsBlockActive = bActive;
}

void AWeaponMelee::InterruptWeaponAttack()
{
	OnWeaponAttackInterrupt.Broadcast();
	OnWeaponAttackInterrupted();
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

void AWeaponMelee::OnWeaponAttackInterrupted_Implementation()
{
}

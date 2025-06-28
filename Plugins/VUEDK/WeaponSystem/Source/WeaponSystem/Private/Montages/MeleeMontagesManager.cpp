// Copyright VUEDK, Inc. All Rights Reserved.

#include "Montages/MeleeMontagesManager.h"
#include "WeaponSystem.h"
#include "Weapons/WeaponMelee.h"

UMeleeMontagesManager::UMeleeMontagesManager(): WeaponMelee(nullptr)
{
}

int32 UMeleeMontagesManager::GetAttackIndex() const
{
	return CurrentAttackIndex;
}

void UMeleeMontagesManager::BeginPlay()
{
	Super::BeginPlay();

	if (AttackMontages.IsEmpty())
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UMeleeMontagesManager::BeginPlay: %s in %s has no attack montages."), *GetName(), *GetOwner()->GetName());
		UActorComponent::SetActive(false);
		return;
	}

	WeaponMelee = Cast<AWeaponMelee>(Weapon);

	if (!IsValid(WeaponMelee))
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UMeleeMontagesManager::BeginPlay: %s in %s is not in a WeaponMelee."), *GetName(), *GetOwner()->GetName());
		UActorComponent::SetActive(false);
	}
}

void UMeleeMontagesManager::OnWeaponAttackSuccess()
{
	bWantsToAttack = true;
	bEndAttack = false;

	if (!bIsAttacking && bWantsToAttack)
	{
		StartComboAttack();
		bIsAttacking = true;
	}
}

void UMeleeMontagesManager::OnWeaponEndAttack()
{
	Super::OnWeaponEndAttack();
	bWantsToAttack = false;
	bEndAttack = true;
}

bool UMeleeMontagesManager::IsMontageAttacking() const
{
	return bIsAttacking;
}

void UMeleeMontagesManager::CheckBufferAttack()
{
	if (bWantsToAttack)
		bHasBufferedAttack = true;
}

void UMeleeMontagesManager::ClearBufferedAttack()
{
	bHasBufferedAttack = false;
}

void UMeleeMontagesManager::OnAttackBeginNotify()
{
	ClearBufferedAttack();
}

void UMeleeMontagesManager::OnAttackFinishedNotify()
{
	//print has buffered attack and wants to attack
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Buffered: %s, Wants: %s"), bHasBufferedAttack ? TEXT("True") : TEXT("False"), bWantsToAttack ? TEXT("True") : TEXT("False")));
	
	if (/*bWantsToAttack || */bHasBufferedAttack)
	{
		bEndAttack = false;
		PlayNextAttackMontage();
		return;
	}

	EndAttackSequence();
}

void UMeleeMontagesManager::StartComboAttack()
{
	if (AttackMontages.IsEmpty())
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UMeleeMontagesManager::StartComboAttack: %s in %s has no attack montages."), *GetName(), *GetOwner()->GetName());
		return;
	}

	CurrentAttackIndex = 0;
	FWeaponMeleeAttackMontageData& AttackMontage = AttackMontages[0];

	CurrentAttackMontage = &AttackMontage;
	StartWeaponMontageWithBlends(
		AttackMontage.AttackMontage,
		1.0f, // Use the default play rate, since it can be set in the montage itself
		1.0f,
		FAlphaBlendArgs(), // No need to BlendIn the Weapon
		StartBlendIn
	);
}

void UMeleeMontagesManager::EndComboAttack() const
{
	if (CurrentAttackMontage == nullptr || !IsValid(CurrentAttackMontage->AttackMontage.CharacterMontage))
		return;

	StopWeaponMontageWithBlends(
		CurrentAttackMontage->AttackMontage,
		FAlphaBlendArgs(),
		StopBlendOut
	);
}

void UMeleeMontagesManager::PlayNextAttackMontage()
{
	CurrentAttackIndex++;
	CurrentAttackIndex %= AttackMontages.Num();
	PlayAttackMontageAt(CurrentAttackIndex);
}

void UMeleeMontagesManager::PlayAttackMontageAt(const int32 AttackIndex)
{
	if (!AttackMontages.IsValidIndex(AttackIndex))
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UMeleeMontagesManager::PlayAttackMontageAt: Invalid index %d for attack montage in %s."), AttackIndex, *GetName());
		return;
	}

	FWeaponMeleeAttackMontageData& AttackMontage = AttackMontages[AttackIndex];
	PlayAttackMontage(AttackMontage);
}

void UMeleeMontagesManager::PlayAttackMontage(FWeaponMeleeAttackMontageData& AttackMontage)
{
	CurrentAttackMontage = &AttackMontage;

	StartWeaponMontage(
		AttackMontage.AttackMontage,
		1.0f,
		1.0f
	);
}

void UMeleeMontagesManager::EndAttackSequence()
{
	EndComboAttack();
	CurrentAttackIndex = 0;
	bIsAttacking = false;
	bEndAttack = false;
	CurrentAttackMontage = nullptr;
}

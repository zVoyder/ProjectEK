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
		return;
	}
}

void UMeleeMontagesManager::OnWeaponAttackSuccess()
{
	bWantsToAttack = true;
	bEndAttack = false;

	if (!bIsAttacking && bWantsToAttack)
	{
		PlayNextAttackMontage();
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

void UMeleeMontagesManager::PlayNextAttackMontage()
{
	PlayAttackMontageAt(CurrentAttackIndex);
	CurrentAttackIndex++;
	CurrentAttackIndex %= AttackMontages.Num();
}

void UMeleeMontagesManager::PlayAttackMontageAt(const int32 AttackIndex)
{
	if (AttackMontages.IsEmpty())
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UMeleeMontagesManager::PlayAttackMontageAt: %s in %s has no attack montages."), *GetName(), *GetOwner()->GetName());
		return;
	}

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
	ClearCurrentMontage();
	AttackMontage.AttackMontage.OnMontageFinished.AddDynamic(this, &UMeleeMontagesManager::OnMontageAttackFinished);
	CurrentAttackMontage = &AttackMontage;

	StartWeaponMontage(
		AttackMontage.AttackMontage,
		AttackMontage.AttackPlayRate,
		AttackMontage.AttackPlayRate
	);
}

void UMeleeMontagesManager::OnMontageAttackFinished(bool bInterrupted)
{
	bIsAttacking = false;

	if (bEndAttack && !bWantsToAttack)
	{
		EndAttackSequence();
		return;
	}

	if (bWantsToAttack)
	{
		bEndAttack = false;
		PlayNextAttackMontage();
		return;
	}

	EndAttackSequence();
}

void UMeleeMontagesManager::EndAttackSequence()
{
	ClearCurrentMontage();
	CurrentAttackIndex = 0;
	bIsAttacking = false;
	bEndAttack = false;
}

void UMeleeMontagesManager::ClearCurrentMontage()
{
	if (CurrentAttackMontage == nullptr)
		return;

	CurrentAttackMontage->AttackMontage.OnMontageFinished.RemoveDynamic(this, &UMeleeMontagesManager::OnMontageAttackFinished);
	CurrentAttackMontage = nullptr;
}

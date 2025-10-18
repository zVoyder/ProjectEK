// Copyright VUEDK, Inc. All Rights Reserved.

#include "Hitbox/MeleeHitboxesManager.h"
#include "WeaponSystem.h"
#include "Hitbox/MeleeHitbox.h"
#include "Kismet/GameplayStatics.h"
#include "Weapons/WeaponMelee.h"

UMeleeHitboxesManager::UMeleeHitboxesManager()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UMeleeHitboxesManager::Init(AWeaponMelee* InWeaponMelee)
{
	if (!IsValid(InWeaponMelee))
	{
		UE_LOG(LogWeaponSystem, Error, TEXT("UMeleeHitboxesManager::Init: InWeaponMelee is not valid."));
		SetActive(false);
		return;
	}
	WeaponMelee = InWeaponMelee;
	
	WeaponMelee->GetComponents<UMeleeHitbox>(MeleeHitboxes);
	if (MeleeHitboxes.IsEmpty())
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UMeleeHitboxesManager::Init: No MeleeHitboxes found on weapon: %s"), *WeaponMelee->GetName());
		SetActive(false);
		return;
	}

	for (UMeleeHitbox* MeleeHitbox : MeleeHitboxes)
	{
		if (IsValid(MeleeHitbox))
			MeleeHitbox->Init(WeaponMelee);
	}
}

void UMeleeHitboxesManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	TraceDamageHitbox();
}

void UMeleeHitboxesManager::SetTracingHitboxes(const bool bEnableTrace)
{
	ClearHitActors();
	bIsTracingHitboxes = bEnableTrace;
}

void UMeleeHitboxesManager::TraceDamageHitbox()
{
	if (!bIsTracingHitboxes)
		return;
	
	if (!Check())
		return;
	
	TMap<UMeleeHitbox*, TArray<FHitResult>> HitMap = TMap<UMeleeHitbox*, TArray<FHitResult>>();

	for (UMeleeHitbox* MeleeHitbox : MeleeHitboxes)
	{
		if (!IsValid(MeleeHitbox))
			continue;

		TArray<FHitResult> HitboxHitResults = MeleeHitbox->TraceHitbox();

		if (HitboxHitResults.Num() > 0)
			HitMap.Add(MeleeHitbox, HitboxHitResults);
	}

	HandleHitActors(HitMap);
}

void UMeleeHitboxesManager::HandleHitActors(TMap<UMeleeHitbox*, TArray<FHitResult>> HitboxesHitResults)
{
	TSet<AActor*> NewActorsInHitbox;

	for (auto& HitboxResults : HitboxesHitResults)
	{
		UMeleeHitbox* MeleeHitbox = HitboxResults.Key;
		TArray<FHitResult>& HitResults = HitboxResults.Value;

		for (const FHitResult& HitResult : HitResults)
		{
			AActor* HitActor = HitResult.GetActor();
			if (!IsValid(HitActor) || NewActorsInHitbox.Contains(HitActor))
				continue;

			FWeaponMeleeData& WeaponMeleeData = WeaponMelee->WeaponMeleeData;

			if (WeaponMeleeData.AttackInterruptors.Contains(HitResult.Component->GetCollisionObjectType()))
			{
				WeaponMelee->InterruptWeaponAttack();
				return;
			}

			NewActorsInHitbox.Add(HitActor);
			if (!ActorsCurrentlyInHitbox.Contains(HitActor))
			{
				UGameplayStatics::ApplyPointDamage(
					HitActor,
					MeleeHitbox->GetProcessedDamage(),
					HitResult.ImpactNormal,
					HitResult,
					WeaponMelee->GetInstigatorController(),
					WeaponMelee->GetOwner(),
					WeaponMeleeData.DamageTypeClass
				);
			}
		}
	}

	for (const AActor* PrevActor : ActorsCurrentlyInHitbox)
	{
		if (!NewActorsInHitbox.Contains(PrevActor))
		{
			// Actor was in hitbox but is no longer in it, handle any logic here if needed
		}
	}

	ActorsCurrentlyInHitbox = NewActorsInHitbox;
}

void UMeleeHitboxesManager::ClearHitActors()
{
	ActorsCurrentlyInHitbox.Empty();
}

bool UMeleeHitboxesManager::Check() const
{
	return IsValid(WeaponMelee);
}

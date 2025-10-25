// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Shooter.h"

UShooter::UShooter()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UShooter::Init(APawn* InOwner)
{
	MagazinesManager->Init();
	
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;
		
		Behaviour->Init(this);
		Behaviour->SetOwner(InOwner);
	}
}

void UShooter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	DisableAllBehaviours();
}

void UShooter::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	TickBehaviours(DeltaTime);
}

void UShooter::SetupShootBarrel(UShootBarrel* InShootBarrel, const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* SecondaryBehaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(SecondaryBehaviour))
		return;

	SecondaryBehaviour->SetupShootBarrel(InShootBarrel);
}

bool UShooter::Shoot(const int32 BehaviourIndex) const
{
	if (!bCanShootInParallel && IsAnyBehaviourShooting())
		return false;
	
	UShooterBehaviourBase* ShooterBehaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(ShooterBehaviour))
		return false;
	
	return ShooterBehaviour->Shoot();
}

void UShooter::EndShootSequence(const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* ShooterBehaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(ShooterBehaviour))
		return;
	
	ShooterBehaviour->EndShootSequence();
}

void UShooter::EnableAllBehaviours() const
{
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;
		
		Behaviour->EnableBehaviour();
	}
}

void UShooter::DisableAllBehaviours() const
{
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;
		
		Behaviour->DisableBehaviour();
	}
}

UShooterBehaviourBase* UShooter::GetShooterBehaviour(const int32 BehaviourIndex) const
{
	if (!ShooterBehaviours.IsValidIndex(BehaviourIndex))
	{
		UE_LOG(LogShooter, Error, TEXT("Shooter::GetSecondaryShooterBehaviour: Invalid BehaviourIndex %d."), BehaviourIndex);
		return nullptr;
	}
	
	return ShooterBehaviours[BehaviourIndex];
}

UMagazine* UShooter::GetMagazineByTag(const FGameplayTag& MagazineTag) const
{
	if (!IsValid(MagazinesManager))
	{
		UE_LOG(LogShooter, Error, TEXT("Shooter::GetMagazineByTag: MagazinesManager is not valid."));
		return nullptr;
	}

	return MagazinesManager->GetMagazineByTag(MagazineTag);
}

bool UShooter::IsAnyBehaviourShooting() const
{
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;
		
		if (Behaviour->IsShooting())
			return true;
	}

	return false;
}

void UShooter::TickBehaviours(const float DeltaTime) const
{
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;
		
		Behaviour->TickBehaviour(DeltaTime);
	}
}

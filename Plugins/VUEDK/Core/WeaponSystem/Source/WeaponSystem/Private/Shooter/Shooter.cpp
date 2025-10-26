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

	BindEvents();
}

void UShooter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	UnbindEvents();
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

void UShooter::BindEvents() const
{
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;

		Behaviour->OnBehaviourEnabled.AddDynamic(this, &UShooter::CallBehaviourEnabledEvent);
		Behaviour->OnBehaviourDisabled.AddDynamic(this, &UShooter::CallBehaviourDisabledEvent);
		Behaviour->OnBehaviourShootSuccess.AddDynamic(this, &UShooter::CallBehaviourShootSuccessEvent);
		Behaviour->OnBehaviourShootFail.AddDynamic(this, &UShooter::CallBehaviourShootFailEvent);
		Behaviour->OnBehaviourShootSequenceEnded.AddDynamic(this, &UShooter::CallBehaviourShootSequenceEndedEvent);
		Behaviour->OnBehaviourAmmoChanged.AddDynamic(this, &UShooter::CallBehaviourAmmoChangedEvent);
		Behaviour->OnBehaviourRefilled.AddDynamic(this, &UShooter::CallBehaviourRefilledEvent);
		Behaviour->OnBehaviourFull.AddDynamic(this, &UShooter::CallBehaviourFullEvent);
		Behaviour->OnBehaviourEmpty.AddDynamic(this, &UShooter::CallBehaviourEmptyEvent);
	}

	for (const auto& MagPair : MagazinesManager->MagazinesMap)
	{
		UMagazine* Magazine = MagPair.Value;
		if (!IsValid(Magazine))
			continue;

		Magazine->OnMagazineRefilled.AddDynamic(this, &UShooter::CallMagazineRefilledEvent);
		Magazine->OnMagazineAmmoChanged.AddDynamic(this, &UShooter::CallMagazineAmmoChangedEvent);
		Magazine->OnMagazineFull.AddDynamic(this, &UShooter::CallMagazineFullEvent);
		Magazine->OnMagazineEmpty.AddDynamic(this, &UShooter::CallMagazineEmptyEvent);
	}
}

void UShooter::UnbindEvents() const
{
	for (const auto Behaviour : ShooterBehaviours)
	{
		if (!IsValid(Behaviour))
			continue;

		Behaviour->OnBehaviourEnabled.RemoveDynamic(this, &UShooter::CallBehaviourEnabledEvent);
		Behaviour->OnBehaviourDisabled.RemoveDynamic(this, &UShooter::CallBehaviourDisabledEvent);
		Behaviour->OnBehaviourShootSuccess.RemoveDynamic(this, &UShooter::CallBehaviourShootSuccessEvent);
		Behaviour->OnBehaviourShootFail.RemoveDynamic(this, &UShooter::CallBehaviourShootFailEvent);
		Behaviour->OnBehaviourShootSequenceEnded.RemoveDynamic(this, &UShooter::CallBehaviourShootSequenceEndedEvent);
		Behaviour->OnBehaviourAmmoChanged.RemoveDynamic(this, &UShooter::CallBehaviourAmmoChangedEvent);
		Behaviour->OnBehaviourRefilled.RemoveDynamic(this, &UShooter::CallBehaviourRefilledEvent);
		Behaviour->OnBehaviourFull.RemoveDynamic(this, &UShooter::CallBehaviourFullEvent);
		Behaviour->OnBehaviourEmpty.RemoveDynamic(this, &UShooter::CallBehaviourEmptyEvent);
	}

	for (const auto& MagPair : MagazinesManager->MagazinesMap)
	{
		UMagazine* Magazine = MagPair.Value;
		if (!IsValid(Magazine))
			continue;

		Magazine->OnMagazineRefilled.RemoveDynamic(this, &UShooter::CallMagazineRefilledEvent);
		Magazine->OnMagazineAmmoChanged.RemoveDynamic(this, &UShooter::CallMagazineAmmoChangedEvent);
		Magazine->OnMagazineFull.RemoveDynamic(this, &UShooter::CallMagazineFullEvent);
		Magazine->OnMagazineEmpty.RemoveDynamic(this, &UShooter::CallMagazineEmptyEvent);
	}
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

void UShooter::CallBehaviourEnabledEvent(UShooterBehaviourBase* Behaviour)
{
	OnBehaviourEnabled.Broadcast(Behaviour);
}

void UShooter::CallBehaviourDisabledEvent(UShooterBehaviourBase* Behaviour)
{
	OnBehaviourDisabled.Broadcast(Behaviour);
}

void UShooter::CallBehaviourShootSuccessEvent(UShooterBehaviourBase* Behaviour, UShootBarrel* ShootBarrel, int32 ShotIndex)
{
	OnBehaviourShootSuccess.Broadcast(Behaviour, ShootBarrel, ShotIndex);
}

void UShooter::CallBehaviourShootFailEvent(UShooterBehaviourBase* Behaviour, EShootFailReason FailReason)
{
	OnBehaviourShootFail.Broadcast(Behaviour, FailReason);
}

void UShooter::CallBehaviourShootSequenceEndedEvent(UShooterBehaviourBase* Behaviour)
{
	OnBehaviourShootSequenceEnded.Broadcast(Behaviour);
}

void UShooter::CallBehaviourAmmoChangedEvent(UShooterBehaviourBase* Behaviour, UMagazine* Magazine, int32 CurrentAmmo, int32 MagSize)
{
	OnBehaviourAmmoChanged.Broadcast(Behaviour, Magazine, CurrentAmmo, MagSize);
}

void UShooter::CallBehaviourRefilledEvent(UShooterBehaviourBase* Behaviour, UMagazine* Magazine, int32 CurrentAmmo, int32 RefilledAmmo, int32 RemainingAmmo)
{
	OnBehaviourRefilled.Broadcast(Behaviour, Magazine, CurrentAmmo, RefilledAmmo, RemainingAmmo);
}

void UShooter::CallBehaviourFullEvent(UShooterBehaviourBase* Behaviour, UMagazine* Magazine)
{
	OnBehaviourFull.Broadcast(Behaviour, Magazine);
}

void UShooter::CallBehaviourEmptyEvent(UShooterBehaviourBase* Behaviour, UMagazine* Magazine)
{
	OnBehaviourEmpty.Broadcast(Behaviour, Magazine);
}

void UShooter::CallMagazineRefilledEvent(const UObject* Instigator, int32 CurrentAmmo, int32 RefilledAmmo, int32 RemainingAmmo)
{
	OnMagazineRefilled.Broadcast(Instigator, CurrentAmmo, RefilledAmmo, RemainingAmmo);
}

void UShooter::CallMagazineAmmoChangedEvent(const UObject* Instigator, int32 CurrentAmmo, int32 MagSize)
{
	OnMagazineAmmoChanged.Broadcast(Instigator, CurrentAmmo, MagSize);
}

void UShooter::CallMagazineFullEvent(const UObject* Instigator)
{
	OnMagazineFull.Broadcast(Instigator);
}

void UShooter::CallMagazineEmptyEvent(const UObject* Instigator)
{
	OnMagazineEmpty.Broadcast(Instigator);
}

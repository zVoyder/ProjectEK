// Copyright VUEDK, Inc. All Rights Reserved.

#include "Weapons/WeaponFirearm.h"
#include "WeaponSystem.h"

AWeaponFirearm::AWeaponFirearm()
{
	FirearmMontagesManager = CreateDefaultSubobject<UFirearmMontagesManager>(TEXT("FirearmMontagesManager"));
	Shooter = CreateDefaultSubobject<UShooter>(TEXT("Shooter"));
	MainShootBarrel = CreateDefaultSubobject<UShootBarrel>(TEXT("ShootBarrel"));
	MainShootBarrel->SetupAttachment(WeaponMesh);
}

#if WITH_EDITOR
void AWeaponFirearm::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	AttachBarrelToSocket();
}
#endif

void AWeaponFirearm::Init(APawn* InOwner, UObject* InPayload)
{
	Super::Init(InOwner, InPayload);
	Shooter->Init(InOwner);
	Shooter->SetupShootBarrel(MainShootBarrel);
	SetAimRecoilModifier();
	BindEvents();
}

bool AWeaponFirearm::Shoot(const int32 BehaviourIndex) const
{
	return Shooter->Shoot(BehaviourIndex);
}

void AWeaponFirearm::EndShootSequence(const int32 BehaviourIndex) const
{
	Shooter->EndShootSequence(BehaviourIndex);
}

bool AWeaponFirearm::IsMagFull(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return false;
	
	return Behaviour->IsMagFull();
}

bool AWeaponFirearm::IsMagEmpty(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return false;
	
	return Behaviour->IsMagEmpty();
}

void AWeaponFirearm::AddWeaponDynamicSpread(const float AddSpread, const float ChangeRate, const float RecoveryRate, const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;

	Behaviour->AddDynamicSpread(AddSpread, ChangeRate, RecoveryRate);
}

void AWeaponFirearm::ResetCooldown(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->ResetCooldown();
}

void AWeaponFirearm::ResetSpread(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->ResetSpread(WeaponFirearmData.SpreadChangeRate);
}

void AWeaponFirearm::SetWeaponDamage(const float NewDamage)
{
	Super::SetWeaponDamage(NewDamage);
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(0);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetDamage(NewDamage);
}

void AWeaponFirearm::SetDamage(const float NewDamage, const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetDamage(NewDamage);
}

void AWeaponFirearm::SetWeaponFireRate(const float NewFireRate, const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetFireRate(NewFireRate);
}

void AWeaponFirearm::SetWeaponMagazineSize(const int32 NewSize, const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetMagSize(NewSize);
}

void AWeaponFirearm::SetWeaponMaxRange(const float NewRange, const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetMaxRange(NewRange);
}

void AWeaponFirearm::SetWeaponRecoilStrength(const float NewRecoilStrength, const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetRecoilStrength(NewRecoilStrength);
}

void AWeaponFirearm::SetWeaponReloadTime(const float NewReloadTime)
{
	WeaponFirearmData.ReloadTime = NewReloadTime;
}

void AWeaponFirearm::SetCurrentAmmo(const int32 NewAmmo, const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;

	UMagazine* RelatedMagazine = Behaviour->GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return;

	RelatedMagazine->SetCurrentAmmo(NewAmmo);
}

void AWeaponFirearm::SetWeaponShootType(const EShootType NewShootType, const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;

	Behaviour->ChangeShootType(NewShootType);
}

void AWeaponFirearm::InstantSetSpread(const float InSpread, const bool bOverrideDefault, const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->InstantSetSpread(InSpread, bOverrideDefault);
}

void AWeaponFirearm::SetWeaponSpread(const float InSpread, const bool bOverrideDefault, const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->SetSpread(InSpread, WeaponFirearmData.SpreadChangeRate, bOverrideDefault);
}

UShooterBehaviourBase* AWeaponFirearm::GetShooterBehaviour(const int32 BehaviourIndex) const
{
	return Shooter->GetShooterBehaviour(BehaviourIndex);
}

UMagazine* AWeaponFirearm::GetWeaponMagazineByTag(FGameplayTag MagazineTag) const
{
	return Shooter->GetMagazineByTag(MagazineTag);
}

FWeaponFirearmData AWeaponFirearm::GetWeaponFirearmData() const
{
	return WeaponFirearmData;
}

float AWeaponFirearm::GetWeaponFireRate(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetFireRate();
}

float AWeaponFirearm::GetWeaponMagSize(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetMagSize();
}

float AWeaponFirearm::GetWeaponMaxRange(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetMaxRange();
}

float AWeaponFirearm::GetWeaponRecoilStrength(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetRecoilStrength();
}

float AWeaponFirearm::GetWeaponReloadTime() const
{
	return WeaponFirearmData.ReloadTime;
}

int32 AWeaponFirearm::GetCurrentAmmo(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0;

	const UMagazine* RelatedMagazine = Behaviour->GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return 0;
	
	return RelatedMagazine->GetCurrentAmmo();
}

int32 AWeaponFirearm::GetNeededAmmo(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0;

	const UMagazine* RelatedMagazine = Behaviour->GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return 0;
	
	return RelatedMagazine->GetNeededAmmoToFull();
}

UAmmoTypeData* AWeaponFirearm::GetWeaponAmmoType(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return nullptr;

	const UMagazine* RelatedMagazine = Behaviour->GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return nullptr;
	
	return RelatedMagazine->GetAmmoType();
}

EShootType AWeaponFirearm::GetWeaponShootType(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return EShootType::None;
	
	return Behaviour->GetShootType();
}

float AWeaponFirearm::GetWeaponMaxSpread(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetMaxRange();
}

float AWeaponFirearm::GetDefaultSpread(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetDefaultSpread();
}

float AWeaponFirearm::GetWeaponSpread(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return 0.f;
	
	return Behaviour->GetSpread();
}

void AWeaponFirearm::ResetToDefaultShootType(const int32 BehaviourIndex) const
{
	UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	Behaviour->ResetShootType();
}

void AWeaponFirearm::ReloadOfAmmoType(UAmmoTypeData* InAmmoType, const int32 Ammo)
{
	// if (IsReloading())
	// 	return;
	//
	// if (!CanReload())
	// 	return;
	//
	// if (GetWeaponMainAmmoType() != InAmmoType)
	// 	return;
	//
	// bHasReloadInsertedAmmo = false;
	// float WeaponPlayRate = 0.f;
	// float CharacterPlayRate = 0.f;
	// FReloadEventData ReloadEventData;
	// ReloadEventData.AmmoPerType.Add(InAmmoType, Ammo);
	// SetReloadPayload(ReloadEventData);
	//
	// if (IsValid(FirearmMontagesManager->MainReloadMontage.GetWeaponMontage()))
	// 	WeaponPlayRate = FirearmMontagesManager->MainReloadMontage.GetWeaponMontage()->GetPlayLength() / GetWeaponReloadTime();
	//
	// if (IsValid(FirearmMontagesManager->MainReloadMontage.GetCharacterMontage()))
	// 	CharacterPlayRate = FirearmMontagesManager->MainReloadMontage.GetCharacterMontage()->GetPlayLength() / GetWeaponReloadTime();
	//
	// OnReloadStarted.Broadcast(ReloadEventData);
	// OnReloadStart(ReloadEventData);
	// StartWeaponMontage(
	// 	FirearmMontagesManager->MainReloadMontage,
	// 	WeaponPlayRate,
	// 	CharacterPlayRate
	// );
}

void AWeaponFirearm::ReloadShooterBehaviourOfAmmoType(UAmmoTypeData* InAmmoType, const int32 Ammo, int32 BehaviourIndex)
{
	// if (IsReloading())
	// 	return;
	//
	// if (!CanReload())
	// 	return;
	//
	// UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	// Behaviour->RefillWithAmmoType(InAmmoType, Ammo);
}

void AWeaponFirearm::FullReloadOfAmmoType(UAmmoTypeData* InAmmoType)
{
	ReloadOfAmmoType(InAmmoType, GetNeededAmmo());
}

void AWeaponFirearm::Reload(const int32 Ammo)
{
	ReloadOfAmmoType(GetWeaponAmmoType(), Ammo);
}

void AWeaponFirearm::FullReload()
{
	FullReloadOfAmmoType(GetWeaponAmmoType());
}

void AWeaponFirearm::InterruptReload(const float CharacterBlendOutTime, const float WeaponBlendOutTime)
{
	StopWeaponMontageWithBlends(FirearmMontagesManager->MainReloadMontage, WeaponBlendOutTime, CharacterBlendOutTime);
}

void AWeaponFirearm::SetAim(const bool bIsEnabled, const int32 BehaviourIndex)
{
	if (bIsEnabled)
		EnableAim(BehaviourIndex);
	else
		DisableAim(BehaviourIndex);

	bIsAimingDownSight = bIsEnabled;
}

bool AWeaponFirearm::IsAiming() const
{
	return bIsAimingDownSight;
}

bool AWeaponFirearm::IsReloading() const
{
	return IsPlayingWeaponMontage(FirearmMontagesManager->MainReloadMontage);
}

void AWeaponFirearm::BeginPlay()
{
	AttachBarrelToSocket();
	Super::BeginPlay();
}

void AWeaponFirearm::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UnbindEvents();
	Super::EndPlay(EndPlayReason);
}

bool AWeaponFirearm::CanShoot()
{
	if (!IsValid(FirearmMontagesManager))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("AWeaponFirearm::NativeDeployWeaponAttack: FirearmMontagesManager is not valid."));
		return true;
	}

	if (FirearmMontagesManager->IsBusy())
		return true;

	if (bCanDeployAttackIfReloading)
		return true;

	if (IsReloading())
		return true;

	return false;
}

bool AWeaponFirearm::NativeDeployWeaponAttack()
{
	if (!Super::NativeDeployWeaponAttack())
		return false;

	if (!CanShoot())
		return false;

	return Shooter->Shoot();
}

void AWeaponFirearm::OnEndWeaponAttack_Implementation()
{
	Shooter->EndShootSequence();
}

void AWeaponFirearm::EnableAim(const int32 BehaviourIndex)
{
	SetAimSpreadModifier(BehaviourIndex);
	SetWeaponSpread(AimSpread, false, BehaviourIndex);
	SetWeaponRecoilStrength(AdsRecoilStrength, BehaviourIndex);
	OnEnableAim();
	OnAimEnabled.Broadcast();
}

void AWeaponFirearm::DisableAim(const int32 BehaviourIndex)
{
	ResetAimWeaponSpread(BehaviourIndex);
	ResetAimWeaponRecoil(BehaviourIndex);
	OnDisableAim();
	OnAimDisabled.Broadcast();
}

bool AWeaponFirearm::CanReload_Implementation() const
{
	return true;
}

void AWeaponFirearm::OnReloadStart_Implementation(FReloadEventData ReloadEventData)
{
}

void AWeaponFirearm::OnReloadEnd_Implementation()
{
}

void AWeaponFirearm::OnReloadSuccess_Implementation(float Remain, float ReloadedAmmo)
{
}

void AWeaponFirearm::OnReloadFail_Implementation()
{
}

void AWeaponFirearm::OnEnableAim_Implementation()
{
}

void AWeaponFirearm::OnDisableAim_Implementation()
{
}

FReloadEventData AWeaponFirearm::GetReloadPayload() const
{
	return ReloadPayload;
}

void AWeaponFirearm::BindEvents()
{
	FirearmMontagesManager->MainReloadMontage.OnMontageFinished.AddDynamic(this, &AWeaponFirearm::OnReloadMontageEnded);
}

void AWeaponFirearm::UnbindEvents()
{
	FirearmMontagesManager->MainReloadMontage.OnMontageFinished.RemoveDynamic(this, &AWeaponFirearm::OnReloadMontageEnded);
}

void AWeaponFirearm::SetReloadPayload(const FReloadEventData InReloadPayload)
{
	ReloadPayload = InReloadPayload;
}

void AWeaponFirearm::ReloadInsertAmmo()
{
	if (!IsReloading())
		return;

	// const FReloadEventData EventData = GetReloadPayload();
	// bHasReloadInsertedAmmo = true;
	//
	// int32 Ammo = EventData.AmmoPerType[GetWeaponMainAmmoType()];
	//
	// const float Remain = Shooter->MainShooterBehaviour->Refill(AmmoPerType.Value);
	// OnReloadSuccess(Remain, AmmoPerType.Value - Remain);
	// OnReloadInsertedAmmo.Broadcast(EventData);
}

void AWeaponFirearm::OnReloadMontageEnded(const bool bInterrupted)
{
	const FReloadEventData EventData = GetReloadPayload();
	OnReloadEnded.Broadcast();
	OnReloadEnd();

	if (bInterrupted && !bHasReloadInsertedAmmo)
	{
		OnReloadInterrupted.Broadcast(EventData);
		OnReloadFail();
		return;
	}

	if (!bHasReloadInsertedAmmo)
		ReloadInsertAmmo();
}

void AWeaponFirearm::SetAimSpreadModifier(const int32 BehaviourIndex)
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	const float Spread = Behaviour->GetSpread();
	AimSpread = Spread - ((Spread / 100.f) * GetWeaponFirearmData().AimPrecisionIncrease);
}

void AWeaponFirearm::SetAimRecoilModifier(const int32 BehaviourIndex)
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;
	
	DefaultRecoilStrength = Behaviour->GetRecoilStrength();
	AdsRecoilStrength = DefaultRecoilStrength - ((DefaultRecoilStrength / 100.f) * GetWeaponFirearmData().AimRecoilControlIncrease);
}

void AWeaponFirearm::ResetAimWeaponRecoil(const int32 BehaviourIndex) const
{
	SetWeaponRecoilStrength(DefaultRecoilStrength, BehaviourIndex);
}

void AWeaponFirearm::ResetAimWeaponSpread(const int32 BehaviourIndex) const
{
	const UShooterBehaviourBase* Behaviour = GetShooterBehaviour(BehaviourIndex);
	if (!IsValid(Behaviour))
		return;

	Behaviour->ResetSpread(WeaponFirearmData.SpreadChangeRate);
}

void AWeaponFirearm::AttachBarrelToSocket() const
{
	if (!IsValid(WeaponMesh) || !IsValid(MainShootBarrel))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("WeaponMesh or ShootBarrel is not valid"));
		return;
	}

	if (WeaponMesh->DoesSocketExist(ShootBarrelSocketName))
		MainShootBarrel->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, ShootBarrelSocketName);
	else
		MainShootBarrel->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, "None");
}

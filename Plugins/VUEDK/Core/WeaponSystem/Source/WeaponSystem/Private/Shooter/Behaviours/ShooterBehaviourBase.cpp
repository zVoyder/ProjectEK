// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Behaviours/ShooterBehaviourBase.h"
#include "Factories/HandlersFactory.h"
#include "Shooter/Shooter.h"
#include "Kismet/GameplayStatics.h"

void UShooterBehaviourBase::Init(UShooter* InShooter)
{
	if (!IsValid(InShooter))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::Init: Shooter in %s is null."), *GetName());
		return;
	}

	if (!IsValid(ShootData))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::Init: ShootData in %s is null."), *GetName());
		return;
	}

	Shooter = InShooter;
	ShootPoints = ShootBarrel->GetShootPointsChildren();
	ResetAll();
	CreateHandlers();
	EnableBehaviour();
	OnInit();
}

void UShooterBehaviourBase::SetupShootBarrel(UShootBarrel* InShootBarrel)
{
	if (!IsValid(InShootBarrel))
	{
		UE_LOG(LogShooter, Error, TEXT("SetupShootBarrel: InShootBarrel in %s is null."), *GetName());
		return;
	}

	ShootBarrel = InShootBarrel;
}

void UShooterBehaviourBase::CreateHandlers()
{
	RecoilHandler = UHandlersFactory::CreateRecoilHandler(this);
	CooldownHandler = UHandlersFactory::CreateCooldownHandler(this);
	SpreadHandler = UHandlersFactory::CreateSpreadHandler(this);
}

void UShooterBehaviourBase::SetOwner(APawn* InOwner)
{
	if (!IsValid(InOwner))
	{
		UE_LOG(LogShooter, Error, TEXT("Owner in %s is null."), *GetName());
		return;
	}

	Owner = InOwner;
}

void UShooterBehaviourBase::SetBehaviourEnabled(const bool bEnabled)
{
	if (bEnabled)
		EnableBehaviour();
	else
		DisableBehaviour();
}

void UShooterBehaviourBase::EnableBehaviour()
{
	if (IsBehaviourActive())
		return;

	bIsBehaviourActive = true;
	OnEnabled();
	OnBehaviourEnabled.Broadcast();
}

void UShooterBehaviourBase::DisableBehaviour()
{
	if (!IsBehaviourActive())
		return;

	bIsBehaviourActive = false;
	OnDisabled();
	OnBehaviourDisabled.Broadcast();
}

bool UShooterBehaviourBase::Shoot()
{
	if (!Check())
	{
		UE_LOG(LogShooter, Error, TEXT("Shoot() in %s failed check."), *GetName());
		ShootFail(EShootFailReason::Error);
		return false;
	}

	if (!IsBehaviourActive())
	{
		UE_LOG(LogShooter, Warning, TEXT("Shoot() in %s is not active."), *GetName());
		ShootFail(EShootFailReason::Disabled);
		return false;
	}

	if (ShootPoints.Num() <= 0)
	{
		UE_LOG(LogShooter, Error, TEXT("ShootPoints in %s is empty."), *GetName());
		ShootFail(EShootFailReason::NoShootPoints);
		return false;
	}

	if (CooldownHandler->IsInCooldown())
	{
		ShootFail(EShootFailReason::CoolDown);
		return false;
	}

	if (!TryConsumeAmmoForShoot())
	{
		ShootFail(EShootFailReason::NoAmmo);
		return false;
	}

	if (!OnShootCondition(ShootBarrel))
	{
		ShootFail(EShootFailReason::Condition);
		return false;
	}

	HandleShoot();
	ShootSuccess();
	return true;
}

void UShooterBehaviourBase::ResetCooldown() const
{
	CooldownHandler->ResetCooldown();
}

void UShooterBehaviourBase::EndShootSequence()
{
	if (ShotsFired <= 0 || !bIsShooting)
		return;

	bIsShooting = false;
	ShotsFired = 0;
	OnEndShootSequence.Broadcast();
}

void UShooterBehaviourBase::ResetSpread(const float ChangeRate) const
{
	SpreadHandler->ResetSpread(ChangeRate);
}

int32 UShooterBehaviourBase::RefillMagazine(const int32 Ammo, int32& OutRemainingAmmo) const
{
	UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return 0;
	
	return RelatedMagazine->Refill(Ammo, OutRemainingAmmo);
}

void UShooterBehaviourBase::RefillAllMagazine() const
{
	UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return;

	RelatedMagazine->RefillAllMagazine();
}

int32 UShooterBehaviourBase::RefillWithAmmoType(UAmmoTypeData* AmmoType, const int32 Ammo, int32& OutRemainingAmmo) const
{
	UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return 0;

	return RelatedMagazine->RefillWithAmmoType(AmmoType, Ammo, OutRemainingAmmo);
}

void UShooterBehaviourBase::AddDynamicSpread(const float AddSpread, const float ChangeRate, const float RecoveryRate) const
{
	SpreadHandler->AddDynamicSpread(AddSpread, ChangeRate, RecoveryRate);
}

void UShooterBehaviourBase::SetShootParams(const float NewDamage, const float NewFireRate, const float NewRange, const int32 NewMagSize, const int32 NewRecoilStrength, const float NewDefaultSpread)
{
	SetDamage(NewDamage);
	SetFireRate(NewFireRate);
	SetMaxRange(NewRange);
	SetMagSize(NewMagSize);
	SetRecoilStrength(NewRecoilStrength);
	InstantSetSpread(NewDefaultSpread, true);
}

void UShooterBehaviourBase::SetDamage(const float NewDamage)
{
	CurrentDamage = FMath::Clamp(NewDamage, 0.f, MAX_FLT);
}

void UShooterBehaviourBase::SetFireRate(const float NewFireRate)
{
	CurrentFireRate = FMath::Clamp(NewFireRate, 0.f, MAX_FLT);
}

void UShooterBehaviourBase::SetMaxRange(const float NewRange)
{
	CurrentMaxRange = FMath::Clamp(NewRange, 0.f, MAX_FLT);
}

void UShooterBehaviourBase::SetMagSize(const int32 NewMagSize) const
{
	UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return;

	RelatedMagazine->SetMagazineSize(NewMagSize);
}

void UShooterBehaviourBase::SetRecoilStrength(const float NewRecoilStrength)
{
	CurrentRecoilStrength = FMath::Clamp(NewRecoilStrength, 0.f, 1.f);
}

void UShooterBehaviourBase::InstantSetSpread(const float InSpread, const bool bOverrideDefault) const
{
	SpreadHandler->InstantSetSpread(InSpread, bOverrideDefault);
}

void UShooterBehaviourBase::SetSpread(const float NewSpread, const float NewSpreadChangeRate, const bool bOverrideDefault) const
{
	SpreadHandler->SetSpread(NewSpread, NewSpreadChangeRate, bOverrideDefault);
}

void UShooterBehaviourBase::SetDefaultSpread(const float NewDefaultSpread)
{
	CurrentDefaultSpread = NewDefaultSpread;
}

void UShooterBehaviourBase::SetInfiniteAmmo(const bool bEnabled)
{
	bCurrentInfiniteAmmo = bEnabled;
}

void UShooterBehaviourBase::ChangeShootType(const EShootType NewShootType)
{
	CurrentShootType = NewShootType;
}

void UShooterBehaviourBase::ChangeMagazine(const FGameplayTag& NewMagazineTag)
{
	UMagazine* OldMagazine = GetRelatedMagazine();
	UnbindMagazineEvents(OldMagazine);
	
	CurrentMagazineTag = NewMagazineTag;
	UMagazine* NewMagazine = GetRelatedMagazine();
	
	BindMagazineEvents(NewMagazine);
}

bool UShooterBehaviourBase::IsBehaviourActive() const
{
	return bIsBehaviourActive;
}

bool UShooterBehaviourBase::IsShooting() const
{
	return bIsShooting;
}

bool UShooterBehaviourBase::IsMagEmpty() const
{
	const UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return false;

	return RelatedMagazine->IsEmpty();
}

bool UShooterBehaviourBase::IsMagFull() const
{
	const UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return false;

	return RelatedMagazine->IsFull();
}

bool UShooterBehaviourBase::UsesAmmoOfType(const UAmmoTypeData* InAmmoType) const
{
	const UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return false;

	return RelatedMagazine->IsOfAmmoType(InAmmoType);
}

bool UShooterBehaviourBase::HasInfiniteAmmo() const
{
	return bCurrentInfiniteAmmo;
}

APawn* UShooterBehaviourBase::GetOwner() const
{
	return Owner;
}

float UShooterBehaviourBase::GetDamage() const
{
	return CurrentDamage;
}

float UShooterBehaviourBase::GetMaxRange() const
{
	return CurrentMaxRange;
}

float UShooterBehaviourBase::GetFireRate() const
{
	return CurrentFireRate;
}

int32 UShooterBehaviourBase::GetMagSize() const
{
	const UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return 0;

	return RelatedMagazine->GetMagazineSize();
}

float UShooterBehaviourBase::GetRecoilStrength() const
{
	return CurrentRecoilStrength;
}

float UShooterBehaviourBase::GetSpread() const
{
	return SpreadHandler->GetSpread();
}

float UShooterBehaviourBase::GetDefaultSpread() const
{
	return CurrentDefaultSpread;
}

UShootBarrel* UShooterBehaviourBase::GetShootBarrel() const
{
	return ShootBarrel;
}

EShootType UShooterBehaviourBase::GetShootType() const
{
	return CurrentShootType;
}

TEnumAsByte<ECollisionChannel> UShooterBehaviourBase::GetSightTraceChannel() const
{
	if (!IsValid(ShootData))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::GetSightTraceChannel: ShootData in %s is null."), *GetName());
		return ECollisionChannel::ECC_Visibility;
	}

	return ShootData->SightTraceChannel;
}

TSubclassOf<UDamageType> UShooterBehaviourBase::GetDamageTypeClass() const
{
	if (!IsValid(ShootData))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::GetDamageTypeClass: ShootData in %s is null."), *GetName());
		return UDamageType::StaticClass();
	}

	return ShootData->DamageTypeClass;
}

UMagazine* UShooterBehaviourBase::GetRelatedMagazine() const
{
	if (!IsValid(Shooter))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::GetRelatedMagazine: Shooter in %s is null."), *GetName());
		return nullptr;
	}

	return Shooter->GetMagazineByTag(CurrentMagazineTag);
}

int32 UShooterBehaviourBase::GetShotsFired() const
{
	return ShotsFired;
}

UCooldownHandler* UShooterBehaviourBase::GetCooldownHandler() const
{
	return CooldownHandler;
}

URecoilHandler* UShooterBehaviourBase::GetRecoilHandler() const
{
	return RecoilHandler;
}

USpreadHandler* UShooterBehaviourBase::GetSpreadHandler() const
{
	return SpreadHandler;
}

void UShooterBehaviourBase::ResetAll()
{
	ResetDamage();
	ResetFireRate();
	ResetMaxRange();
	ResetRecoilStrength();
	ResetDefaultSpread();
	ResetInfiniteAmmo();
	ResetShootType();
	ResetMagazineTag();
}

void UShooterBehaviourBase::ResetDamage()
{
	CurrentDamage = ShootData->Damage;
}

void UShooterBehaviourBase::ResetFireRate()
{
	CurrentFireRate = ShootData->FireRate;
}

void UShooterBehaviourBase::ResetMaxRange()
{
	CurrentMaxRange = ShootData->MaxRange;
}

void UShooterBehaviourBase::ResetRecoilStrength()
{
	CurrentRecoilStrength = ShootData->RecoilStrength;
}

void UShooterBehaviourBase::ResetDefaultSpread()
{
	if (!Check())
		return;

	CurrentDefaultSpread = ShootData->DefaultSpread;
}

void UShooterBehaviourBase::ResetInfiniteAmmo()
{
	bCurrentInfiniteAmmo = ShootData->bHasInfiniteAmmo;
}

void UShooterBehaviourBase::ResetShootType()
{
	CurrentShootType = ShootData->ShootType;
}

void UShooterBehaviourBase::ResetMagazineTag()
{
	ChangeMagazine(ShootData->MagazineTag);
}

UWorld* UShooterBehaviourBase::GetWorld() const
{
	if (!IsValid(Shooter))
		return Super::GetWorld();

	return Shooter->GetWorld();
}

#if WITH_EDITOR
bool UShooterBehaviourBase::ImplementsGetWorld() const
{
	// Return true so in Editor we can see WorldContexts Functions
	return true;
}
#endif

bool UShooterBehaviourBase::TryGetCameraPoints(FVector& OutStartPoint, FVector& OutEndPoint, FVector& OutHitPoint, FRotator& OutRotation, const FVector StartPointOffset) const
{
	if (!Check())
	{
		UE_LOG(LogShooter, Error, TEXT("ShooterBehaviour TryGetCameraPoints() failed check in %s."), *GetName());
		return false;
	}

	const UWorld* World = Shooter->GetWorld();

	if (!IsValid(World))
	{
		UE_LOG(LogShooter, Error, TEXT("ShooterBehaviour LineTraceFromCamera(), World is invalid in %s."), *GetName());
		return false;
	}

	const APlayerCameraManager* CameraManager = UGameplayStatics::GetPlayerCameraManager(World, 0);
	if (!IsValid(CameraManager))
	{
		UE_LOG(LogShooter, Error, TEXT("ShooterBehaviour LineTraceFromCamera(), CameraManager is null in %s."), *GetName());
		return false;
	}

	const FVector CameraLocation = CameraManager->GetCameraCacheView().Location;
	OutRotation = CameraManager->GetCameraCacheView().Rotation;

	const FVector WorldOffset = OutRotation.RotateVector(StartPointOffset);
	OutStartPoint = CameraLocation + WorldOffset;
	OutEndPoint = OutStartPoint + OutRotation.Vector() * GetMaxRange();
	OutHitPoint = OutEndPoint;

	if (FHitResult HitResult; World->LineTraceSingleByChannel(HitResult, OutStartPoint, OutEndPoint, GetSightTraceChannel()))
		OutHitPoint = HitResult.ImpactPoint;

	return true;
}

bool UShooterBehaviourBase::IsInLineOfSight(const FVector& StartPoint, const FVector& TargetPoint, const float Tolerance) const
{
	if (!Check())
	{
		UE_LOG(LogShooter, Error, TEXT("ShooterBehaviour IsInLineOfSight() failed check in %s."), *GetName());
		return false;
	}

	const UWorld* World = GetWorld();

	if (!IsValid(World))
	{
		UE_LOG(LogShooter, Error, TEXT("ShooterBehaviour IsInLineOfSight(), World is invalid in %s."), *GetName());
		return false;
	}

	if (FHitResult HitResult; World->LineTraceSingleByChannel(HitResult, StartPoint, TargetPoint, GetSightTraceChannel()))
		return HitResult.ImpactPoint.Equals(TargetPoint, Tolerance);

	return true;
}

void UShooterBehaviourBase::HandleShoot()
{
	switch (GetShootType())
	{
	case EShootType::Simultaneous:
		{
			HandleSimultaneousShoot();
			break;
		}

	case EShootType::Sequential:
		{
			HandleSequentialShoot();
			break;
		}
	}
}

void UShooterBehaviourBase::DeployShoot(UShootPoint* ShootPoint) const
{
	const FVector ShooterTargetLocation = GetShooterTargetLocation();
	const FVector DirectionToTarget = (ShooterTargetLocation - ShootPoint->GetShootPointLocation()).GetSafeNormal();
	ShootPoint->GenerateSpreadDegree(GetSpread());
	const FVector DirectionToTargetSpreaded = DirectionToTarget + FMath::VRandCone(DirectionToTarget, ShootPoint->GetSpreadRad());
	OnDeployShoot(ShootPoint, ShooterTargetLocation, DirectionToTarget, DirectionToTargetSpreaded);
}

void UShooterBehaviourBase::ShootSuccess()
{
	if (!IsValid(Shooter))
	{
		UE_LOG(LogShooter, Error, TEXT("ShootSuccess::Shooter in %s is null."), *GetName());
		return;
	}

	bIsShooting = true;
	OnShootSuccess(ShootBarrel);
	OnBehaviourShootSuccess.Broadcast(ShootBarrel, ShotsFired);
	CooldownHandler->StartCooldown();
	RecoilHandler->ApplyRecoilImpulse();
	SpreadHandler->AddDynamicSpreadWithCurve();
	ShotsFired++;
}

void UShooterBehaviourBase::ShootFail(const EShootFailReason FailReason)
{
	switch (FailReason)
	{
	case EShootFailReason::Error:
		bIsShooting = false;
		break;
	case EShootFailReason::CoolDown:
		break;
	case EShootFailReason::NoAmmo:
		bIsShooting = false;
		break;
	case EShootFailReason::Condition:
		break;
	case EShootFailReason::NoShootPoints:
		bIsShooting = false;
		break;
	case EShootFailReason::Disabled:
		bIsShooting = false;
		break;
	default: ;
	}
	
	OnShootFail(FailReason);
	OnBehaviourShootFail.Broadcast();
}

void UShooterBehaviourBase::TickBehaviour(const float DeltaTime)
{
	OnTickBehaviour(DeltaTime);
}

void UShooterBehaviourBase::OnInit_Implementation()
{
}

void UShooterBehaviourBase::OnTickBehaviour_Implementation(const float DeltaTime)
{
}

void UShooterBehaviourBase::OnEnabled_Implementation()
{
}

void UShooterBehaviourBase::OnDisabled_Implementation()
{
}

FVector UShooterBehaviourBase::GetShooterTargetLocation_Implementation() const
{
	FRotator Rotation;
	if (FVector CameraStartPoint, CameraEndPoint, CameraHitPoint; TryGetCameraPoints(CameraStartPoint, CameraEndPoint, CameraHitPoint, Rotation))
		return CameraHitPoint;

	return FVector::ZeroVector;
}

void UShooterBehaviourBase::OnDeployShoot_Implementation(UShootPoint* ShootPoint, const FVector& TargetLocation, const FVector& DirectionToTarget, const FVector& DirectionToTargetSpreaded) const
{
}

void UShooterBehaviourBase::OnShootSuccess_Implementation(const UShootBarrel* OutShootBarrel)
{
}

void UShooterBehaviourBase::OnShootFail_Implementation(const EShootFailReason FailReason)
{
}

bool UShooterBehaviourBase::OnShootCondition_Implementation(UShootBarrel* OutShootBarrel) const
{
	return true;
}

void UShooterBehaviourBase::OnMagazineAmmoChange_Implementation(int32 CurrentAmmo, int32 MagSize)
{
}

void UShooterBehaviourBase::OnMagazineRefill_Implementation(int32 CurrentAmmo, int32 RefilledAmmo, int32 RemainingAmmo)
{
}

void UShooterBehaviourBase::OnMagazineFull_Implementation()
{
}

void UShooterBehaviourBase::OnMagazineEmpty_Implementation()
{
}

bool UShooterBehaviourBase::Check() const
{
	if (!IsValid(Shooter))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::Check: ShooterBehaviour %s has null Shooter."), *GetName());
		return false;
	}

	if (!IsValid(ShootData))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::Check: ShooterBehaviour %s has null ShootData."), *GetName());
		return false;
	}

	if (!IsValid(ShootBarrel))
	{
		UE_LOG(LogShooter, Error, TEXT("UShooterBehaviourBase::Check: ShooterBehaviour %s has not setup a ShootBarrel."), *GetName());
		return false;
	}

	return IsValid(CooldownHandler) && IsValid(RecoilHandler) && IsValid(SpreadHandler);
}

void UShooterBehaviourBase::HandleSimultaneousShoot()
{
	for (UShootPoint* ShootPoint : ShootPoints)
	{
		if (!IsValid(ShootPoint))
		{
			UE_LOG(LogShooter, Error, TEXT("HandleSimultaneousShoot(), Invalid ShootPoint in %s."), *GetName());
			continue;
		}

		DeployShoot(ShootPoint);
	}
}

void UShooterBehaviourBase::HandleSequentialShoot()
{
	NextShootPointIndex();

	if (!IsValid(ShootPoints[CurrentShootPointIndex]))
	{
		UE_LOG(LogShooter, Error, TEXT("HandleSequentialShoot(), Invalid ShootPoint in %s."), *GetName());
		return;
	}

	DeployShoot(ShootPoints[CurrentShootPointIndex]);
}

int32 UShooterBehaviourBase::NextShootPointIndex()
{
	if (ShootPoints.Num() == 0)
	{
		UE_LOG(LogShooter, Error, TEXT("ShootPoints in %s is empty."), *GetName());
		return -1;
	}

	const int32 ShootPointIndex = (CurrentShootPointIndex + 1) % ShootPoints.Num();
	CurrentShootPointIndex = ShootPointIndex;
	return CurrentShootPointIndex;
}

bool UShooterBehaviourBase::TryConsumeAmmoForShoot() const
{
	if (HasInfiniteAmmo())
		return true;

	if (!Check())
		return false;

	UMagazine* RelatedMagazine = GetRelatedMagazine();
	if (!IsValid(RelatedMagazine))
		return false;

	const int32 AmmoPerShot = ShootData->AmmoToConsumePerShot;
	return RelatedMagazine->TryConsumeAmmo(AmmoPerShot);
}

void UShooterBehaviourBase::BindMagazineEvents(UMagazine* Magazine)
{
	if (!IsValid(Magazine))
		return;
	
	Magazine->OnAmmoChanged.AddDynamic(this, &UShooterBehaviourBase::OnMagazineAmmoChange);
	Magazine->OnMagazineRefilled.AddDynamic(this, &UShooterBehaviourBase::OnMagazineRefill);
	Magazine->OnMagazineFull.AddDynamic(this, &UShooterBehaviourBase::OnMagazineFull);
	Magazine->OnMagazineEmpty.AddDynamic(this, &UShooterBehaviourBase::OnMagazineEmpty);
}

void UShooterBehaviourBase::UnbindMagazineEvents(UMagazine* Magazine)
{
	if (!IsValid(Magazine))
		return;

	Magazine->OnAmmoChanged.RemoveDynamic(this, &UShooterBehaviourBase::OnMagazineAmmoChange);
	Magazine->OnMagazineRefilled.RemoveDynamic(this, &UShooterBehaviourBase::OnMagazineRefill);
	Magazine->OnMagazineFull.RemoveDynamic(this, &UShooterBehaviourBase::OnMagazineFull);
	Magazine->OnMagazineEmpty.RemoveDynamic(this, &UShooterBehaviourBase::OnMagazineEmpty);
}

// Copyright VUEDK, Inc. All Rights Reserved.

#include "HitBoxManager.h"
#include "HitDetectionSystem.h"
#include "Interfaces/HitZone.h"
#include "Kismet/GameplayStatics.h"

UHitBoxManager::UHitBoxManager(): HitBoxBonesData(nullptr),
                                  HitDetectionSubsystem(nullptr)
{
	PrimaryComponentTick.bCanEverTick = true;
}

bool UHitBoxManager::HasHitBoxPerBones() const
{
	return bUseHitBoxPerBones && HitBoxBonesData != nullptr;
}

void UHitBoxManager::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bHasRecentlyReceivedDamage)
	{
		Timer += DeltaTime;

		if (Timer >= ReceiveDamageCooldown)
			EndReceiveDamageCooldown();
	}
}

void UHitBoxManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void UHitBoxManager::BeginPlay()
{
	Super::BeginPlay();

	AActor* Owner = GetOwner();

	if (!IsValid(Owner))
	{
		UE_LOG(LogHitDetectionSystem, Warning, TEXT("HitBoxManager: Owner is null"));
		return;
	}

	HitDetectionSubsystem = UGameplayStatics::GetPlayerController(Owner->GetWorld(), 0)->GetLocalPlayer()->GetSubsystem<UHitDetectionSubsystem>();

	if (!IsValid(HitDetectionSubsystem))
	{
		UE_LOG(LogHitDetectionSystem, Warning, TEXT("HitBoxManager: HitDetectionSubsystem is null."));
		return;
	}

	Owner->OnTakeAnyDamage.AddDynamic(this, &UHitBoxManager::OnTakeAnyDamage);
	Owner->OnTakePointDamage.AddDynamic(this, &UHitBoxManager::OnTakePointDamage);
	Owner->OnTakeRadialDamage.AddDynamic(this, &UHitBoxManager::OnTakeRadialDamage);
	RegisterHitZones();
}

bool UHitBoxManager::CanReceiveDamage() const
{
	return !bHasRecentlyReceivedDamage;
}

float UHitBoxManager::ProcessGenericPointDamage(AActor* DamagedActor, float& Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser) const
{
	for (UDamageProcessor* Processor : GenericDamageProcessors)
	{
		if (!IsValid(Processor))
			continue;

		Damage = Processor->ProcessAnyDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
		Damage = Processor->ProcessPointDamage(DamagedActor, Damage, InstigatedBy, HitLocation, FHitComponent, BoneName, ShotFromDirection, DamageType, DamageCauser);
	}

	return Damage;
}

float UHitBoxManager::ProcessGenericRadialDamage(AActor* DamagedActor, float& Damage, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, AActor* DamageCauser) const
{
	for (UDamageProcessor* Processor : GenericDamageProcessors)
	{
		if (!IsValid(Processor))
			continue;

		Damage = Processor->ProcessAnyDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
		Damage = Processor->ProcessRadialDamage(DamagedActor, Damage, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser);
	}

	return Damage;
}

float UHitBoxManager::ProcessPointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser) const
{
	if (!HitBoxBonesData->DamageProcessorsPerBone.Contains(BoneName))
		return Damage;

	const FBoneDamageProcessorData& ProcessorData = HitBoxBonesData->DamageProcessorsPerBone[BoneName];

	if (ProcessorData.DamageProcessors.IsEmpty())
		return Damage;

	for (const TSoftClassPtr<class UDamageProcessor> ProcessorClassPtr : ProcessorData.DamageProcessors)
	{
		TSubclassOf<UDamageProcessor> ProcessorClass = ProcessorClassPtr.Get();

		if (!IsValid(ProcessorClass))
			continue;

		UDamageProcessor* Processor = NewObject<UDamageProcessor>(GetOwner(), ProcessorClass);

		if (!IsValid(Processor))
			continue;

		Damage = Processor->ProcessAnyDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
		Damage = Processor->ProcessPointDamage(DamagedActor, Damage, InstigatedBy, HitLocation, FHitComponent, BoneName, ShotFromDirection, DamageType, DamageCauser);
	}

	return Damage * ProcessorData.DamageMultiplier;
}

float UHitBoxManager::ProcessRadialDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, AActor* DamageCauser) const
{
	if (!HitBoxBonesData->DamageProcessorsPerBone.Contains(HitInfo.BoneName))
		return Damage;

	const FBoneDamageProcessorData& ProcessorData = HitBoxBonesData->DamageProcessorsPerBone[HitInfo.BoneName];

	if (ProcessorData.DamageProcessors.IsEmpty())
		return Damage;

	for (const TSoftClassPtr<class UDamageProcessor> ProcessorClassPtr : ProcessorData.DamageProcessors)
	{
		TSubclassOf<UDamageProcessor> ProcessorClass = ProcessorClassPtr.Get();

		if (!IsValid(ProcessorClass))
			continue;

		UDamageProcessor* Processor = NewObject<UDamageProcessor>(GetOwner(), ProcessorClass);

		if (!IsValid(Processor))
			continue;

		Damage = Processor->ProcessAnyDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
		Damage = Processor->ProcessRadialDamage(DamagedActor, Damage, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser);
	}

	return Damage * ProcessorData.DamageMultiplier;
}

void UHitBoxManager::RegisterHitZones()
{
	for (const auto HitZone : GetOwner()->GetComponentsByInterface(UHitZone::StaticClass()))
	{
		UHitZoneHandler* Handler = IHitZone::Execute_GetHitZoneHandler(HitZone);
		if (!IsValid(Handler))
			continue;

		Handler->OnZoneHitPointDamage.AddDynamic(this, &UHitBoxManager::OnZoneHitPointDamage);
		Handler->OnZoneHitRadialDamage.AddDynamic(this, &UHitBoxManager::OnZoneHitRadialDamage);
	}
}

void UHitBoxManager::StartReceiveDamageCooldown()
{
	if (bHasRecentlyReceivedDamage || ReceiveDamageCooldown <= 0.0f)
		return;

	bHasRecentlyReceivedDamage = true;
}

void UHitBoxManager::EndReceiveDamageCooldown()
{
	bHasRecentlyReceivedDamage = false;
	Timer = 0.0f;
	RecentlyDamageInstigators.Empty();
}

void UHitBoxManager::OnTakeAnyDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!CanReceiveDamage())
		return;

	RecentlyDamageInstigators.Add(InstigatedBy);
	StartReceiveDamageCooldown();
}

void UHitBoxManager::OnTakePointDamage(AActor* DamagedActor, float Damage, class AController* InstigatedBy, FVector HitLocation, class UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const class UDamageType* DamageType, AActor* DamageCauser)
{
	if (!CanReceiveDamage() || !HasHitBoxPerBones())
		return;

	float TotalDamage = ProcessPointDamage(DamagedActor, Damage, InstigatedBy, HitLocation, FHitComponent, BoneName, ShotFromDirection, DamageType, DamageCauser);
	TotalDamage = ProcessGenericPointDamage(DamagedActor, TotalDamage, InstigatedBy, HitLocation, FHitComponent, BoneName, ShotFromDirection, DamageType, DamageCauser);
	OnHitBoxAnyDamage.Broadcast(Damage, TotalDamage, DamageType, InstigatedBy, DamageCauser);
	OnHitBoxPointDamage.Broadcast(Damage, TotalDamage, HitLocation, ShotFromDirection, BoneName, DamageType, InstigatedBy, DamageCauser);

	if (IsValid(HitDetectionSubsystem))
	{
		HitDetectionSubsystem->CallForHit(
			InstigatedBy,
			HitLocation,
			ShotFromDirection,
			BoneName,
			TotalDamage / Damage,
			TotalDamage,
			Damage
		);
	}
}

void UHitBoxManager::OnTakeRadialDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!CanReceiveDamage() || !HasHitBoxPerBones())
		return;

	float TotalDamage = ProcessRadialDamage(DamagedActor, Damage, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser);
	TotalDamage = ProcessGenericRadialDamage(DamagedActor, TotalDamage, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser);
	OnHitBoxAnyDamage.Broadcast(Damage, TotalDamage, DamageType, InstigatedBy, DamageCauser);
	OnHitBoxRadialDamage.Broadcast(Damage, TotalDamage, DamageType, Origin, HitInfo, InstigatedBy);

	if (IsValid(HitDetectionSubsystem))
	{
		HitDetectionSubsystem->CallForHit(
			InstigatedBy,
			HitInfo.ImpactPoint,
			HitInfo.ImpactNormal,
			HitInfo.BoneName,
			TotalDamage / Damage,
			TotalDamage,
			Damage
		);
	}
}

void UHitBoxManager::OnZoneHitPointDamage(float BaseDamage, float TotalDamage, FVector HitLocation, FVector ShotFromDirection, FName BoneName, const class UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (!CanReceiveDamage())
		return;

	TotalDamage = ProcessGenericPointDamage(GetOwner(), TotalDamage, InstigatedBy, HitLocation, nullptr, BoneName, ShotFromDirection, DamageType, DamageCauser);
	OnHitBoxAnyDamage.Broadcast(BaseDamage, TotalDamage, DamageType, InstigatedBy, DamageCauser);
	OnHitBoxPointDamage.Broadcast(BaseDamage, TotalDamage, HitLocation, ShotFromDirection, BoneName, DamageType, InstigatedBy, DamageCauser);

	if (IsValid(HitDetectionSubsystem))
	{
		HitDetectionSubsystem->CallForHit(
			InstigatedBy,
			HitLocation,
			ShotFromDirection,
			BoneName,
			TotalDamage / BaseDamage,
			TotalDamage,
			BaseDamage
		);
	}
}

void UHitBoxManager::OnZoneHitRadialDamage(float BaseDamage, float TotalDamage, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser)
{
	if (!CanReceiveDamage())
		return;

	TotalDamage = ProcessGenericRadialDamage(GetOwner(), TotalDamage, DamageType, Origin, HitInfo, InstigatedBy, DamageCauser);
	OnHitBoxAnyDamage.Broadcast(BaseDamage, TotalDamage, DamageType, InstigatedBy, DamageCauser);
	OnHitBoxRadialDamage.Broadcast(BaseDamage, TotalDamage, DamageType, Origin, HitInfo, InstigatedBy);

	if (IsValid(HitDetectionSubsystem))
	{
		HitDetectionSubsystem->CallForHit(
			InstigatedBy,
			HitInfo.ImpactPoint,
			HitInfo.ImpactNormal,
			HitInfo.BoneName,
			TotalDamage / BaseDamage,
			TotalDamage,
			BaseDamage
		);
	}
}

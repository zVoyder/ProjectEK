// Copyright VUEDK, Inc. All Rights Reserved.

#include "Shooter/Behaviours/ShootModes/Base/ShootMode.h"
#include "Shooter/Behaviours/ShooterBehaviourBase.h"

void UShootMode::Init(UShooterBehaviourBase* InBehaviour)
{
	Behaviour = InBehaviour;
}

void UShootMode::Tick(float DeltaTime)
{
	OnProcessingRequest(DeltaTime);
}

bool UShootMode::IsTickable() const
{
	return IsProcessingRequest();
}

TStatId UShootMode::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UShootMode, STATGROUP_Tickables);
}

void UShootMode::RequestShoot(const EShootType ShootType)
{
	bIsProcessingRequest = true;
	OnRequestShoot(ShootType);
}

bool UShootMode::IsProcessingRequest() const
{
	return bIsProcessingRequest;
}

void UShootMode::DeployShoot() const
{
	UShooterBehaviourBase* RelatedBehaviour = GetRelatedBehaviour();
	if (!IsValid(RelatedBehaviour))
		return;

	RelatedBehaviour->DeployShootOfType();
}

UShooterBehaviourBase* UShootMode::GetRelatedBehaviour() const
{
	return Behaviour;
}

void UShootMode::FinishShootRequest(const bool bDeployShoot, const bool bSuccess)
{
	bIsProcessingRequest = false;
	OnShootRequestHandled.Broadcast(this, bDeployShoot, bSuccess);
}

void UShootMode::OnRequestShoot_Implementation(EShootType ShootType)
{
	FinishShootRequest();
}

void UShootMode::OnProcessingRequest_Implementation(const float DeltaTime)
{
}

bool UShootMode::Check() const
{
	return IsValid(Behaviour);
}

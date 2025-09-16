// Copyright VUEDK, Inc. All Rights Reserved.

#include "Components/Savers/Behaviours/ActorStateSaveBehaviour.h"
#include "Data/SaveData/ActorStateSaveData.h"

USaveDataBase* UActorStateSaveBehaviour::CreateSaveDataInstance_Implementation()
{
	return NewObject<UActorStateSaveData>(this);
}

bool UActorStateSaveBehaviour::Save_Implementation(USaveDataBase* SaveData)
{
	UActorStateSaveData* TransformSaveData = Cast<UActorStateSaveData>(SaveData);
	if (!IsValid(TransformSaveData))
	{
		UE_LOG(LogTemp, Warning, TEXT("UTransformSaveBehaviour::Save_Implementation: SaveData is not of type UTransformSaveData."));
		return false;
	}

	const AActor* Owner = GetOwnerActor();
	if (!IsValid(Owner))
	{
		UE_LOG(LogTemp, Warning, TEXT("UTransformSaveBehaviour::Save_Implementation: Owner is not valid."));
		return false;
	}

	if (bSaveLocation)
		TransformSaveData->SaveLocation(Owner->GetActorLocation());

	if (bSaveRotation)
		TransformSaveData->SaveRotation(Owner->GetActorRotation());

	if (bSaveScale)
		TransformSaveData->SaveScale(Owner->GetActorScale3D());

	UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Owner->GetRootComponent());
	if (!IsValid(PrimComp) || !PrimComp->IsSimulatingPhysics())
		return true;

	if (bSaveLinearVelocity)
		TransformSaveData->SaveLinearVelocity(PrimComp->GetPhysicsLinearVelocity());

	if (bSaveAngularVelocity)
		TransformSaveData->SaveAngularVelocity(PrimComp->GetPhysicsAngularVelocityInDegrees());

	if (bSaveMass)
		TransformSaveData->SaveMass(PrimComp->GetMass());

	return true;
}

bool UActorStateSaveBehaviour::Load_Implementation(USaveDataBase* SaveData)
{
	const UActorStateSaveData* TransformSaveData = Cast<UActorStateSaveData>(SaveData);

	if (!IsValid(TransformSaveData))
	{
		UE_LOG(LogTemp, Warning, TEXT("UTransformSaveBehaviour::Load_Implementation: SavedData is not of type UTransformSaveData."));
		return false;
	}

	AActor* Owner = GetOwnerActor();
	if (!IsValid(Owner))
	{
		UE_LOG(LogTemp, Warning, TEXT("UTransformSaveBehaviour::Load_Implementation: Owner is not valid."));
		return false;
	}

	if (bSaveLocation && TransformSaveData->HasLocation())
		Owner->SetActorLocation(TransformSaveData->GetLocation());

	if (bSaveRotation && TransformSaveData->HasRotation())
		Owner->SetActorRotation(TransformSaveData->GetRotation());

	if (bSaveScale && TransformSaveData->HasScale())
		Owner->SetActorScale3D(TransformSaveData->GetScale());

	UPrimitiveComponent* PrimComp = Cast<UPrimitiveComponent>(Owner->GetRootComponent());
	if (!IsValid(PrimComp) || !PrimComp->IsSimulatingPhysics())
		return true;

	if (bSaveLinearVelocity && TransformSaveData->HasLinearVelocity())
		PrimComp->SetPhysicsLinearVelocity(TransformSaveData->GetLinearVelocity());

	if (bSaveAngularVelocity && TransformSaveData->HasAngularVelocity())
		PrimComp->SetPhysicsAngularVelocityInDegrees(TransformSaveData->GetAngularVelocity());

	if (bSaveMass && TransformSaveData->HasMass())
		PrimComp->SetMassOverrideInKg(NAME_None, TransformSaveData->GetMass(), true);

	return true;
}

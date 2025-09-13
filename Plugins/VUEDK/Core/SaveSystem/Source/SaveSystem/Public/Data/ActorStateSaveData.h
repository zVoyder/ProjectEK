// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "SaveData.h"
#include "ActorStateSaveData.generated.h"

namespace ActorSaveKeys
{
	static const FName Location = "Loc";
	static const FName Rotation = "Rot";
	static const FName Scale    = "Scale";
	static const FName LinearVelocity = "LinVel";
	static const FName AngularVelocity = "AngVel";
	static const FName Mass = "Mass";
}

UCLASS()
class SAVESYSTEM_API UActorStateSaveData : public USaveData
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	TMap<FName, FVector> SavedVectors;
	UPROPERTY(SaveGame)
	TMap<FName, float> SavedValues;

public:
	void SaveLocation(const FVector& InLocation)
	{
		SavedVectors.Add(ActorSaveKeys::Location, InLocation);
	}

	void SaveRotation(const FRotator& InRotation)
	{
		SavedVectors.Add(ActorSaveKeys::Rotation, InRotation.Vector());
	}

	void SaveScale(const FVector& InScale)
	{
		SavedVectors.Add(ActorSaveKeys::Scale, InScale);
	}

	void SaveLinearVelocity(const FVector& InVelocity)
	{
		SavedVectors.Add(ActorSaveKeys::LinearVelocity, InVelocity);
	}

	void SaveAngularVelocity(const FVector& InVelocity)
	{
		SavedVectors.Add(ActorSaveKeys::AngularVelocity, InVelocity);
	}

	void SaveMass(float InMass)
	{
		SavedValues.Add(ActorSaveKeys::Mass, InMass);
	}

	FVector GetLocation() const
	{
		if (const FVector* Loc = SavedVectors.Find(ActorSaveKeys::Location))
			return *Loc;
		
		return FVector::ZeroVector;
	}

	FRotator GetRotation() const
	{
		if (const FVector* Rot = SavedVectors.Find(ActorSaveKeys::Rotation))
			return Rot->Rotation();
		
		return FRotator::ZeroRotator;
	}

	FVector GetScale() const
	{
		if (const FVector* Scale = SavedVectors.Find(ActorSaveKeys::Scale))
			return *Scale;
		
		return FVector::OneVector;
	}

	FVector GetLinearVelocity() const
	{
		if (const FVector* Vel = SavedVectors.Find(ActorSaveKeys::LinearVelocity))
			return *Vel;
		
		return FVector::ZeroVector;
	}

	FVector GetAngularVelocity() const
	{
		if (const FVector* Vel = SavedVectors.Find(ActorSaveKeys::AngularVelocity))
			return *Vel;
		
		return FVector::ZeroVector;
	}

	float GetMass() const
	{
		if (const float* Mass = SavedValues.Find(ActorSaveKeys::Mass))
			return *Mass;
		
		return 0.f;
	}

	bool HasLocation() const
	{
		return SavedVectors.Contains(ActorSaveKeys::Location);
	}
	
	bool HasRotation() const
	{
		return SavedVectors.Contains(ActorSaveKeys::Rotation);
	}
	
	bool HasScale() const
	{
		return SavedVectors.Contains(ActorSaveKeys::Scale);
	}

	bool HasLinearVelocity() const
	{
		return SavedVectors.Contains(ActorSaveKeys::LinearVelocity);
	}

	bool HasAngularVelocity() const
	{
		return SavedVectors.Contains(ActorSaveKeys::AngularVelocity);
	}

	bool HasMass() const
	{
		return SavedValues.Contains(ActorSaveKeys::Mass);
	}
};

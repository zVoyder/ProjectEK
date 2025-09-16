// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Data/SaveData/SaveDataBase.h"
#include "Interfaces/Saveable.h"
#include "UObject/Object.h"
#include "SaveBehaviourBase.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType, EditInlineNew)
class SAVESYSTEM_API USaveBehaviourBase : public UObject, public ISaveable
{
	GENERATED_BODY()

	friend class USaver;

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "If true, the SaveData instance will not be created every time a save/load is performed, but will be preserved between saves/loads."))
	bool bPreserveSaveDataInstance = false;

private:
	UPROPERTY()
	USaveDataBase* CachedSaveData = nullptr;
	UPROPERTY()
	USaver* CachedOwnerSaver = nullptr;
	FName SaveBehaviourID;

public:
	virtual void BeginPlay();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "BeginPlay"))
	void ReceiveBeginPlay();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "EndPlay"))
	void ReceiveEndPlay(const EEndPlayReason::Type EndPlayReason);

	virtual USaveDataBase* CreateSaveDataInstanceNative();
	
	virtual USaveDataBase* CreateSaveDataInstance_Implementation() override;

	virtual void PrepareForSerializationNative(USaveDataBase* SaveData);

	virtual void PrepareForSerialization_Implementation(USaveDataBase* SaveData) override;

	virtual void PrepareForDeserializationNative(USaveDataBase* SaveData);
	
	virtual void PrepareForDeserialization_Implementation(USaveDataBase* SaveData) override;

	virtual bool Save_Implementation(USaveDataBase* SaveData) override;

	virtual bool Load_Implementation(USaveDataBase* SaveData) override;

	UFUNCTION(BlueprintPure)
	USaveDataBase* GetSaveDataInstance();

	UFUNCTION(BlueprintCallable)
	void SetSaveBehaviourID(const FName NewID);
	
	UFUNCTION(BlueprintPure)
	FName GetSaveBehaviourID() const;

#if WITH_ENGINE
	virtual UWorld* GetWorld() const override;

#if WITH_EDITOR
	virtual bool ImplementsGetWorld() const override;
#endif // WITH_EDITOR
#endif // WITH_ENGINE

protected:
	UFUNCTION(BlueprintPure)
	USaver* GetOwnerSaver();
	
	UFUNCTION(BlueprintPure)
	AActor* GetOwnerActor();

private:
	void CacheSaveDataInstanceIfNeeded();
};

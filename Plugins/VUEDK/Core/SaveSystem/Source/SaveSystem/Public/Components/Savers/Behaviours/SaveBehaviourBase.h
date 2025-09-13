// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
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
	USaveData* CachedSaveData = nullptr;
	UPROPERTY()
	USaver* CachedOwnerSaver = nullptr;

public:
	virtual void BeginPlay();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "BeginPlay"))
	void ReceiveBeginPlay();

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "EndPlay"))
	void ReceiveEndPlay(const EEndPlayReason::Type EndPlayReason);
	
	virtual USaveData* CreateSaveDataInstance_Implementation() override;

	virtual bool Save_Implementation(USaveData* SaveData) override;

	virtual bool Load_Implementation(USaveData* SaveData) override;

	UFUNCTION(BlueprintPure)
	USaveData* GetSaveDataInstance();

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
	FName GetSaveBehaviourID() const;
	
	void CacheSaveDataInstanceIfNeeded();
};

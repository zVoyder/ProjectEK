// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Data/WeaponData.h"
#include "GameFramework/Actor.h"
#include "Montages/Data/WeaponMontageData.h"
#include "WeaponBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnWeaponAttackSuccess
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnWeaponAttackFail
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnEndWeaponAttack
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnWeaponEquipped
);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(
	FOnWeaponUnequipped
);

UCLASS(Abstract, Blueprintable, BlueprintType)
class WEAPONSYSTEM_API AWeaponBase : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnWeaponAttackSuccess OnWeaponAttackSuccessEvent;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnWeaponAttackFail OnWeaponAttackFailEvent;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnEndWeaponAttack OnEndWeaponAttackEvent;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnWeaponEquipped OnWeaponEquippedEvent;
	UPROPERTY(BlueprintAssignable, Category = Events)
	FOnWeaponUnequipped OnWeaponUnequippedEvent;

protected:
	// -- Data --
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Data")
	FWeaponData WeaponData;

	// -- Montages --
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Montages")
	bool bUseTag;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Weapon|Montages", meta = (ToolTip = "Used to find the anim instance of the owner's mesh if it is not a character"))
	FName AnimInstanceMeshTag = TEXT("AnimInstanceMesh"); // Use a tag to be more flexible

	// -- Mesh --
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USceneComponent* WeaponMeshRoot;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	USkeletalMeshComponent* WeaponMesh;

private:
	UPROPERTY()
	UObject* Payload;
	UPROPERTY()
	TMap<UAnimMontage*, FWeaponMontageData> PlayingMontages;
	bool bIsEquipped = false;
	bool bIsWeaponAttacking = false;
	UPROPERTY()
	UAnimInstance* OwnerAnimInstance;

#if WITH_EDITORONLY_DATA
	UPROPERTY()
	UArrowComponent* ForwardArrowComponent;
	UPROPERTY()
	UArrowComponent* RightArrowComponent;
	UPROPERTY()
	UArrowComponent* UpArrowComponent;
#endif

public:
	AWeaponBase();

	UFUNCTION(BlueprintCallable)
	virtual void Init(APawn* InOwner, UObject* InPayload = nullptr);

	/**
	 * @brief Set the weapon in the equipped state.
	 */
	UFUNCTION(BlueprintCallable)
	void Equip();

	/**
	 * @brief Set the weapon in the unequipped state.
	 */
	UFUNCTION(BlueprintCallable)
	void Unequip();

	UFUNCTION(BlueprintCallable)
	bool WeaponAttack();

	UFUNCTION(BlueprintCallable)
	void EndWeaponAttack();

	UFUNCTION(BlueprintCallable)
	void SetPayload(UObject* InPayload);

	UFUNCTION(BlueprintCallable)
	virtual void SetWeaponDamage(const float NewDamage);

	UFUNCTION(BlueprintPure)
	float GetWeaponDamage() const;

	UFUNCTION(BlueprintPure)
	UObject* GetPayload() const;

	UFUNCTION(BlueprintPure)
	bool IsEquipped() const;

	UFUNCTION(BlueprintPure)
	virtual bool IsWeaponAttacking() const;

	UFUNCTION(BlueprintPure)
	FWeaponData GetWeaponData() const;

	UFUNCTION(BlueprintPure)
	UAnimInstance* GetOwnerAnimInstance() const;

	UFUNCTION(BlueprintPure)
	UAnimInstance* GetWeaponAnimInstance() const;

	UFUNCTION(BlueprintPure)
	bool IsPlayingWeaponMontage(const FWeaponMontageData& WeaponMontageData) const;

	UFUNCTION(BlueprintCallable)
	void StartWeaponMontage(FWeaponMontageData WeaponMontageData, float WeaponPlayRate, float CharacterPlayRate);

	UFUNCTION(BlueprintCallable)
	void InterruptWeaponMontage(const FWeaponMontageData& WeaponMontageData, const float CharacterBlendOutTime, const float WeaponBlendOutTime);

protected:
	UFUNCTION(BlueprintNativeEvent)
	bool DeployWeaponAttack();

	UFUNCTION(BlueprintNativeEvent)
	void OnEndWeaponAttack();

	UFUNCTION(BlueprintNativeEvent)
	void OnWeaponAttackSuccess();

	UFUNCTION(BlueprintNativeEvent)
	void OnWeaponAttackFail();

	UFUNCTION(BlueprintNativeEvent)
	void OnWeaponEquipped();

	UFUNCTION(BlueprintNativeEvent)
	void OnWeaponUnequipped();

private:
	void SetOwnerAnimInstance();
	
	void AddPlayingMontage(UAnimMontage* Montage, const FWeaponMontageData& WeaponMontageData);

	void RemovePlayingMontage(const UAnimMontage* Montage);

	void SetWeaponMetaData(UAnimMontage* Montage);

	UFUNCTION()
	void OnMontageEnded(UAnimMontage* AnimMontage, bool bInterrupted);
};

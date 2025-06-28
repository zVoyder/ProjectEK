// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/PlayerStates/GameplayPlayerState.h"
#include "RPGInventory/Utility/RPGInventoriesUtility.h"

AGameplayPlayerState::AGameplayPlayerState()
{
	Inventory = CreateDefaultSubobject<URPGInventory>(TEXT("Inventory"));
	Equipment = CreateDefaultSubobject<UEquipment>(TEXT("Equipment"));
	ResourceAttributesManager = CreateDefaultSubobject<UResourceAttributesManager>(TEXT("ResourceAttributesManager"));
}

void AGameplayPlayerState::BeginPlay()
{
	Inventory->LinkEquipment(Equipment);
	InitStats();
	URPGInventoriesUtility::SetTargetEquipmentForCompare(Equipment);
	Super::BeginPlay();
}

void AGameplayPlayerState::InitStats()
{
	UCharacterStats* Stats = GetCharacterStats();
	if (!IsValid(Stats))
	{
		UE_LOG(LogTemp, Warning, TEXT("AGameplayPlayerState::InitStats: CharacterStats is not valid"));
		return;
	}

	Stats->Init(Equipment);
}

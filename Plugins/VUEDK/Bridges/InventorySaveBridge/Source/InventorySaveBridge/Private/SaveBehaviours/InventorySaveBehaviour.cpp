// Copyright VUEDK, Inc. All Rights Reserved.

#include "SaveBehaviours/InventorySaveBehaviour.h"
#include "InventorySaveBridge.h"
#include "Factories/ISFactory.h"
#include "Utility/ISInventoriesUtility.h"

void UInventorySaveBehaviour::BeginPlay()
{
	const AActor* Actor = GetOwnerActor();
	if (!IsValid(Actor))
		return;

	Inventory = Cast<UInventoryBase>(Actor->FindComponentByClass<UInventoryBase>());
	Super::BeginPlay();
}

USaveDataBase* UInventorySaveBehaviour::CreateSaveDataInstance_Implementation()
{
	if (!Check())
		return nullptr;

	UInventoryBaseSaveData* InventorySaveData = NewObject<UInventoryBaseSaveData>(this, InventorySaveDataClass);
	return InventorySaveData;
}

void UInventorySaveBehaviour::PrepareForDeserialization_Implementation(USaveDataBase* SaveData)
{
	if (!Check())
		return;

	UInventoryBaseSaveData* InventorySaveData = Cast<UInventoryBaseSaveData>(SaveData);
	if (!IsValid(InventorySaveData))
	{
		UE_LOG(LogInventorySaveBridge, Warning, TEXT("UInventorySaveBehaviour::PrepareForDeserialization_Implementation: SaveData is not of type UInventoryBaseSaveData."));
		return;
	}
	
	InventorySaveData->SavedItemsData.Empty();
	for (int i = 0; i < InventorySaveData->ItemsCount; i++)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Preparing Item Save Data %d"), i));
		UItemBaseSaveData* ItemSaveData = InventorySaveData->CreateItemSaveData(this);
		InventorySaveData->SavedItemsData.Add(ItemSaveData);
	}
}

bool UInventorySaveBehaviour::Save_Implementation(USaveDataBase* SaveData)
{
	if (!Check())
		return false;

	UInventoryBaseSaveData* InventorySaveData = Cast<UInventoryBaseSaveData>(SaveData);
	if (!IsValid(InventorySaveData))
	{
		UE_LOG(LogInventorySaveBridge, Warning, TEXT("UInventorySaveBehaviour::Save_Implementation: SaveData is not of type UInventoryBaseSaveData."));
		return false;
	}

	InventorySaveData->SavedItemsData.Empty();
	for (UItemBase* Item : Inventory->GetItems())
	{
		if (!IsValid(Item))
			continue;

		UItemBaseSaveData* ItemSaveData = InventorySaveData->CreateItemSaveData(this);
		InventorySaveData->SaveItem(Item, ItemSaveData);
		InventorySaveData->PostSaveItem(Item, ItemSaveData);
		InventorySaveData->SavedItemsData.Add(ItemSaveData);
	}
	
	InventorySaveData->SavedMaxWeight = Inventory->WeightMaxCapacity;
	InventorySaveData->ItemsCount = Inventory->GetItems().Num();
	return true;
}

bool UInventorySaveBehaviour::Load_Implementation(USaveDataBase* SaveData)
{
	if (!Check())
		return false;

	Inventory->ClearInventory();
	UInventoryBaseSaveData* InventorySaveData = Cast<UInventoryBaseSaveData>(SaveData);
	if (!IsValid(InventorySaveData))
	{
		UE_LOG(LogInventorySaveBridge, Warning, TEXT("UInventorySaveBehaviour::Save_Implementation: SaveData is not of type UInventoryBaseSaveData."));
		return false;
	}

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Loading %d Items"), InventorySaveData->SavedItemsData.Num()));

	for (UItemBaseSaveData* ItemSaveData : InventorySaveData->SavedItemsData)
	{
		if (!IsValid(ItemSaveData))
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Invalid Item Save Data"));
			continue;
		}
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Loading Item with DataID: %s"), *ItemSaveData->SavedItemDataID.ToString()));

		UItemDataBase* ItemData = UISInventoriesUtility::GetItemDataFromRegistry(ItemSaveData->SavedItemDataID);
		if (!IsValid(ItemData))
			continue;
		
		UItemBase* Item = UISFactory::CreateItem(this, ItemData);
		if (!IsValid(Item))
			continue;

		InventorySaveData->LoadItem(Item, ItemSaveData);
		if (Item->GetEquipSlotIndex() != -1)
		{
			UEquipment* Equipment = Inventory->GetEquipment();
			if (!IsValid(Equipment))
				return Inventory->TryAddItem(Item);

			return Equipment->TryEquipItem(Item, Item->GetEquipSlotKey(), Item->GetEquipSlotIndex());
		}

		Inventory->TryAddItem(Item);
		InventorySaveData->PostLoadItem(Item, ItemSaveData);
	}

	Inventory->WeightMaxCapacity = InventorySaveData->SavedMaxWeight;
	return true;
}

bool UInventorySaveBehaviour::Check() const
{
	return IsValid(Inventory);
}

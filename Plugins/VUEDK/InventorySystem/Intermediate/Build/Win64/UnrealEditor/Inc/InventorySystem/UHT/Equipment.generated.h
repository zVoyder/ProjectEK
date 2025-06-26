// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentSystem/Equipment.h"

#ifdef INVENTORYSYSTEM_Equipment_generated_h
#error "Equipment.generated.h already included, missing '#pragma once' in Equipment.h"
#endif
#define INVENTORYSYSTEM_Equipment_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquipSlotKey;
class UInventoryBase;
class UItemBase;

// ********** Begin Delegate FOnAnyItemEquipped ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_18_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemEquipped_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemEquipped, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item);


// ********** End Delegate FOnAnyItemEquipped ******************************************************

// ********** Begin Delegate FOnAnyItemUnequipped **************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_25_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemUnequipped_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemUnequipped, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item);


// ********** End Delegate FOnAnyItemUnequipped ****************************************************

// ********** Begin Delegate FOnAnyItemEquippedNotify **********************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_32_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemEquippedNotify_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemEquippedNotify, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item);


// ********** End Delegate FOnAnyItemEquippedNotify ************************************************

// ********** Begin Delegate FOnAnyItemUnequippedNotify ********************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_39_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemUnequippedNotify_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemUnequippedNotify, UEquipSlotKey* EquipSlotKey, int32 SlotIndex, UItemBase* Item);


// ********** End Delegate FOnAnyItemUnequippedNotify **********************************************

// ********** Begin Delegate FOnAnyItemEquipSlotChanged ********************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_47_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemEquipSlotChanged_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemEquipSlotChanged, UEquipSlotKey* EquipSlotKey, UItemBase* Item, int32 NewSlotIndex, int32 OldSlotIndex);


// ********** End Delegate FOnAnyItemEquipSlotChanged **********************************************

// ********** Begin Delegate FOnAnyItemSwapWithInventoryItem ***************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_55_DELEGATE \
INVENTORYSYSTEM_API void FOnAnyItemSwapWithInventoryItem_DelegateWrapper(const FMulticastScriptDelegate& OnAnyItemSwapWithInventoryItem, UEquipSlotKey* EquipSlotKey, UItemBase* Item, UItemBase* InventoryItem, int32 SlotIndex);


// ********** End Delegate FOnAnyItemSwapWithInventoryItem *****************************************

// ********** Begin Delegate FOnItemsSwitchedSlots *************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_66_DELEGATE \
INVENTORYSYSTEM_API void FOnItemsSwitchedSlots_DelegateWrapper(const FMulticastScriptDelegate& OnItemsSwitchedSlots, UEquipSlotKey* EquipSlotKey, UItemBase* ItemA, UItemBase* ItemB, int32 OldSlotIndexItemA, int32 OldSlotIndexItemB, int32 NewSlotIndexItemA, int32 NewSlotIndexItemB);


// ********** End Delegate FOnItemsSwitchedSlots ***************************************************

// ********** Begin Delegate FOnEquipChanged *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_70_DELEGATE \
INVENTORYSYSTEM_API void FOnEquipChanged_DelegateWrapper(const FMulticastScriptDelegate& OnEquipChanged);


// ********** End Delegate FOnEquipChanged *********************************************************

// ********** Begin Delegate FOnEquipmentCleared ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_74_DELEGATE \
INVENTORYSYSTEM_API void FOnEquipmentCleared_DelegateWrapper(const FMulticastScriptDelegate& OnEquipmentCleared);


// ********** End Delegate FOnEquipmentCleared *****************************************************

// ********** Begin Class UEquipment ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnUnequipItem_Implementation(UEquipSlotKey* EquipSlotKey, UItemBase* Item); \
	virtual void OnEquipItem_Implementation(UEquipSlotKey* EquipSlotKey, UItemBase* Item); \
	DECLARE_FUNCTION(execOnItemAddedToAnyInventory); \
	DECLARE_FUNCTION(execOnUnequipItem); \
	DECLARE_FUNCTION(execOnEquipItem); \
	DECLARE_FUNCTION(execFindEquippedItemAtIndex); \
	DECLARE_FUNCTION(execFindEquippedItem); \
	DECLARE_FUNCTION(execAreAllSlotsOfKeyOccupied); \
	DECLARE_FUNCTION(execClearEquipment); \
	DECLARE_FUNCTION(execGetEquippedItems); \
	DECLARE_FUNCTION(execTryUnequipItem); \
	DECLARE_FUNCTION(execTryEquipItem); \
	DECLARE_FUNCTION(execTryEquipItemToAvailableSlot);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipment(); \
	friend struct Z_Construct_UClass_UEquipment_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipment_NoRegister(); \
public: \
	DECLARE_CLASS2(UEquipment, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UEquipment_NoRegister) \
	DECLARE_SERIALIZER(UEquipment)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEquipment(UEquipment&&) = delete; \
	UEquipment(const UEquipment&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipment); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEquipment) \
	NO_API virtual ~UEquipment();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_76_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEquipment;

// ********** End Class UEquipment *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Equipment_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TetrisInventory/TetrisInventory.h"

#ifdef INVENTORYSYSTEM_TetrisInventory_generated_h
#error "TetrisInventory.generated.h already included, missing '#pragma once' in TetrisInventory.h"
#endif
#define INVENTORYSYSTEM_TetrisInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTetrisItem;
class UTetrisItemData;
class UTetrisSlot;

// ********** Begin Delegate FOnItemAddedToSlot ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_16_DELEGATE \
INVENTORYSYSTEM_API void FOnItemAddedToSlot_DelegateWrapper(const FMulticastScriptDelegate& OnItemAddedToSlot, UTetrisItem* Item, FIntPoint SlotPosition);


// ********** End Delegate FOnItemAddedToSlot ******************************************************

// ********** Begin Delegate FOnItemRemovedFromSlot ************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_22_DELEGATE \
INVENTORYSYSTEM_API void FOnItemRemovedFromSlot_DelegateWrapper(const FMulticastScriptDelegate& OnItemRemovedFromSlot, UTetrisItem* Item, FIntPoint SlotPosition);


// ********** End Delegate FOnItemRemovedFromSlot **************************************************

// ********** Begin Delegate FOnItemMoved **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_29_DELEGATE \
INVENTORYSYSTEM_API void FOnItemMoved_DelegateWrapper(const FMulticastScriptDelegate& OnItemMoved, UTetrisItem* Item, FIntPoint OldPosition, FIntPoint NewPosition);


// ********** End Delegate FOnItemMoved ************************************************************

// ********** Begin Delegate FOnItemsSwitchedPositions *********************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_39_DELEGATE \
INVENTORYSYSTEM_API void FOnItemsSwitchedPositions_DelegateWrapper(const FMulticastScriptDelegate& OnItemsSwitchedPositions, UTetrisItem* ItemA, UTetrisItem* ItemB, FIntPoint ItemAOldPosition, FIntPoint ItemBOldPosition, FIntPoint ItemANewPosition, FIntPoint ItemBNewPosition);


// ********** End Delegate FOnItemsSwitchedPositions ***********************************************

// ********** Begin Class UTetrisInventory *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTrySwitchItemsPositions); \
	DECLARE_FUNCTION(execTryMoveItem); \
	DECLARE_FUNCTION(execTryAddItemAtSlots); \
	DECLARE_FUNCTION(execTryAddNewItemAtSlots); \
	DECLARE_FUNCTION(execCanOccupySlots); \
	DECLARE_FUNCTION(execGetGridSize); \
	DECLARE_FUNCTION(execGetSlot);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisInventory(); \
	friend struct Z_Construct_UClass_UTetrisInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisInventory, UInventoryBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisInventory_NoRegister) \
	DECLARE_SERIALIZER(UTetrisInventory)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisInventory(UTetrisInventory&&) = delete; \
	UTetrisInventory(const UTetrisInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTetrisInventory) \
	NO_API virtual ~UTetrisInventory();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_41_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisInventory;

// ********** End Class UTetrisInventory ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

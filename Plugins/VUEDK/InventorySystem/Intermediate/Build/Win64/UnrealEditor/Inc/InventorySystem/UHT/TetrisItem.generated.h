// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TetrisInventory/TetrisItem.h"

#ifdef INVENTORYSYSTEM_TetrisItem_generated_h
#error "TetrisItem.generated.h already included, missing '#pragma once' in TetrisItem.h"
#endif
#define INVENTORYSYSTEM_TetrisItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTetrisItemData;

// ********** Begin Delegate FOnItemRotated ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_16_DELEGATE \
INVENTORYSYSTEM_API void FOnItemRotated_DelegateWrapper(const FMulticastScriptDelegate& OnItemRotated, FIntPoint RelativeSize);


// ********** End Delegate FOnItemRotated **********************************************************

// ********** Begin Class UTetrisItem **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsRotated); \
	DECLARE_FUNCTION(execGetRelativeSize); \
	DECLARE_FUNCTION(execGetCachedRotation); \
	DECLARE_FUNCTION(execGetCachedSize); \
	DECLARE_FUNCTION(execGetCurrentPosition); \
	DECLARE_FUNCTION(execGetTetrisItemData); \
	DECLARE_FUNCTION(execRotate); \
	DECLARE_FUNCTION(execResetToCachedRotation); \
	DECLARE_FUNCTION(execSetRotation); \
	DECLARE_FUNCTION(execCanRotate);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisItem(); \
	friend struct Z_Construct_UClass_UTetrisItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisItem, UItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisItem_NoRegister) \
	DECLARE_SERIALIZER(UTetrisItem)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisItem(UTetrisItem&&) = delete; \
	UTetrisItem(const UTetrisItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTetrisItem) \
	NO_API virtual ~UTetrisItem();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_18_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisItem;

// ********** End Class UTetrisItem ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

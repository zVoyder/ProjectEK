// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TetrisInventory/TetrisInventoriesManager.h"

#ifdef INVENTORYSYSTEM_TetrisInventoriesManager_generated_h
#error "TetrisInventoriesManager.generated.h already included, missing '#pragma once' in TetrisInventoriesManager.h"
#endif
#define INVENTORYSYSTEM_TetrisInventoriesManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTetrisInventory;
class UTetrisItem;

// ********** Begin Class UTetrisInventoriesManager ************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTryTransferSwitchItems); \
	DECLARE_FUNCTION(execTryTransferItem);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisInventoriesManager(); \
	friend struct Z_Construct_UClass_UTetrisInventoriesManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisInventoriesManager, UInventoriesManager, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisInventoriesManager_NoRegister) \
	DECLARE_SERIALIZER(UTetrisInventoriesManager)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisInventoriesManager(UTetrisInventoriesManager&&) = delete; \
	UTetrisInventoriesManager(const UTetrisInventoriesManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisInventoriesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisInventoriesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTetrisInventoriesManager) \
	NO_API virtual ~UTetrisInventoriesManager();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisInventoriesManager;

// ********** End Class UTetrisInventoriesManager **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisInventoriesManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/InventoriesManager.h"

#ifdef INVENTORYSYSTEM_InventoriesManager_generated_h
#error "InventoriesManager.generated.h already included, missing '#pragma once' in InventoriesManager.h"
#endif
#define INVENTORYSYSTEM_InventoriesManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UItemDataBase;
struct FGuid;

// ********** Begin Class UInventoriesManager ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItemDataFromRegistry); \
	DECLARE_FUNCTION(execIsItemInRegistry);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoriesManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoriesManager(); \
	friend struct Z_Construct_UClass_UInventoriesManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoriesManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoriesManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UInventoriesManager_NoRegister) \
	DECLARE_SERIALIZER(UInventoriesManager)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoriesManager(UInventoriesManager&&) = delete; \
	UInventoriesManager(const UInventoriesManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoriesManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoriesManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoriesManager) \
	NO_API virtual ~UInventoriesManager();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoriesManager;

// ********** End Class UInventoriesManager ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_InventoriesManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

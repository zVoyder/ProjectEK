// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/TetrisInventoriesUtility.h"

#ifdef INVENTORYSYSTEM_TetrisInventoriesUtility_generated_h
#error "TetrisInventoriesUtility.generated.h already included, missing '#pragma once' in TetrisInventoriesUtility.h"
#endif
#define INVENTORYSYSTEM_TetrisInventoriesUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTetrisInventoriesManager;
class UTetrisInventory;
class UTetrisItem;

// ********** Begin Class UTetrisInventoriesUtility ************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSplitting); \
	DECLARE_FUNCTION(execRequestCancelSplit); \
	DECLARE_FUNCTION(execRequestSplit); \
	DECLARE_FUNCTION(execRequestDiscard); \
	DECLARE_FUNCTION(execRequestEquipUnequip); \
	DECLARE_FUNCTION(execRequestRotate); \
	DECLARE_FUNCTION(execRequestDrop); \
	DECLARE_FUNCTION(execRequestDrag); \
	DECLARE_FUNCTION(execTryTransferSwitchItems); \
	DECLARE_FUNCTION(execTryTransferItem); \
	DECLARE_FUNCTION(execGetTetrisInventoriesManager);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisInventoriesUtility(); \
	friend struct Z_Construct_UClass_UTetrisInventoriesUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventoriesUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisInventoriesUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisInventoriesUtility_NoRegister) \
	DECLARE_SERIALIZER(UTetrisInventoriesUtility)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetrisInventoriesUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisInventoriesUtility(UTetrisInventoriesUtility&&) = delete; \
	UTetrisInventoriesUtility(const UTetrisInventoriesUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisInventoriesUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisInventoriesUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetrisInventoriesUtility) \
	NO_API virtual ~UTetrisInventoriesUtility();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisInventoriesUtility;

// ********** End Class UTetrisInventoriesUtility **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_TetrisInventoriesUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

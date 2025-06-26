// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TetrisInventory/TetrisSlot.h"

#ifdef INVENTORYSYSTEM_TetrisSlot_generated_h
#error "TetrisSlot.generated.h already included, missing '#pragma once' in TetrisSlot.h"
#endif
#define INVENTORYSYSTEM_TetrisSlot_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTetrisItem;

// ********** Begin Class UTetrisSlot **************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSlotPosition); \
	DECLARE_FUNCTION(execGetSlotItem); \
	DECLARE_FUNCTION(execIsOccupied); \
	DECLARE_FUNCTION(execFreeSlot); \
	DECLARE_FUNCTION(execOccupySlot);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisSlot_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisSlot(); \
	friend struct Z_Construct_UClass_UTetrisSlot_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisSlot_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisSlot, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisSlot_NoRegister) \
	DECLARE_SERIALIZER(UTetrisSlot)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetrisSlot(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisSlot(UTetrisSlot&&) = delete; \
	UTetrisSlot(const UTetrisSlot&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisSlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisSlot); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetrisSlot) \
	NO_API virtual ~UTetrisSlot();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_12_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisSlot;

// ********** End Class UTetrisSlot ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_TetrisSlot_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

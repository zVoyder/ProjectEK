// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassicInventory/ClassicInventory.h"

#ifdef INVENTORYSYSTEM_ClassicInventory_generated_h
#error "ClassicInventory.generated.h already included, missing '#pragma once' in ClassicInventory.h"
#endif
#define INVENTORYSYSTEM_ClassicInventory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClassicInventory ********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSatisfyingAllRequiredSlots); \
	DECLARE_FUNCTION(execGetTotalMinRequiredSlotsCount);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassicInventory(); \
	friend struct Z_Construct_UClass_UClassicInventory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventory_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassicInventory, UInventoryBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UClassicInventory_NoRegister) \
	DECLARE_SERIALIZER(UClassicInventory)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassicInventory(UClassicInventory&&) = delete; \
	UClassicInventory(const UClassicInventory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassicInventory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassicInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClassicInventory) \
	NO_API virtual ~UClassicInventory();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassicInventory;

// ********** End Class UClassicInventory **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicInventory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

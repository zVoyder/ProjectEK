// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassicInventory/ClassicItem.h"

#ifdef INVENTORYSYSTEM_ClassicItem_generated_h
#error "ClassicItem.generated.h already included, missing '#pragma once' in ClassicItem.h"
#endif
#define INVENTORYSYSTEM_ClassicItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UClassicItemData;
struct FClassicItemSlotData;

// ********** Begin Class UClassicItem *************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetMinRequiredSlots); \
	DECLARE_FUNCTION(execGetRequiredSlots); \
	DECLARE_FUNCTION(execGetClassicItemData);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassicItem(); \
	friend struct Z_Construct_UClass_UClassicItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItem_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassicItem, UItemBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UClassicItem_NoRegister) \
	DECLARE_SERIALIZER(UClassicItem)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassicItem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassicItem(UClassicItem&&) = delete; \
	UClassicItem(const UClassicItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassicItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassicItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClassicItem) \
	NO_API virtual ~UClassicItem();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_14_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassicItem;

// ********** End Class UClassicItem ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_ClassicItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

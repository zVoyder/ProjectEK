// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/ISInventoriesUtility.h"

#ifdef INVENTORYSYSTEM_ISInventoriesUtility_generated_h
#error "ISInventoriesUtility.generated.h already included, missing '#pragma once' in ISInventoriesUtility.h"
#endif
#define INVENTORYSYSTEM_ISInventoriesUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInventoriesManager;
class UInventoryBase;
class UItemBase;
class UItemDataBase;
class UItemsRegistry;
struct FGuid;

// ********** Begin Class UISInventoriesUtility ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDropItemWithOperation); \
	DECLARE_FUNCTION(execGetItemDataFromRegistry); \
	DECLARE_FUNCTION(execIsItemInRegistry); \
	DECLARE_FUNCTION(execGetRegistry); \
	DECLARE_FUNCTION(execGetInventoriesManager); \
	DECLARE_FUNCTION(execGetTargetInventory); \
	DECLARE_FUNCTION(execSetTargetInventory);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISInventoriesUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISInventoriesUtility(); \
	friend struct Z_Construct_UClass_UISInventoriesUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISInventoriesUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UISInventoriesUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UISInventoriesUtility_NoRegister) \
	DECLARE_SERIALIZER(UISInventoriesUtility)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISInventoriesUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UISInventoriesUtility(UISInventoriesUtility&&) = delete; \
	UISInventoriesUtility(const UISInventoriesUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISInventoriesUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISInventoriesUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISInventoriesUtility) \
	NO_API virtual ~UISInventoriesUtility();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UISInventoriesUtility;

// ********** End Class UISInventoriesUtility ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Utility_ISInventoriesUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/Data/ItemsRegistry.h"

#ifdef INVENTORYSYSTEM_ItemsRegistry_generated_h
#error "ItemsRegistry.generated.h already included, missing '#pragma once' in ItemsRegistry.h"
#endif
#define INVENTORYSYSTEM_ItemsRegistry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UItemsRegistry ***********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemsRegistry_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemsRegistry(); \
	friend struct Z_Construct_UClass_UItemsRegistry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemsRegistry_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemsRegistry, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UItemsRegistry_NoRegister) \
	DECLARE_SERIALIZER(UItemsRegistry)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItemsRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemsRegistry(UItemsRegistry&&) = delete; \
	UItemsRegistry(const UItemsRegistry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemsRegistry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemsRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItemsRegistry) \
	NO_API virtual ~UItemsRegistry();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemsRegistry;

// ********** End Class UItemsRegistry *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemsRegistry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

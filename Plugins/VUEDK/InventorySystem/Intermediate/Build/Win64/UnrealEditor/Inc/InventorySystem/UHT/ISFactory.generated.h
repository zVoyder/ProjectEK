// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Factories/ISFactory.h"

#ifdef INVENTORYSYSTEM_ISFactory_generated_h
#error "ISFactory.generated.h already included, missing '#pragma once' in ISFactory.h"
#endif
#define INVENTORYSYSTEM_ISFactory_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AItemDropActor;
class UItemBase;
class UItemDataBase;
class UObject;

// ********** Begin Class UISFactory ***************************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCreateItemDropActor); \
	DECLARE_FUNCTION(execCreateItems); \
	DECLARE_FUNCTION(execCreateItem);


INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISFactory_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUISFactory(); \
	friend struct Z_Construct_UClass_UISFactory_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UISFactory_NoRegister(); \
public: \
	DECLARE_CLASS2(UISFactory, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UISFactory_NoRegister) \
	DECLARE_SERIALIZER(UISFactory)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UISFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UISFactory(UISFactory&&) = delete; \
	UISFactory(const UISFactory&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UISFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UISFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UISFactory) \
	NO_API virtual ~UISFactory();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UISFactory;

// ********** End Class UISFactory *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Factories_ISFactory_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

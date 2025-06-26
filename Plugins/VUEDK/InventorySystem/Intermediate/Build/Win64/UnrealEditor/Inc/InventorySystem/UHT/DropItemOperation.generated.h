// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/DropItemOperation.h"

#ifdef INVENTORYSYSTEM_DropItemOperation_generated_h
#error "DropItemOperation.generated.h already included, missing '#pragma once' in DropItemOperation.h"
#endif
#define INVENTORYSYSTEM_DropItemOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class AItemDropActor;
class UItemBase;

// ********** Begin Class UDropItemOperation *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool DropItem_Implementation(UItemBase* Item); \
	DECLARE_FUNCTION(execTryDropItemAroundPlayer); \
	DECLARE_FUNCTION(execTryDropItemAroundActor); \
	DECLARE_FUNCTION(execDropItem);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDropItemOperation_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDropItemOperation(); \
	friend struct Z_Construct_UClass_UDropItemOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UDropItemOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UDropItemOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UDropItemOperation_NoRegister) \
	DECLARE_SERIALIZER(UDropItemOperation)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropItemOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDropItemOperation(UDropItemOperation&&) = delete; \
	UDropItemOperation(const UDropItemOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropItemOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropItemOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropItemOperation) \
	NO_API virtual ~UDropItemOperation();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDropItemOperation;

// ********** End Class UDropItemOperation *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_DropItemOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/ItemDropActor.h"

#ifdef INVENTORYSYSTEM_ItemDropActor_generated_h
#error "ItemDropActor.generated.h already included, missing '#pragma once' in ItemDropActor.h"
#endif
#define INVENTORYSYSTEM_ItemDropActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStaticMesh;

// ********** Begin Class AItemDropActor ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInit_Implementation(); \
	DECLARE_FUNCTION(execOnItemMeshLoaded); \
	DECLARE_FUNCTION(execOnInit);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemDropActor(); \
	friend struct Z_Construct_UClass_AItemDropActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemDropActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AItemDropActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_AItemDropActor_NoRegister) \
	DECLARE_SERIALIZER(AItemDropActor)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItemDropActor(AItemDropActor&&) = delete; \
	AItemDropActor(const AItemDropActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemDropActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemDropActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemDropActor) \
	NO_API virtual ~AItemDropActor();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItemDropActor;

// ********** End Class AItemDropActor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_ItemDropActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

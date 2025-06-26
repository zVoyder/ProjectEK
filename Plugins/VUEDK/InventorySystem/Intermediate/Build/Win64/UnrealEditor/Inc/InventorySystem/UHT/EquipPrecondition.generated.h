// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentSystem/EquipPrecondition.h"

#ifdef INVENTORYSYSTEM_EquipPrecondition_generated_h
#error "EquipPrecondition.generated.h already included, missing '#pragma once' in EquipPrecondition.h"
#endif
#define INVENTORYSYSTEM_EquipPrecondition_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEquipment;
class UItemBase;

// ********** Begin Class UEquipPrecondition *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool IsPreconditionMet_Implementation(UItemBase* Item, UEquipment* Equipment) const; \
	DECLARE_FUNCTION(execIsPreconditionMet);


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_CALLBACK_WRAPPERS
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipPrecondition_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipPrecondition(); \
	friend struct Z_Construct_UClass_UEquipPrecondition_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UEquipPrecondition_NoRegister(); \
public: \
	DECLARE_CLASS2(UEquipPrecondition, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UEquipPrecondition_NoRegister) \
	DECLARE_SERIALIZER(UEquipPrecondition)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipPrecondition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEquipPrecondition(UEquipPrecondition&&) = delete; \
	UEquipPrecondition(const UEquipPrecondition&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipPrecondition); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipPrecondition); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipPrecondition) \
	NO_API virtual ~UEquipPrecondition();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEquipPrecondition;

// ********** End Class UEquipPrecondition *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_EquipPrecondition_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

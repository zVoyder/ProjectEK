// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/Data/ItemDataBase.h"

#ifdef INVENTORYSYSTEM_ItemDataBase_generated_h
#error "ItemDataBase.generated.h already included, missing '#pragma once' in ItemDataBase.h"
#endif
#define INVENTORYSYSTEM_ItemDataBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UItemDataBase ************************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemDataBase(); \
	friend struct Z_Construct_UClass_UItemDataBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemDataBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UItemDataBase, UPrimaryDataAsset, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UItemDataBase_NoRegister) \
	DECLARE_SERIALIZER(UItemDataBase)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UItemDataBase(UItemDataBase&&) = delete; \
	UItemDataBase(const UItemDataBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemDataBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UItemDataBase) \
	NO_API virtual ~UItemDataBase();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h_16_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h_19_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UItemDataBase;

// ********** End Class UItemDataBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_ItemDataBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

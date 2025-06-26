// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassicInventory/Data/ClassicItemData.h"

#ifdef INVENTORYSYSTEM_ClassicItemData_generated_h
#error "ClassicItemData.generated.h already included, missing '#pragma once' in ClassicItemData.h"
#endif
#define INVENTORYSYSTEM_ClassicItemData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClassicItemData *********************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItemData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassicItemData(); \
	friend struct Z_Construct_UClass_UClassicItemData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicItemData_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassicItemData, UItemDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UClassicItemData_NoRegister) \
	DECLARE_SERIALIZER(UClassicItemData)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassicItemData(UClassicItemData&&) = delete; \
	UClassicItemData(const UClassicItemData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassicItemData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassicItemData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UClassicItemData) \
	NO_API virtual ~UClassicItemData();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassicItemData;

// ********** End Class UClassicItemData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_ClassicItemData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ClassicInventory/Data/SaveData/ClassicInventorySaveData.h"

#ifdef INVENTORYSYSTEM_ClassicInventorySaveData_generated_h
#error "ClassicInventorySaveData.generated.h already included, missing '#pragma once' in ClassicInventorySaveData.h"
#endif
#define INVENTORYSYSTEM_ClassicInventorySaveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UClassicInventorySaveData ************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventorySaveData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUClassicInventorySaveData(); \
	friend struct Z_Construct_UClass_UClassicInventorySaveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UClassicInventorySaveData_NoRegister(); \
public: \
	DECLARE_CLASS2(UClassicInventorySaveData, UInventoryBaseSaveData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UClassicInventorySaveData_NoRegister) \
	DECLARE_SERIALIZER(UClassicInventorySaveData)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UClassicInventorySaveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UClassicInventorySaveData(UClassicInventorySaveData&&) = delete; \
	UClassicInventorySaveData(const UClassicInventorySaveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UClassicInventorySaveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UClassicInventorySaveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UClassicInventorySaveData) \
	NO_API virtual ~UClassicInventorySaveData();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UClassicInventorySaveData;

// ********** End Class UClassicInventorySaveData **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_ClassicInventory_Data_SaveData_ClassicInventorySaveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

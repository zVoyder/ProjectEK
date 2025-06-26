// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TetrisInventory/Data/SaveData/TetrisInventorySaveData.h"

#ifdef INVENTORYSYSTEM_TetrisInventorySaveData_generated_h
#error "TetrisInventorySaveData.generated.h already included, missing '#pragma once' in TetrisInventorySaveData.h"
#endif
#define INVENTORYSYSTEM_TetrisInventorySaveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTetrisInventorySaveData *************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventorySaveData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTetrisInventorySaveData(); \
	friend struct Z_Construct_UClass_UTetrisInventorySaveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UTetrisInventorySaveData_NoRegister(); \
public: \
	DECLARE_CLASS2(UTetrisInventorySaveData, UInventoryBaseSaveData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UTetrisInventorySaveData_NoRegister) \
	DECLARE_SERIALIZER(UTetrisInventorySaveData)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTetrisInventorySaveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTetrisInventorySaveData(UTetrisInventorySaveData&&) = delete; \
	UTetrisInventorySaveData(const UTetrisInventorySaveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTetrisInventorySaveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTetrisInventorySaveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTetrisInventorySaveData) \
	NO_API virtual ~UTetrisInventorySaveData();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTetrisInventorySaveData;

// ********** End Class UTetrisInventorySaveData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_TetrisInventory_Data_SaveData_TetrisInventorySaveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

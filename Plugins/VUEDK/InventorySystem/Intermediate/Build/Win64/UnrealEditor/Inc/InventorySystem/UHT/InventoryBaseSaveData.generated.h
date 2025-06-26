// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/Data/SaveData/InventoryBaseSaveData.h"

#ifdef INVENTORYSYSTEM_InventoryBaseSaveData_generated_h
#error "InventoryBaseSaveData.generated.h already included, missing '#pragma once' in InventoryBaseSaveData.h"
#endif
#define INVENTORYSYSTEM_InventoryBaseSaveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInventoryBaseSaveData ***************************************************
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryBaseSaveData(); \
	friend struct Z_Construct_UClass_UInventoryBaseSaveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryBaseSaveData_NoRegister(); \
public: \
	DECLARE_CLASS2(UInventoryBaseSaveData, USaveData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), Z_Construct_UClass_UInventoryBaseSaveData_NoRegister) \
	DECLARE_SERIALIZER(UInventoryBaseSaveData)


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryBaseSaveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInventoryBaseSaveData(UInventoryBaseSaveData&&) = delete; \
	UInventoryBaseSaveData(const UInventoryBaseSaveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryBaseSaveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryBaseSaveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryBaseSaveData) \
	NO_API virtual ~UInventoryBaseSaveData();


#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInventoryBaseSaveData;

// ********** End Class UInventoryBaseSaveData *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_Base_Data_SaveData_InventoryBaseSaveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInventory/Data/SaveData/RPGInventorySaveData.h"

#ifdef RPGSYSTEM_RPGInventorySaveData_generated_h
#error "RPGInventorySaveData.generated.h already included, missing '#pragma once' in RPGInventorySaveData.h"
#endif
#define RPGSYSTEM_RPGInventorySaveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGInventorySaveData ****************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventorySaveData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInventorySaveData(); \
	friend struct Z_Construct_UClass_URPGInventorySaveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGInventorySaveData_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInventorySaveData, UInventoryBaseSaveData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGInventorySaveData_NoRegister) \
	DECLARE_SERIALIZER(URPGInventorySaveData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGInventorySaveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInventorySaveData(URPGInventorySaveData&&) = delete; \
	URPGInventorySaveData(const URPGInventorySaveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInventorySaveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInventorySaveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGInventorySaveData) \
	NO_API virtual ~URPGInventorySaveData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInventorySaveData;

// ********** End Class URPGInventorySaveData ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGInventory_Data_SaveData_RPGInventorySaveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

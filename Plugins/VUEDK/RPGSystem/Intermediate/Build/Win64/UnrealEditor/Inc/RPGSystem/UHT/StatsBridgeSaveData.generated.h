// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Data/SaveData/StatsBridgeSaveData.h"

#ifdef RPGSYSTEM_StatsBridgeSaveData_generated_h
#error "StatsBridgeSaveData.generated.h already included, missing '#pragma once' in StatsBridgeSaveData.h"
#endif
#define RPGSYSTEM_StatsBridgeSaveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGuid; 

// ********** Begin Class UStatsBridgeSaveData *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execInit);


RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeSaveData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsBridgeSaveData(); \
	friend struct Z_Construct_UClass_UStatsBridgeSaveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeSaveData_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatsBridgeSaveData, USaveData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UStatsBridgeSaveData_NoRegister) \
	DECLARE_SERIALIZER(UStatsBridgeSaveData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsBridgeSaveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatsBridgeSaveData(UStatsBridgeSaveData&&) = delete; \
	UStatsBridgeSaveData(const UStatsBridgeSaveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsBridgeSaveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsBridgeSaveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsBridgeSaveData) \
	NO_API virtual ~UStatsBridgeSaveData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatsBridgeSaveData;

// ********** End Class UStatsBridgeSaveData *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_SaveData_StatsBridgeSaveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

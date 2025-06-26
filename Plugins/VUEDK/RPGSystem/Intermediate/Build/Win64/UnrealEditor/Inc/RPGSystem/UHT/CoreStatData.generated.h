// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Data/CoreStatData.h"

#ifdef RPGSYSTEM_CoreStatData_generated_h
#error "CoreStatData.generated.h already included, missing '#pragma once' in CoreStatData.h"
#endif
#define RPGSYSTEM_CoreStatData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreStatData ************************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStatData(); \
	friend struct Z_Construct_UClass_UCoreStatData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreStatData, UStatDataBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UCoreStatData_NoRegister) \
	DECLARE_SERIALIZER(UCoreStatData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreStatData(UCoreStatData&&) = delete; \
	UCoreStatData(const UCoreStatData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStatData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStatData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCoreStatData) \
	NO_API virtual ~UCoreStatData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreStatData;

// ********** End Class UCoreStatData **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_CoreStatData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

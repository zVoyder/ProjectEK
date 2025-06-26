// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Data/StatDataBase.h"

#ifdef RPGSYSTEM_StatDataBase_generated_h
#error "StatDataBase.generated.h already included, missing '#pragma once' in StatDataBase.h"
#endif
#define RPGSYSTEM_StatDataBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStatDataBase ************************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatDataBase(); \
	friend struct Z_Construct_UClass_UStatDataBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UStatDataBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatDataBase, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UStatDataBase_NoRegister) \
	DECLARE_SERIALIZER(UStatDataBase)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatDataBase(UStatDataBase&&) = delete; \
	UStatDataBase(const UStatDataBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatDataBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatDataBase) \
	NO_API virtual ~UStatDataBase();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatDataBase;

// ********** End Class UStatDataBase **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Data_StatDataBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

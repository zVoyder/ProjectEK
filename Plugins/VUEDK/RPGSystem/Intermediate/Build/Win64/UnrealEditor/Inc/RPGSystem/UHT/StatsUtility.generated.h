// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Utility/StatsUtility.h"

#ifdef RPGSYSTEM_StatsUtility_generated_h
#error "StatsUtility.generated.h already included, missing '#pragma once' in StatsUtility.h"
#endif
#define RPGSYSTEM_StatsUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStatsBridgeBase;

// ********** Begin Class UStatsUtility ************************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayerControllerStats); \
	DECLARE_FUNCTION(execGetPlayerPawnStats);


RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsUtility(); \
	friend struct Z_Construct_UClass_UStatsUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UStatsUtility_NoRegister) \
	DECLARE_SERIALIZER(UStatsUtility)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatsUtility(UStatsUtility&&) = delete; \
	UStatsUtility(const UStatsUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsUtility) \
	NO_API virtual ~UStatsUtility();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatsUtility;

// ********** End Class UStatsUtility **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Utility_StatsUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

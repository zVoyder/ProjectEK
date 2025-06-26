// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/CharacterStats/CharacterCoreStats.h"

#ifdef RPGSYSTEM_CharacterCoreStats_generated_h
#error "CharacterCoreStats.generated.h already included, missing '#pragma once' in CharacterCoreStats.h"
#endif
#define RPGSYSTEM_CharacterCoreStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterCoreStats ******************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterCoreStats_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterCoreStats(); \
	friend struct Z_Construct_UClass_UCharacterCoreStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterCoreStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterCoreStats, UCoreStatsContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UCharacterCoreStats_NoRegister) \
	DECLARE_SERIALIZER(UCharacterCoreStats)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterCoreStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterCoreStats(UCharacterCoreStats&&) = delete; \
	UCharacterCoreStats(const UCharacterCoreStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterCoreStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterCoreStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterCoreStats) \
	NO_API virtual ~UCharacterCoreStats();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterCoreStats;

// ********** End Class UCharacterCoreStats ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterCoreStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

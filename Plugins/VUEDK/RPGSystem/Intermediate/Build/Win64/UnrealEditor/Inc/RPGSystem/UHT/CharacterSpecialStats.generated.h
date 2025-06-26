// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/CharacterStats/CharacterSpecialStats.h"

#ifdef RPGSYSTEM_CharacterSpecialStats_generated_h
#error "CharacterSpecialStats.generated.h already included, missing '#pragma once' in CharacterSpecialStats.h"
#endif
#define RPGSYSTEM_CharacterSpecialStats_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCharacterSpecialStats ***************************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterSpecialStats_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterSpecialStats(); \
	friend struct Z_Construct_UClass_UCharacterSpecialStats_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UCharacterSpecialStats_NoRegister(); \
public: \
	DECLARE_CLASS2(UCharacterSpecialStats, USpecialStatsContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UCharacterSpecialStats_NoRegister) \
	DECLARE_SERIALIZER(UCharacterSpecialStats)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSpecialStats(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCharacterSpecialStats(UCharacterSpecialStats&&) = delete; \
	UCharacterSpecialStats(const UCharacterSpecialStats&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSpecialStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSpecialStats); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSpecialStats) \
	NO_API virtual ~UCharacterSpecialStats();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCharacterSpecialStats;

// ********** End Class UCharacterSpecialStats *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_CharacterStats_CharacterSpecialStats_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

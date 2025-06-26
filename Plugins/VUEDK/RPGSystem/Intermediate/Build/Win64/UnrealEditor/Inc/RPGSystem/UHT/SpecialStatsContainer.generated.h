// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Containers/SpecialStatsContainer.h"

#ifdef RPGSYSTEM_SpecialStatsContainer_generated_h
#error "SpecialStatsContainer.generated.h already included, missing '#pragma once' in SpecialStatsContainer.h"
#endif
#define RPGSYSTEM_SpecialStatsContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USpecialStatData;
class USpecialStatData; 

// ********** Begin Class USpecialStatsContainer ***************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpecialStatsValues); \
	DECLARE_FUNCTION(execAddSpecialStats);


RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatsContainer_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpecialStatsContainer(); \
	friend struct Z_Construct_UClass_USpecialStatsContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_USpecialStatsContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(USpecialStatsContainer, UStatsContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_USpecialStatsContainer_NoRegister) \
	DECLARE_SERIALIZER(USpecialStatsContainer)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpecialStatsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpecialStatsContainer(USpecialStatsContainer&&) = delete; \
	USpecialStatsContainer(const USpecialStatsContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpecialStatsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpecialStatsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpecialStatsContainer) \
	NO_API virtual ~USpecialStatsContainer();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpecialStatsContainer;

// ********** End Class USpecialStatsContainer *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_SpecialStatsContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

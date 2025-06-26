// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Containers/CoreStatsContainer.h"

#ifdef RPGSYSTEM_CoreStatsContainer_generated_h
#error "CoreStatsContainer.generated.h already included, missing '#pragma once' in CoreStatsContainer.h"
#endif
#define RPGSYSTEM_CoreStatsContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCoreStatData;
class UCoreStatData; 

// ********** Begin Class UCoreStatsContainer ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCoreStatsValues); \
	DECLARE_FUNCTION(execAddCoreStats);


RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCoreStatsContainer(); \
	friend struct Z_Construct_UClass_UCoreStatsContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UCoreStatsContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UCoreStatsContainer, UStatsContainer, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UCoreStatsContainer_NoRegister) \
	DECLARE_SERIALIZER(UCoreStatsContainer)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCoreStatsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreStatsContainer(UCoreStatsContainer&&) = delete; \
	UCoreStatsContainer(const UCoreStatsContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreStatsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreStatsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreStatsContainer) \
	NO_API virtual ~UCoreStatsContainer();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreStatsContainer;

// ********** End Class UCoreStatsContainer ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_CoreStatsContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

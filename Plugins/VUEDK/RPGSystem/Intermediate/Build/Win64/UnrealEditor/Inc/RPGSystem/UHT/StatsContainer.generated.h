// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/Containers/StatsContainer.h"

#ifdef RPGSYSTEM_StatsContainer_generated_h
#error "StatsContainer.generated.h already included, missing '#pragma once' in StatsContainer.h"
#endif
#define RPGSYSTEM_StatsContainer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UStatDataBase;
class UStatDataBase; 
class UStatsContainer;

// ********** Begin Delegate FOnStatsValuesChanged *************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_12_DELEGATE \
RPGSYSTEM_API void FOnStatsValuesChanged_DelegateWrapper(const FMulticastScriptDelegate& OnStatsValuesChanged);


// ********** End Delegate FOnStatsValuesChanged ***************************************************

// ********** Begin Class UStatsContainer **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValues); \
	DECLARE_FUNCTION(execTryModifyValue); \
	DECLARE_FUNCTION(execTrySetValue); \
	DECLARE_FUNCTION(execGetStatsLength); \
	DECLARE_FUNCTION(execGetValueAsString); \
	DECLARE_FUNCTION(execGetValueAsFloat); \
	DECLARE_FUNCTION(execGetValueAsInt); \
	DECLARE_FUNCTION(execAreStatsEqual); \
	DECLARE_FUNCTION(execCopyStats); \
	DECLARE_FUNCTION(execRemoveStat); \
	DECLARE_FUNCTION(execClearStats); \
	DECLARE_FUNCTION(execAddStat); \
	DECLARE_FUNCTION(execAddStats);


RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsContainer_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsContainer(); \
	friend struct Z_Construct_UClass_UStatsContainer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsContainer_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatsContainer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UStatsContainer_NoRegister) \
	DECLARE_SERIALIZER(UStatsContainer)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatsContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatsContainer(UStatsContainer&&) = delete; \
	UStatsContainer(const UStatsContainer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatsContainer) \
	NO_API virtual ~UStatsContainer();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_14_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatsContainer;

// ********** End Class UStatsContainer ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_Containers_StatsContainer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

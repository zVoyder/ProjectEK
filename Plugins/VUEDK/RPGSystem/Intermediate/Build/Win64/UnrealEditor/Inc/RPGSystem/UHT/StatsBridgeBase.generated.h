// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/StatsBridgeBase.h"

#ifdef RPGSYSTEM_StatsBridgeBase_generated_h
#error "StatsBridgeBase.generated.h already included, missing '#pragma once' in StatsBridgeBase.h"
#endif
#define RPGSYSTEM_StatsBridgeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UBridgeStatOperation;
class UCoreStatData;
class UCoreStatData; 
class UCoreStatsContainer;
class USaveData;
class USpecialStatData;
class UStatDataBase;
class UStatsBridgeBase;

// ********** Begin Delegate FOnCalculatedCoreStatsValues ******************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_20_DELEGATE \
RPGSYSTEM_API void FOnCalculatedCoreStatsValues_DelegateWrapper(const FMulticastScriptDelegate& OnCalculatedCoreStatsValues, UStatsBridgeBase* StatsBridge);


// ********** End Delegate FOnCalculatedCoreStatsValues ********************************************

// ********** Begin Delegate FOnCalculatedFullStatsValues ******************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_25_DELEGATE \
RPGSYSTEM_API void FOnCalculatedFullStatsValues_DelegateWrapper(const FMulticastScriptDelegate& OnCalculatedFullStatsValues, UStatsBridgeBase* StatsBridge);


// ********** End Delegate FOnCalculatedFullStatsValues ********************************************

// ********** Begin Class UStatsBridgeBase *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnCalculateFullStatsValues_Implementation(); \
	virtual void OnCalculateCoreStatsValues_Implementation(); \
	DECLARE_FUNCTION(execOnCalculateFullStatsValues); \
	DECLARE_FUNCTION(execOnCalculateCoreStatsValues); \
	DECLARE_FUNCTION(execCalculateFullStatsValues); \
	DECLARE_FUNCTION(execCalculateCoreStatsValues); \
	DECLARE_FUNCTION(execModifyFullStatValue); \
	DECLARE_FUNCTION(execSetFullStatValue); \
	DECLARE_FUNCTION(execCalculateAllStatsValues); \
	DECLARE_FUNCTION(execCalculateCoreStatValueWithSpecialStat); \
	DECLARE_FUNCTION(execGetFullStatsLength); \
	DECLARE_FUNCTION(execGetFullStatValueAsString); \
	DECLARE_FUNCTION(execGetFullStatValueAsInt); \
	DECLARE_FUNCTION(execGetFullStatValueAsFloat); \
	DECLARE_FUNCTION(execGetFullStatsContainer); \
	DECLARE_FUNCTION(execGetFullStatsValues); \
	DECLARE_FUNCTION(execGetCoreStatByCodeName); \
	DECLARE_FUNCTION(execGetSpecialStatByCodeName); \
	DECLARE_FUNCTION(execLoadSaveData); \
	DECLARE_FUNCTION(execCreateSaveData);


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_CALLBACK_WRAPPERS
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatsBridgeBase(); \
	friend struct Z_Construct_UClass_UStatsBridgeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UStatsBridgeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatsBridgeBase, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UStatsBridgeBase_NoRegister) \
	DECLARE_SERIALIZER(UStatsBridgeBase) \
	virtual UObject* _getUObject() const override { return const_cast<UStatsBridgeBase*>(this); }


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatsBridgeBase(UStatsBridgeBase&&) = delete; \
	UStatsBridgeBase(const UStatsBridgeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatsBridgeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatsBridgeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UStatsBridgeBase) \
	NO_API virtual ~UStatsBridgeBase();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_27_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatsBridgeBase;

// ********** End Class UStatsBridgeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatsBridgeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/BridgeStatOperation.h"

#ifdef RPGSYSTEM_BridgeStatOperation_generated_h
#error "BridgeStatOperation.generated.h already included, missing '#pragma once' in BridgeStatOperation.h"
#endif
#define RPGSYSTEM_BridgeStatOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class USpecialStatData;
class UStatsBridgeBase;

// ********** Begin Class UBridgeStatOperation *****************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValueOfSpecialStat); \
	DECLARE_FUNCTION(execGetCoreStatDefaultValue); \
	DECLARE_FUNCTION(execGetStatsBridge);


RPGSYSTEM_API UClass* Z_Construct_UClass_UBridgeStatOperation_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBridgeStatOperation(); \
	friend struct Z_Construct_UClass_UBridgeStatOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UBridgeStatOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBridgeStatOperation, UStatOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UBridgeStatOperation_NoRegister) \
	DECLARE_SERIALIZER(UBridgeStatOperation)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBridgeStatOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBridgeStatOperation(UBridgeStatOperation&&) = delete; \
	UBridgeStatOperation(const UBridgeStatOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBridgeStatOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBridgeStatOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBridgeStatOperation) \
	NO_API virtual ~UBridgeStatOperation();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBridgeStatOperation;

// ********** End Class UBridgeStatOperation *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_BridgeStatOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

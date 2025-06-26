// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "StatsSystem/StatOperation.h"

#ifdef RPGSYSTEM_StatOperation_generated_h
#error "StatOperation.generated.h already included, missing '#pragma once' in StatOperation.h"
#endif
#define RPGSYSTEM_StatOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStatOperation ***********************************************************
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInit_Implementation(); \
	virtual float GetResultOperation_Implementation() const; \
	DECLARE_FUNCTION(execOnInit); \
	DECLARE_FUNCTION(execGetResultOperation);


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_CALLBACK_WRAPPERS
RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatOperation(); \
	friend struct Z_Construct_UClass_UStatOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_UStatOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatOperation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_UStatOperation_NoRegister) \
	DECLARE_SERIALIZER(UStatOperation)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStatOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatOperation(UStatOperation&&) = delete; \
	UStatOperation(const UStatOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStatOperation) \
	NO_API virtual ~UStatOperation();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatOperation;

// ********** End Class UStatOperation *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_StatsSystem_StatOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

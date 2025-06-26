// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/BetterUIUtility.h"

#ifdef BETTERUI_BetterUIUtility_generated_h
#error "BetterUIUtility.generated.h already included, missing '#pragma once' in BetterUIUtility.h"
#endif
#define BETTERUI_BetterUIUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBetterUIUtility *********************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetProjectName); \
	DECLARE_FUNCTION(execGetProjectVersion);


BETTERUI_API UClass* Z_Construct_UClass_UBetterUIUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterUIUtility(); \
	friend struct Z_Construct_UClass_UBetterUIUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterUIUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterUIUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterUIUtility_NoRegister) \
	DECLARE_SERIALIZER(UBetterUIUtility)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterUIUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterUIUtility(UBetterUIUtility&&) = delete; \
	UBetterUIUtility(const UBetterUIUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterUIUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterUIUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterUIUtility) \
	NO_API virtual ~UBetterUIUtility();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterUIUtility;

// ********** End Class UBetterUIUtility ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Utility_BetterUIUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

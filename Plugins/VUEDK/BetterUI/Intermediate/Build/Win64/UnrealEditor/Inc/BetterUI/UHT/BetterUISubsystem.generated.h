// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BetterUISubsystem.h"

#ifdef BETTERUI_BetterUISubsystem_generated_h
#error "BetterUISubsystem.generated.h already included, missing '#pragma once' in BetterUISubsystem.h"
#endif
#define BETTERUI_BetterUISubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBetterUISubsystem *******************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterUISubsystem(); \
	friend struct Z_Construct_UClass_UBetterUISubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterUISubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterUISubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterUISubsystem_NoRegister) \
	DECLARE_SERIALIZER(UBetterUISubsystem)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterUISubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterUISubsystem(UBetterUISubsystem&&) = delete; \
	UBetterUISubsystem(const UBetterUISubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterUISubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterUISubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBetterUISubsystem) \
	NO_API virtual ~UBetterUISubsystem();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterUISubsystem;

// ********** End Class UBetterUISubsystem *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

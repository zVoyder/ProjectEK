// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BetterUISettings.h"

#ifdef BETTERUI_BetterUISettings_generated_h
#error "BetterUISettings.generated.h already included, missing '#pragma once' in BetterUISettings.h"
#endif
#define BETTERUI_BetterUISettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBetterUISettings ********************************************************
BETTERUI_API UClass* Z_Construct_UClass_UBetterUISettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterUISettings(); \
	friend struct Z_Construct_UClass_UBetterUISettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterUISettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterUISettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterUISettings_NoRegister) \
	DECLARE_SERIALIZER(UBetterUISettings) \
	static const TCHAR* StaticConfigName() {return TEXT("BetterUISettings");} \



#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterUISettings(UBetterUISettings&&) = delete; \
	UBetterUISettings(const UBetterUISettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterUISettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterUISettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterUISettings) \
	NO_API virtual ~UBetterUISettings();


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterUISettings;

// ********** End Class UBetterUISettings **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_BetterUISettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

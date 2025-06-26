// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputsHandlerSystemSettings.h"

#ifdef INPUTSHANDLERSYSTEM_InputsHandlerSystemSettings_generated_h
#error "InputsHandlerSystemSettings.generated.h already included, missing '#pragma once' in InputsHandlerSystemSettings.h"
#endif
#define INPUTSHANDLERSYSTEM_InputsHandlerSystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputsHandlerSystemSettings *********************************************
INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputsHandlerSystemSettings(); \
	friend struct Z_Construct_UClass_UInputsHandlerSystemSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputsHandlerSystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/InputsHandlerSystem"), Z_Construct_UClass_UInputsHandlerSystemSettings_NoRegister) \
	DECLARE_SERIALIZER(UInputsHandlerSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("InputsHandlerSystemSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputsHandlerSystemSettings(UInputsHandlerSystemSettings&&) = delete; \
	UInputsHandlerSystemSettings(const UInputsHandlerSystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputsHandlerSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputsHandlerSystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputsHandlerSystemSettings) \
	NO_API virtual ~UInputsHandlerSystemSettings();


#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputsHandlerSystemSettings;

// ********** End Class UInputsHandlerSystemSettings ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSystemSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

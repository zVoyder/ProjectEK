// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputsModifiers/InputModifierSettingsScalar.h"

#ifdef CUSTOMSETTINGSSYSTEM_InputModifierSettingsScalar_generated_h
#error "InputModifierSettingsScalar.generated.h already included, missing '#pragma once' in InputModifierSettingsScalar.h"
#endif
#define CUSTOMSETTINGSSYSTEM_InputModifierSettingsScalar_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputModifierSettingsScalar *********************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetScalarValue);


CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsScalar_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSettingsScalar(); \
	friend struct Z_Construct_UClass_UInputModifierSettingsScalar_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsScalar_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierSettingsScalar, UInputModifierSettingsBase, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CustomSettingsSystem"), Z_Construct_UClass_UInputModifierSettingsScalar_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierSettingsScalar)


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifierSettingsScalar(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierSettingsScalar(UInputModifierSettingsScalar&&) = delete; \
	UInputModifierSettingsScalar(const UInputModifierSettingsScalar&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifierSettingsScalar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSettingsScalar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSettingsScalar) \
	NO_API virtual ~UInputModifierSettingsScalar();


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierSettingsScalar;

// ********** End Class UInputModifierSettingsScalar ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsScalar_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

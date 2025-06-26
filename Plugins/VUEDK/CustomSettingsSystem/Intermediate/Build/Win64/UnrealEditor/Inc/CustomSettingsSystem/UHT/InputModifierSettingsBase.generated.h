// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputsModifiers/InputModifierSettingsBase.h"

#ifdef CUSTOMSETTINGSSYSTEM_InputModifierSettingsBase_generated_h
#error "InputModifierSettingsBase.generated.h already included, missing '#pragma once' in InputModifierSettingsBase.h"
#endif
#define CUSTOMSETTINGSSYSTEM_InputModifierSettingsBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UInputModifierSettingsBase ***********************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSettingsApplied);


CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputModifierSettingsBase(); \
	friend struct Z_Construct_UClass_UInputModifierSettingsBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UInputModifierSettingsBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputModifierSettingsBase, UInputModifier, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/CustomSettingsSystem"), Z_Construct_UClass_UInputModifierSettingsBase_NoRegister) \
	DECLARE_SERIALIZER(UInputModifierSettingsBase)


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputModifierSettingsBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputModifierSettingsBase(UInputModifierSettingsBase&&) = delete; \
	UInputModifierSettingsBase(const UInputModifierSettingsBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputModifierSettingsBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputModifierSettingsBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputModifierSettingsBase) \
	NO_API virtual ~UInputModifierSettingsBase();


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputModifierSettingsBase;

// ********** End Class UInputModifierSettingsBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_InputsModifiers_InputModifierSettingsBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

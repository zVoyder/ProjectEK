// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/InputsHandlerUtility.h"

#ifdef INPUTSHANDLERSYSTEM_InputsHandlerUtility_generated_h
#error "InputsHandlerUtility.generated.h already included, missing '#pragma once' in InputsHandlerUtility.h"
#endif
#define INPUTSHANDLERSYSTEM_InputsHandlerUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEnhancedInputUserSettings;

// ********** Begin Class UInputsHandlerUtility ****************************************************
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsUsingGamepad); \
	DECLARE_FUNCTION(execSetModeUI); \
	DECLARE_FUNCTION(execSetModeGameplay); \
	DECLARE_FUNCTION(execGetEnhancedInputUserSettings);


INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputsHandlerUtility(); \
	friend struct Z_Construct_UClass_UInputsHandlerUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputsHandlerUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputsHandlerSystem"), Z_Construct_UClass_UInputsHandlerUtility_NoRegister) \
	DECLARE_SERIALIZER(UInputsHandlerUtility)


#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputsHandlerUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputsHandlerUtility(UInputsHandlerUtility&&) = delete; \
	UInputsHandlerUtility(const UInputsHandlerUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputsHandlerUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputsHandlerUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputsHandlerUtility) \
	NO_API virtual ~UInputsHandlerUtility();


#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputsHandlerUtility;

// ********** End Class UInputsHandlerUtility ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Utility_InputsHandlerUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InputsHandlerSubsystem.h"

#ifdef INPUTSHANDLERSYSTEM_InputsHandlerSubsystem_generated_h
#error "InputsHandlerSubsystem.generated.h already included, missing '#pragma once' in InputsHandlerSubsystem.h"
#endif
#define INPUTSHANDLERSYSTEM_InputsHandlerSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UEnhancedInputUserSettings;
class UInputMappingContext;
struct FInputDeviceId;
struct FPlatformUserId;

// ********** Begin Delegate FOnGampleayMappingContextSet ******************************************
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_16_DELEGATE \
INPUTSHANDLERSYSTEM_API void FOnGampleayMappingContextSet_DelegateWrapper(const FMulticastScriptDelegate& OnGampleayMappingContextSet);


// ********** End Delegate FOnGampleayMappingContextSet ********************************************

// ********** Begin Delegate FOnUIMappingContextSet ************************************************
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_20_DELEGATE \
INPUTSHANDLERSYSTEM_API void FOnUIMappingContextSet_DelegateWrapper(const FMulticastScriptDelegate& OnUIMappingContextSet);


// ********** End Delegate FOnUIMappingContextSet **************************************************

// ********** Begin Class UInputsHandlerSubsystem **************************************************
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckUsingGamepad); \
	DECLARE_FUNCTION(execIsInputModeUI); \
	DECLARE_FUNCTION(execIsInputModeGameplay); \
	DECLARE_FUNCTION(execIsUsingGamepad); \
	DECLARE_FUNCTION(execGetUIMappingContext); \
	DECLARE_FUNCTION(execGetGameplayMappingContext); \
	DECLARE_FUNCTION(execGetUIMappingContexts); \
	DECLARE_FUNCTION(execGetGameplayMappingContexts); \
	DECLARE_FUNCTION(execGetCommonMappingContexts); \
	DECLARE_FUNCTION(execGetAllMappingContexts); \
	DECLARE_FUNCTION(execSetModeUI); \
	DECLARE_FUNCTION(execSetModeGameplay); \
	DECLARE_FUNCTION(execRemoveExcludedMappingContext); \
	DECLARE_FUNCTION(execAddExcludedMappingContext); \
	DECLARE_FUNCTION(execRemoveUIMappingContext); \
	DECLARE_FUNCTION(execAddUIMappingContext); \
	DECLARE_FUNCTION(execRemoveGameplayMappingContext); \
	DECLARE_FUNCTION(execAddGameplayMappingContext); \
	DECLARE_FUNCTION(execRemoveCommonMappingContext); \
	DECLARE_FUNCTION(execAddCommonMappingContext); \
	DECLARE_FUNCTION(execGetEnhancedInputUserSettings); \
	DECLARE_FUNCTION(execGetNormalizedMousePosition);


INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputsHandlerSubsystem(); \
	friend struct Z_Construct_UClass_UInputsHandlerSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INPUTSHANDLERSYSTEM_API UClass* Z_Construct_UClass_UInputsHandlerSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UInputsHandlerSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InputsHandlerSystem"), Z_Construct_UClass_UInputsHandlerSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UInputsHandlerSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInputsHandlerSubsystem(UInputsHandlerSubsystem&&) = delete; \
	UInputsHandlerSubsystem(const UInputsHandlerSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputsHandlerSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputsHandlerSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputsHandlerSubsystem) \
	NO_API virtual ~UInputsHandlerSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_22_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInputsHandlerSubsystem;

// ********** End Class UInputsHandlerSubsystem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_InputsHandlerSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

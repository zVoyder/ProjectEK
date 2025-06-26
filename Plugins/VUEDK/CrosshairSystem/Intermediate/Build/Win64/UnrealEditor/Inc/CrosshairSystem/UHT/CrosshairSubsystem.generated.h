// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrosshairSubsystem.h"

#ifdef CROSSHAIRSYSTEM_CrosshairSubsystem_generated_h
#error "CrosshairSubsystem.generated.h already included, missing '#pragma once' in CrosshairSubsystem.h"
#endif
#define CROSSHAIRSYSTEM_CrosshairSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCrosshairWidget;
class UObject;
class UUserWidget;

// ********** Begin Class UCrosshairSubsystem ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompleteSwitchCrosshairs); \
	DECLARE_FUNCTION(execOnSwitchCrosshairs); \
	DECLARE_FUNCTION(execIsCrosshairVisible); \
	DECLARE_FUNCTION(execIsSwitchingCrosshairs); \
	DECLARE_FUNCTION(execHideCrosshair); \
	DECLARE_FUNCTION(execShowCrosshair); \
	DECLARE_FUNCTION(execGetCurrentCrosshairWidget); \
	DECLARE_FUNCTION(execRemoveCrosshairFromViewport); \
	DECLARE_FUNCTION(execCloseCrosshairInViewport); \
	DECLARE_FUNCTION(execOpenCrosshairInViewport); \
	DECLARE_FUNCTION(execSetCrosshairInViewport); \
	DECLARE_FUNCTION(execSetDefaultCrosshairInViewport);


CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairSubsystem(); \
	friend struct Z_Construct_UClass_UCrosshairSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairSubsystem, ULocalPlayerSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrosshairSystem"), Z_Construct_UClass_UCrosshairSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairSubsystem(UCrosshairSubsystem&&) = delete; \
	UCrosshairSubsystem(const UCrosshairSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrosshairSubsystem) \
	NO_API virtual ~UCrosshairSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairSubsystem;

// ********** End Class UCrosshairSubsystem ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

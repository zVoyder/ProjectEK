// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrosshairComponent.h"

#ifdef CROSSHAIRSYSTEM_CrosshairComponent_generated_h
#error "CrosshairComponent.generated.h already included, missing '#pragma once' in CrosshairComponent.h"
#endif
#define CROSSHAIRSYSTEM_CrosshairComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;

// ********** Begin Class UCrosshairComponent ******************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCloseCrosshairInViewport); \
	DECLARE_FUNCTION(execHideCrosshair); \
	DECLARE_FUNCTION(execShowCrosshair); \
	DECLARE_FUNCTION(execSetCrosshair); \
	DECLARE_FUNCTION(execSetDefaultCrosshair); \
	DECLARE_FUNCTION(execSetPayload);


CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairComponent_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairComponent(); \
	friend struct Z_Construct_UClass_UCrosshairComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrosshairSystem"), Z_Construct_UClass_UCrosshairComponent_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairComponent)


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairComponent(UCrosshairComponent&&) = delete; \
	UCrosshairComponent(const UCrosshairComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCrosshairComponent) \
	NO_API virtual ~UCrosshairComponent();


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairComponent;

// ********** End Class UCrosshairComponent ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/CrosshairsUtility.h"

#ifdef CROSSHAIRSYSTEM_CrosshairsUtility_generated_h
#error "CrosshairsUtility.generated.h already included, missing '#pragma once' in CrosshairsUtility.h"
#endif
#define CROSSHAIRSYSTEM_CrosshairsUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCrosshairWidget;
class UObject;
class UUserWidget;

// ********** Begin Class UCrosshairsUtility *******************************************************
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
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


CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairsUtility(); \
	friend struct Z_Construct_UClass_UCrosshairsUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairsUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CrosshairSystem"), Z_Construct_UClass_UCrosshairsUtility_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairsUtility)


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCrosshairsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairsUtility(UCrosshairsUtility&&) = delete; \
	UCrosshairsUtility(const UCrosshairsUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairsUtility) \
	NO_API virtual ~UCrosshairsUtility();


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairsUtility;

// ********** End Class UCrosshairsUtility *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_Utility_CrosshairsUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

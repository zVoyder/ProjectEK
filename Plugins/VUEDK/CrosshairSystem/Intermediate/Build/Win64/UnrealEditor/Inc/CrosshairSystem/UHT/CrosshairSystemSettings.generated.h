// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CrosshairSystemSettings.h"

#ifdef CROSSHAIRSYSTEM_CrosshairSystemSettings_generated_h
#error "CrosshairSystemSettings.generated.h already included, missing '#pragma once' in CrosshairSystemSettings.h"
#endif
#define CROSSHAIRSYSTEM_CrosshairSystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCrosshairSystemSettings *************************************************
CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSystemSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCrosshairSystemSettings(); \
	friend struct Z_Construct_UClass_UCrosshairSystemSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CROSSHAIRSYSTEM_API UClass* Z_Construct_UClass_UCrosshairSystemSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UCrosshairSystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/CrosshairSystem"), Z_Construct_UClass_UCrosshairSystemSettings_NoRegister) \
	DECLARE_SERIALIZER(UCrosshairSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("CrosshairSystemSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCrosshairSystemSettings(UCrosshairSystemSettings&&) = delete; \
	UCrosshairSystemSettings(const UCrosshairSystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCrosshairSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCrosshairSystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCrosshairSystemSettings) \
	NO_API virtual ~UCrosshairSystemSettings();


#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCrosshairSystemSettings;

// ********** End Class UCrosshairSystemSettings ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CrosshairSystem_Source_CrosshairSystem_Public_CrosshairSystemSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

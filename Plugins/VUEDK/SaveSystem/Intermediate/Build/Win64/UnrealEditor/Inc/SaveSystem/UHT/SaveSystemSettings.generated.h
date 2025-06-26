// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSystemSettings.h"

#ifdef SAVESYSTEM_SaveSystemSettings_generated_h
#error "SaveSystemSettings.generated.h already included, missing '#pragma once' in SaveSystemSettings.h"
#endif
#define SAVESYSTEM_SaveSystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USaveSystemSettings ******************************************************
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveSystemSettings(); \
	friend struct Z_Construct_UClass_USaveSystemSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSystemSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(USaveSystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USaveSystemSettings_NoRegister) \
	DECLARE_SERIALIZER(USaveSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("SaveSystemSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveSystemSettings(USaveSystemSettings&&) = delete; \
	USaveSystemSettings(const USaveSystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSystemSettings) \
	NO_API virtual ~USaveSystemSettings();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveSystemSettings;

// ********** End Class USaveSystemSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSystemSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

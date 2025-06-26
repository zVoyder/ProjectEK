// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DismembererSystemSettings.h"

#ifdef DISMEMBERERSYSTEM_DismembererSystemSettings_generated_h
#error "DismembererSystemSettings.generated.h already included, missing '#pragma once' in DismembererSystemSettings.h"
#endif
#define DISMEMBERERSYSTEM_DismembererSystemSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDismembererSystemSettings ***********************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererSystemSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismembererSystemSettings(); \
	friend struct Z_Construct_UClass_UDismembererSystemSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismembererSystemSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UDismembererSystemSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/DismembererSystem"), Z_Construct_UClass_UDismembererSystemSettings_NoRegister) \
	DECLARE_SERIALIZER(UDismembererSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("DismembererSystemSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDismembererSystemSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDismembererSystemSettings(UDismembererSystemSettings&&) = delete; \
	UDismembererSystemSettings(const UDismembererSystemSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismembererSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismembererSystemSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDismembererSystemSettings) \
	NO_API virtual ~UDismembererSystemSettings();


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDismembererSystemSettings;

// ********** End Class UDismembererSystemSettings *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_DismembererSystemSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

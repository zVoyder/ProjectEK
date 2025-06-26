// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/CustomGameUserSettingsUtility.h"

#ifdef CUSTOMSETTINGSSYSTEM_CustomGameUserSettingsUtility_generated_h
#error "CustomGameUserSettingsUtility.generated.h already included, missing '#pragma once' in CustomGameUserSettingsUtility.h"
#endif
#define CUSTOMSETTINGSSYSTEM_CustomGameUserSettingsUtility_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCustomGameUserSettings;

// ********** Begin Class UCustomUserSettingsUtility ***********************************************
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCustomUserSettings);


CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomUserSettingsUtility_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomUserSettingsUtility(); \
	friend struct Z_Construct_UClass_UCustomUserSettingsUtility_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CUSTOMSETTINGSSYSTEM_API UClass* Z_Construct_UClass_UCustomUserSettingsUtility_NoRegister(); \
public: \
	DECLARE_CLASS2(UCustomUserSettingsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CustomSettingsSystem"), Z_Construct_UClass_UCustomUserSettingsUtility_NoRegister) \
	DECLARE_SERIALIZER(UCustomUserSettingsUtility)


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomUserSettingsUtility(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCustomUserSettingsUtility(UCustomUserSettingsUtility&&) = delete; \
	UCustomUserSettingsUtility(const UCustomUserSettingsUtility&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomUserSettingsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomUserSettingsUtility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomUserSettingsUtility) \
	NO_API virtual ~UCustomUserSettingsUtility();


#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCustomUserSettingsUtility;

// ********** End Class UCustomUserSettingsUtility *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_CustomSettingsSystem_Source_CustomSettingsSystem_Public_Utility_CustomGameUserSettingsUtility_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

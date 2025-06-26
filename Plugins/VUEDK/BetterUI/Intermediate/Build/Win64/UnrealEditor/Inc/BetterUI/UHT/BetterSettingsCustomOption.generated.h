// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BetterSettingsCustomOption.h"

#ifdef BETTERUI_BetterSettingsCustomOption_generated_h
#error "BetterSettingsCustomOption.generated.h already included, missing '#pragma once' in BetterSettingsCustomOption.h"
#endif
#define BETTERUI_BetterSettingsCustomOption_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FGameplayTag;

// ********** Begin Interface UBetterSettingsCustomOption ******************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsCustomOption_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterSettingsCustomOption(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterSettingsCustomOption(UBetterSettingsCustomOption&&) = delete; \
	UBetterSettingsCustomOption(const UBetterSettingsCustomOption&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterSettingsCustomOption); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterSettingsCustomOption); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterSettingsCustomOption) \
	virtual ~UBetterSettingsCustomOption() = default;


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBetterSettingsCustomOption(); \
	friend struct Z_Construct_UClass_UBetterSettingsCustomOption_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterSettingsCustomOption_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterSettingsCustomOption, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterSettingsCustomOption_NoRegister) \
	DECLARE_SERIALIZER(UBetterSettingsCustomOption)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBetterSettingsCustomOption() {} \
public: \
	typedef UBetterSettingsCustomOption UClassType; \
	typedef IBetterSettingsCustomOption ThisClass; \
	static FGameplayTag Execute_GetTag(const UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterSettingsCustomOption;

// ********** End Interface UBetterSettingsCustomOption ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSettingsCustomOption_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

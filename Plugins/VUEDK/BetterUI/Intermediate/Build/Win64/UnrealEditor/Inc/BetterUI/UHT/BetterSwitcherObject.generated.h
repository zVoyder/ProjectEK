// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BetterSwitcherObject.h"

#ifdef BETTERUI_BetterSwitcherObject_generated_h
#error "BetterSwitcherObject.generated.h already included, missing '#pragma once' in BetterSwitcherObject.h"
#endif
#define BETTERUI_BetterSwitcherObject_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBetterSwitcherObject ************************************************
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SwitcherActivatedWidget_Implementation() {}; \
	DECLARE_FUNCTION(execSwitcherActivatedWidget);


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_CALLBACK_WRAPPERS
BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitcherObject_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterSwitcherObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBetterSwitcherObject(UBetterSwitcherObject&&) = delete; \
	UBetterSwitcherObject(const UBetterSwitcherObject&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterSwitcherObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterSwitcherObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterSwitcherObject) \
	virtual ~UBetterSwitcherObject() = default;


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBetterSwitcherObject(); \
	friend struct Z_Construct_UClass_UBetterSwitcherObject_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BETTERUI_API UClass* Z_Construct_UClass_UBetterSwitcherObject_NoRegister(); \
public: \
	DECLARE_CLASS2(UBetterSwitcherObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BetterUI"), Z_Construct_UClass_UBetterSwitcherObject_NoRegister) \
	DECLARE_SERIALIZER(UBetterSwitcherObject)


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBetterSwitcherObject() {} \
public: \
	typedef UBetterSwitcherObject UClassType; \
	typedef IBetterSwitcherObject ThisClass; \
	static void Execute_SwitcherActivatedWidget(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_CALLBACK_WRAPPERS \
	FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h_12_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBetterSwitcherObject;

// ********** End Interface UBetterSwitcherObject **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Interfaces_BetterSwitcherObject_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

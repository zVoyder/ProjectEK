// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Saveable.h"

#ifdef SAVESYSTEM_Saveable_generated_h
#error "Saveable.generated.h already included, missing '#pragma once' in Saveable.h"
#endif
#define SAVESYSTEM_Saveable_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface USaveable ************************************************************
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveable_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveable(USaveable&&) = delete; \
	USaveable(const USaveable&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveable) \
	virtual ~USaveable() = default;


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveable(); \
	friend struct Z_Construct_UClass_USaveable_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USaveable_NoRegister(); \
public: \
	DECLARE_CLASS2(USaveable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USaveable_NoRegister) \
	DECLARE_SERIALIZER(USaveable)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_GENERATED_UINTERFACE_BODY() \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveable() {} \
public: \
	typedef USaveable UClassType; \
	typedef ISaveable ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveable;

// ********** End Interface USaveable **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Interfaces_Saveable_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

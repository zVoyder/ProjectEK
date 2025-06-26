// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SaveSubsystem.h"

#ifdef SAVESYSTEM_SaveSubsystem_generated_h
#error "SaveSubsystem.generated.h already included, missing '#pragma once' in SaveSubsystem.h"
#endif
#define SAVESYSTEM_SaveSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USaveSubsystem ***********************************************************
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveSubsystem(); \
	friend struct Z_Construct_UClass_USaveSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USaveSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(USaveSubsystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USaveSubsystem_NoRegister) \
	DECLARE_SERIALIZER(USaveSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveSubsystem(USaveSubsystem&&) = delete; \
	USaveSubsystem(const USaveSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveSubsystem) \
	NO_API virtual ~USaveSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveSubsystem;

// ********** End Class USaveSubsystem *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_SaveSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

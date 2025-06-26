// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectPoolSettings.h"

#ifdef OBJECTPOOL_ObjectPoolSettings_generated_h
#error "ObjectPoolSettings.generated.h already included, missing '#pragma once' in ObjectPoolSettings.h"
#endif
#define OBJECTPOOL_ObjectPoolSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectPoolSettings ******************************************************
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSettings_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolSettings(); \
	friend struct Z_Construct_UClass_UObjectPoolSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPoolSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_UObjectPoolSettings_NoRegister) \
	DECLARE_SERIALIZER(UObjectPoolSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("ObjectPoolSettings");} \



#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPoolSettings(UObjectPoolSettings&&) = delete; \
	UObjectPoolSettings(const UObjectPoolSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolSettings) \
	NO_API virtual ~UObjectPoolSettings();


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPoolSettings;

// ********** End Class UObjectPoolSettings ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

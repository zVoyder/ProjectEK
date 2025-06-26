// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectPoolSubsystem.h"

#ifdef OBJECTPOOL_ObjectPoolSubsystem_generated_h
#error "ObjectPoolSubsystem.generated.h already included, missing '#pragma once' in ObjectPoolSubsystem.h"
#endif
#define OBJECTPOOL_ObjectPoolSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UObjectPoolSubsystem *****************************************************
OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolSubsystem(); \
	friend struct Z_Construct_UClass_UObjectPoolSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UObjectPoolSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_UObjectPoolSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UObjectPoolSubsystem)


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UObjectPoolSubsystem(UObjectPoolSubsystem&&) = delete; \
	UObjectPoolSubsystem(const UObjectPoolSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPoolSubsystem) \
	NO_API virtual ~UObjectPoolSubsystem();


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h_13_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h_16_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UObjectPoolSubsystem;

// ********** End Class UObjectPoolSubsystem *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_ObjectPoolSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

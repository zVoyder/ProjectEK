// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PoolsManager.h"

#ifdef OBJECTPOOL_PoolsManager_generated_h
#error "PoolsManager.generated.h already included, missing '#pragma once' in PoolsManager.h"
#endif
#define OBJECTPOOL_PoolsManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPoolsManager ************************************************************
OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsManager_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPoolsManager(); \
	friend struct Z_Construct_UClass_UPoolsManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBJECTPOOL_API UClass* Z_Construct_UClass_UPoolsManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UPoolsManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ObjectPool"), Z_Construct_UClass_UPoolsManager_NoRegister) \
	DECLARE_SERIALIZER(UPoolsManager)


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPoolsManager(UPoolsManager&&) = delete; \
	UPoolsManager(const UPoolsManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPoolsManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPoolsManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPoolsManager) \
	NO_API virtual ~UPoolsManager();


#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPoolsManager;

// ********** End Class UPoolsManager **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_ObjectPool_Source_ObjectPool_Public_PoolsManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

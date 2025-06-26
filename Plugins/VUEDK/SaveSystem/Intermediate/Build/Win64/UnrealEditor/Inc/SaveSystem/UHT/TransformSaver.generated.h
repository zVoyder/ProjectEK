// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/Savers/TransformSaver.h"

#ifdef SAVESYSTEM_TransformSaver_generated_h
#error "TransformSaver.generated.h already included, missing '#pragma once' in TransformSaver.h"
#endif
#define SAVESYSTEM_TransformSaver_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UTransformSaver **********************************************************
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOwnerTransform);


SAVESYSTEM_API UClass* Z_Construct_UClass_UTransformSaver_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTransformSaver(); \
	friend struct Z_Construct_UClass_UTransformSaver_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_UTransformSaver_NoRegister(); \
public: \
	DECLARE_CLASS2(UTransformSaver, USaver, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_UTransformSaver_NoRegister) \
	DECLARE_SERIALIZER(UTransformSaver)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTransformSaver(UTransformSaver&&) = delete; \
	UTransformSaver(const UTransformSaver&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTransformSaver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTransformSaver); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTransformSaver) \
	NO_API virtual ~UTransformSaver();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTransformSaver;

// ********** End Class UTransformSaver ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Components_Savers_TransformSaver_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DismemberableAvatarData.h"

#ifdef DISMEMBERERSYSTEM_DismemberableAvatarData_generated_h
#error "DismemberableAvatarData.generated.h already included, missing '#pragma once' in DismemberableAvatarData.h"
#endif
#define DISMEMBERERSYSTEM_DismemberableAvatarData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDismemberableAvatarData *************************************************
DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberableAvatarData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDismemberableAvatarData(); \
	friend struct Z_Construct_UClass_UDismemberableAvatarData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DISMEMBERERSYSTEM_API UClass* Z_Construct_UClass_UDismemberableAvatarData_NoRegister(); \
public: \
	DECLARE_CLASS2(UDismemberableAvatarData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DismembererSystem"), Z_Construct_UClass_UDismemberableAvatarData_NoRegister) \
	DECLARE_SERIALIZER(UDismemberableAvatarData)


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDismemberableAvatarData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDismemberableAvatarData(UDismemberableAvatarData&&) = delete; \
	UDismemberableAvatarData(const UDismemberableAvatarData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDismemberableAvatarData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDismemberableAvatarData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDismemberableAvatarData) \
	NO_API virtual ~UDismemberableAvatarData();


#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h_11_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDismemberableAvatarData;

// ********** End Class UDismemberableAvatarData ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_DismembererSystem_Source_DismembererSystem_Public_Data_DismemberableAvatarData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

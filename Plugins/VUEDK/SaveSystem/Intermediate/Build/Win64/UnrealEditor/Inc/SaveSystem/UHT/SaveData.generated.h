// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/SaveData.h"

#ifdef SAVESYSTEM_SaveData_generated_h
#error "SaveData.generated.h already included, missing '#pragma once' in SaveData.h"
#endif
#define SAVESYSTEM_SaveData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USaveData ****************************************************************
SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveData(); \
	friend struct Z_Construct_UClass_USaveData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAVESYSTEM_API UClass* Z_Construct_UClass_USaveData_NoRegister(); \
public: \
	DECLARE_CLASS2(USaveData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SaveSystem"), Z_Construct_UClass_USaveData_NoRegister) \
	DECLARE_SERIALIZER(USaveData)


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USaveData(USaveData&&) = delete; \
	USaveData(const USaveData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveData) \
	NO_API virtual ~USaveData();


#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USaveData;

// ********** End Class USaveData ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_SaveData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

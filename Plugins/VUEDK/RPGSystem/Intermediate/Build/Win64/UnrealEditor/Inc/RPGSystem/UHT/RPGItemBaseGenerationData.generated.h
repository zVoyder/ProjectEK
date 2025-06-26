// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGItemsGeneration/Data/Generations/Base/RPGItemBaseGenerationData.h"

#ifdef RPGSYSTEM_RPGItemBaseGenerationData_generated_h
#error "RPGItemBaseGenerationData.generated.h already included, missing '#pragma once' in RPGItemBaseGenerationData.h"
#endif
#define RPGSYSTEM_RPGItemBaseGenerationData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGItemBaseGenerationData ***********************************************
RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGItemBaseGenerationData(); \
	friend struct Z_Construct_UClass_URPGItemBaseGenerationData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGSYSTEM_API UClass* Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGItemBaseGenerationData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGSystem"), Z_Construct_UClass_URPGItemBaseGenerationData_NoRegister) \
	DECLARE_SERIALIZER(URPGItemBaseGenerationData)


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGItemBaseGenerationData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGItemBaseGenerationData(URPGItemBaseGenerationData&&) = delete; \
	URPGItemBaseGenerationData(const URPGItemBaseGenerationData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGItemBaseGenerationData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGItemBaseGenerationData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGItemBaseGenerationData) \
	NO_API virtual ~URPGItemBaseGenerationData();


#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h_10_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h_13_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGItemBaseGenerationData;

// ********** End Class URPGItemBaseGenerationData *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_RPGSystem_Source_RPGSystem_Public_RPGItemsGeneration_Data_Generations_Base_RPGItemBaseGenerationData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

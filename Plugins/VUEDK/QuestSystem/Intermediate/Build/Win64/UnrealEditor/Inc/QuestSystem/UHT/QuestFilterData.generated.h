// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DataAssets/QuestFilterData.h"

#ifdef QUESTSYSTEM_QuestFilterData_generated_h
#error "QuestFilterData.generated.h already included, missing '#pragma once' in QuestFilterData.h"
#endif
#define QUESTSYSTEM_QuestFilterData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UQuestFilterData *********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestFilterData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestFilterData(); \
	friend struct Z_Construct_UClass_UQuestFilterData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UQuestFilterData_NoRegister(); \
public: \
	DECLARE_CLASS2(UQuestFilterData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UQuestFilterData_NoRegister) \
	DECLARE_SERIALIZER(UQuestFilterData)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestFilterData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UQuestFilterData(UQuestFilterData&&) = delete; \
	UQuestFilterData(const UQuestFilterData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestFilterData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestFilterData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestFilterData) \
	NO_API virtual ~UQuestFilterData();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UQuestFilterData;

// ********** End Class UQuestFilterData ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_QuestFilterData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

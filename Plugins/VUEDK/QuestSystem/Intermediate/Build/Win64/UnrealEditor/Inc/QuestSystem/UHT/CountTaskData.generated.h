// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/DataAssets/CountTaskData.h"

#ifdef QUESTSYSTEM_CountTaskData_generated_h
#error "CountTaskData.generated.h already included, missing '#pragma once' in CountTaskData.h"
#endif
#define QUESTSYSTEM_CountTaskData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCountTaskData ***********************************************************
QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTaskData_NoRegister();

#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCountTaskData(); \
	friend struct Z_Construct_UClass_UCountTaskData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUESTSYSTEM_API UClass* Z_Construct_UClass_UCountTaskData_NoRegister(); \
public: \
	DECLARE_CLASS2(UCountTaskData, UTaskData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QuestSystem"), Z_Construct_UClass_UCountTaskData_NoRegister) \
	DECLARE_SERIALIZER(UCountTaskData)


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCountTaskData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCountTaskData(UCountTaskData&&) = delete; \
	UCountTaskData(const UCountTaskData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCountTaskData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCountTaskData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCountTaskData) \
	NO_API virtual ~UCountTaskData();


#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h_9_PROLOG
#define FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCountTaskData;

// ********** End Class UCountTaskData *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_DataAssets_CountTaskData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS

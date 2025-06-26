// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enums/TaskType.h"

#ifdef QUESTSYSTEM_TaskType_generated_h
#error "TaskType.generated.h already included, missing '#pragma once' in TaskType.h"
#endif
#define QUESTSYSTEM_TaskType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_TaskType_h

// ********** Begin Enum ETaskType *****************************************************************
#define FOREACH_ENUM_ETASKTYPE(op) \
	op(ETaskType::None) \
	op(ETaskType::Single) \
	op(ETaskType::Count) 

enum class ETaskType : uint8;
template<> struct TIsUEnumClass<ETaskType> { enum { Value = true }; };
template<> QUESTSYSTEM_API UEnum* StaticEnum<ETaskType>();
// ********** End Enum ETaskType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

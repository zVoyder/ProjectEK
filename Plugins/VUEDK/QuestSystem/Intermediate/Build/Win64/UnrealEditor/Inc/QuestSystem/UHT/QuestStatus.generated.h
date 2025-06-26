// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enums/QuestStatus.h"

#ifdef QUESTSYSTEM_QuestStatus_generated_h
#error "QuestStatus.generated.h already included, missing '#pragma once' in QuestStatus.h"
#endif
#define QUESTSYSTEM_QuestStatus_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestStatus_h

// ********** Begin Enum EQuestStatus **************************************************************
#define FOREACH_ENUM_EQUESTSTATUS(op) \
	op(EQuestStatus::None) \
	op(EQuestStatus::Active) \
	op(EQuestStatus::Inactive) \
	op(EQuestStatus::Completed) 

enum class EQuestStatus : uint8;
template<> struct TIsUEnumClass<EQuestStatus> { enum { Value = true }; };
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestStatus>();
// ********** End Enum EQuestStatus ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

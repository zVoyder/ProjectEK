// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enums/QuestType.h"

#ifdef QUESTSYSTEM_QuestType_generated_h
#error "QuestType.generated.h already included, missing '#pragma once' in QuestType.h"
#endif
#define QUESTSYSTEM_QuestType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_QuestSystem_Source_QuestSystem_Public_Data_Enums_QuestType_h

// ********** Begin Enum EQuestType ****************************************************************
#define FOREACH_ENUM_EQUESTTYPE(op) \
	op(EQuestType::None) \
	op(EQuestType::Parallel) \
	op(EQuestType::Sequential) 

enum class EQuestType : uint8;
template<> struct TIsUEnumClass<EQuestType> { enum { Value = true }; };
template<> QUESTSYSTEM_API UEnum* StaticEnum<EQuestType>();
// ********** End Enum EQuestType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

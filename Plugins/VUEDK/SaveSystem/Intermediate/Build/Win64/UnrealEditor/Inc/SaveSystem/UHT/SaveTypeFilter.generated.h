// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/Enums/SaveTypeFilter.h"

#ifdef SAVESYSTEM_SaveTypeFilter_generated_h
#error "SaveTypeFilter.generated.h already included, missing '#pragma once' in SaveTypeFilter.h"
#endif
#define SAVESYSTEM_SaveTypeFilter_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_SaveSystem_Source_SaveSystem_Public_Data_Enums_SaveTypeFilter_h

// ********** Begin Enum ESaveTypeFilter ***********************************************************
#define FOREACH_ENUM_ESAVETYPEFILTER(op) \
	op(ESaveTypeFilter::All) \
	op(ESaveTypeFilter::Manual) \
	op(ESaveTypeFilter::Auto) 

enum class ESaveTypeFilter : uint8;
template<> struct TIsUEnumClass<ESaveTypeFilter> { enum { Value = true }; };
template<> SAVESYSTEM_API UEnum* StaticEnum<ESaveTypeFilter>();
// ********** End Enum ESaveTypeFilter *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

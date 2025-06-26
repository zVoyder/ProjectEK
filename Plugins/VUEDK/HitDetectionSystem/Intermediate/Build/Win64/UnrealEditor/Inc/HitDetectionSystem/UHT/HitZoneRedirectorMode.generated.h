// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/HitZoneRedirectorMode.h"

#ifdef HITDETECTIONSYSTEM_HitZoneRedirectorMode_generated_h
#error "HitZoneRedirectorMode.generated.h already included, missing '#pragma once' in HitZoneRedirectorMode.h"
#endif
#define HITDETECTIONSYSTEM_HitZoneRedirectorMode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_HitDetectionSystem_Source_HitDetectionSystem_Public_Data_HitZoneRedirectorMode_h

// ********** Begin Enum EHitZoneRedirectorMode ****************************************************
#define FOREACH_ENUM_EHITZONEREDIRECTORMODE(op) \
	op(EHitZoneRedirectorMode::None) \
	op(EHitZoneRedirectorMode::CustomName) \
	op(EHitZoneRedirectorMode::AttachedBoneName) 

enum class EHitZoneRedirectorMode : uint8;
template<> struct TIsUEnumClass<EHitZoneRedirectorMode> { enum { Value = true }; };
template<> HITDETECTIONSYSTEM_API UEnum* StaticEnum<EHitZoneRedirectorMode>();
// ********** End Enum EHitZoneRedirectorMode ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

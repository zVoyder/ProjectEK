// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/HitZoneRedirectorMode.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HITBOXSYSTEM_HitZoneRedirectorMode_generated_h
#error "HitZoneRedirectorMode.generated.h already included, missing '#pragma once' in HitZoneRedirectorMode.h"
#endif
#define HITBOXSYSTEM_HitZoneRedirectorMode_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectBW_Plugins_VUEDK_HitBoxSystem_Source_HitBoxSystem_Public_Data_HitZoneRedirectorMode_h


#define FOREACH_ENUM_EHITZONEREDIRECTORMODE(op) \
	op(EHitZoneRedirectorMode::None) \
	op(EHitZoneRedirectorMode::CustomName) \
	op(EHitZoneRedirectorMode::AttachedBoneName) 

enum class EHitZoneRedirectorMode : uint8;
template<> struct TIsUEnumClass<EHitZoneRedirectorMode> { enum { Value = true }; };
template<> HITBOXSYSTEM_API UEnum* StaticEnum<EHitZoneRedirectorMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

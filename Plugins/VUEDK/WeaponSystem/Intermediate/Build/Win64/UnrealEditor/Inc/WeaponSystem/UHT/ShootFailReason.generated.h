// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Data/ShootFailReason.h"

#ifdef WEAPONSYSTEM_ShootFailReason_generated_h
#error "ShootFailReason.generated.h already included, missing '#pragma once' in ShootFailReason.h"
#endif
#define WEAPONSYSTEM_ShootFailReason_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootFailReason_h

// ********** Begin Enum EShootFailReason **********************************************************
#define FOREACH_ENUM_ESHOOTFAILREASON(op) \
	op(EShootFailReason::Error) \
	op(EShootFailReason::CoolDown) \
	op(EShootFailReason::NoAmmo) \
	op(EShootFailReason::Condition) \
	op(EShootFailReason::NoShootPoints) \
	op(EShootFailReason::Disabled) 

enum class EShootFailReason : uint8;
template<> struct TIsUEnumClass<EShootFailReason> { enum { Value = true }; };
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EShootFailReason>();
// ********** End Enum EShootFailReason ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

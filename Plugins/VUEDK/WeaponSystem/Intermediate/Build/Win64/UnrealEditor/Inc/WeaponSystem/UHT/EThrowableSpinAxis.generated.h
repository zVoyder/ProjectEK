// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Thrower/Data/EThrowableSpinAxis.h"

#ifdef WEAPONSYSTEM_EThrowableSpinAxis_generated_h
#error "EThrowableSpinAxis.generated.h already included, missing '#pragma once' in EThrowableSpinAxis.h"
#endif
#define WEAPONSYSTEM_EThrowableSpinAxis_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Thrower_Data_EThrowableSpinAxis_h

// ********** Begin Enum EThrowableSpinAxis ********************************************************
#define FOREACH_ENUM_ETHROWABLESPINAXIS(op) \
	op(ThrowableSpinAxis_Up) \
	op(ThrowableSpinAxis_Down) \
	op(ThrowableSpinAxis_Left) \
	op(ThrowableSpinAxis_Right) \
	op(ThrowableSpinAxis_Forward) \
	op(ThrowableSpinAxis_Backward) \
	op(ThrowableSpinAxis_Custom) 

enum EThrowableSpinAxis : uint8;
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EThrowableSpinAxis>();
// ********** End Enum EThrowableSpinAxis **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

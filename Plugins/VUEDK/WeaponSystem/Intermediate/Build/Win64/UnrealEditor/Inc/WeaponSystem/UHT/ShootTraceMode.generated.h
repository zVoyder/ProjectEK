// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Data/ShootTraceMode.h"

#ifdef WEAPONSYSTEM_ShootTraceMode_generated_h
#error "ShootTraceMode.generated.h already included, missing '#pragma once' in ShootTraceMode.h"
#endif
#define WEAPONSYSTEM_ShootTraceMode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootTraceMode_h

// ********** Begin Enum EShootTraceMode ***********************************************************
#define FOREACH_ENUM_ESHOOTTRACEMODE(op) \
	op(CameraSightTrace) \
	op(ShootPointTrace) \
	op(TargetTrace) 

enum EShootTraceMode : uint8;
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EShootTraceMode>();
// ********** End Enum EShootTraceMode *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

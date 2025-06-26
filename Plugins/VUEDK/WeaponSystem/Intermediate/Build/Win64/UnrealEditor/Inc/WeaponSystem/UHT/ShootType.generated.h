// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Shooter/Data/ShootType.h"

#ifdef WEAPONSYSTEM_ShootType_generated_h
#error "ShootType.generated.h already included, missing '#pragma once' in ShootType.h"
#endif
#define WEAPONSYSTEM_ShootType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_WeaponSystem_Source_WeaponSystem_Public_Shooter_Data_ShootType_h

// ********** Begin Enum EShootType ****************************************************************
#define FOREACH_ENUM_ESHOOTTYPE(op) \
	op(EShootType::Simultaneous) \
	op(EShootType::Sequential) 

enum class EShootType : uint8;
template<> struct TIsUEnumClass<EShootType> { enum { Value = true }; };
template<> WEAPONSYSTEM_API UEnum* StaticEnum<EShootType>();
// ********** End Enum EShootType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

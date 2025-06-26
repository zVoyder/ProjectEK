// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EquipmentSystem/Data/PreconditionsMode.h"

#ifdef INVENTORYSYSTEM_PreconditionsMode_generated_h
#error "PreconditionsMode.generated.h already included, missing '#pragma once' in PreconditionsMode.h"
#endif
#define INVENTORYSYSTEM_PreconditionsMode_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InventorySystem_Source_InventorySystem_Public_EquipmentSystem_Data_PreconditionsMode_h

// ********** Begin Enum EPreconditionsMode ********************************************************
#define FOREACH_ENUM_EPRECONDITIONSMODE(op) \
	op(All) \
	op(Any) 

enum EPreconditionsMode : uint8;
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EPreconditionsMode>();
// ********** End Enum EPreconditionsMode **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

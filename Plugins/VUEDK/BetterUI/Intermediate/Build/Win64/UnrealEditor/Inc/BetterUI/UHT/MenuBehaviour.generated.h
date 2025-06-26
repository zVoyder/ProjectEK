// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MenuBehaviour.h"

#ifdef BETTERUI_MenuBehaviour_generated_h
#error "MenuBehaviour.generated.h already included, missing '#pragma once' in MenuBehaviour.h"
#endif
#define BETTERUI_MenuBehaviour_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_BetterUI_Source_BetterUI_Public_Data_MenuBehaviour_h

// ********** Begin Enum EMenuBehaviour ************************************************************
#define FOREACH_ENUM_EMENUBEHAVIOUR(op) \
	op(EMenuBehaviour::BlockNewOpenings) \
	op(EMenuBehaviour::SwitchMenu) \
	op(EMenuBehaviour::CloseCurrentMenu) 

enum class EMenuBehaviour : uint8;
template<> struct TIsUEnumClass<EMenuBehaviour> { enum { Value = true }; };
template<> BETTERUI_API UEnum* StaticEnum<EMenuBehaviour>();
// ********** End Enum EMenuBehaviour **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

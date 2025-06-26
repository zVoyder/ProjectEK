// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/ContextsBehaviour.h"

#ifdef INPUTSHANDLERSYSTEM_ContextsBehaviour_generated_h
#error "ContextsBehaviour.generated.h already included, missing '#pragma once' in ContextsBehaviour.h"
#endif
#define INPUTSHANDLERSYSTEM_ContextsBehaviour_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectEK_Plugins_VUEDK_InputsHandlerSystem_Source_InputsHandlerSystem_Public_Data_ContextsBehaviour_h

// ********** Begin Enum EContextsBehaviour ********************************************************
#define FOREACH_ENUM_ECONTEXTSBEHAVIOUR(op) \
	op(EContextsBehaviour::Switch) \
	op(EContextsBehaviour::Priority) 

enum class EContextsBehaviour : uint8;
template<> struct TIsUEnumClass<EContextsBehaviour> { enum { Value = true }; };
template<> INPUTSHANDLERSYSTEM_API UEnum* StaticEnum<EContextsBehaviour>();
// ********** End Enum EContextsBehaviour **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Shooter/Behaviours/Handlers/CooldownHandler.h"
#include "Shooter/Behaviours/Handlers/RecoilHandler.h"
#include "Shooter/Behaviours/Handlers/SpreadHandler.h"
#include "HandlersFactory.generated.h"

UCLASS()
class WEAPONSYSTEM_API UHandlersFactory : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Creates and returns a new recoil handler for the specified shooter behaviour and shoot data.
	 * @param InBehaviour - The shooter behaviour to associate with the handler.
	 * @return Pointer to the created URecoilHandler instance.
	 */
	static URecoilHandler* CreateRecoilHandler(UShooterBehaviourBase* InBehaviour);

	/**
	 * Creates and returns a new cooldown handler for the specified shooter behaviour and shoot data.
	 * @param InBehaviour - The shooter behaviour to associate with the handler.
	 * @return Pointer to the created UCooldownHandler instance.
	 */
	static UCooldownHandler* CreateCooldownHandler(UShooterBehaviourBase* InBehaviour);

	/**
	 * Creates and returns a new spread handler for the specified shooter behaviour and shoot data.
	 * @param InBehaviour - The shooter behaviour to associate with the handler.
	 * @return Pointer to the created USpreadHandler instance.
	 */
	static USpreadHandler* CreateSpreadHandler(UShooterBehaviourBase* InBehaviour);
};

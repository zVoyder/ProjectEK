// Copyright VUEDK, Inc. All Rights Reserved.

#include "Factories/HandlersFactory.h"
#include "Shooter/Behaviours/ShooterBehaviourBase.h"

URecoilHandler* UHandlersFactory::CreateRecoilHandler(UShooterBehaviourBase* InBehaviour)
{
	URecoilHandler* RecoilHandler = NewObject<URecoilHandler>(InBehaviour);
	RecoilHandler->Init(InBehaviour);
	return RecoilHandler;
}

UCooldownHandler* UHandlersFactory::CreateCooldownHandler(UShooterBehaviourBase* InBehaviour)
{
	UCooldownHandler* CooldownHandler = NewObject<UCooldownHandler>(InBehaviour);
	CooldownHandler->Init(InBehaviour);
	return CooldownHandler;
}

USpreadHandler* UHandlersFactory::CreateSpreadHandler(UShooterBehaviourBase* InBehaviour)
{
	USpreadHandler* SpreadHandler = NewObject<USpreadHandler>(InBehaviour);
	SpreadHandler->Init(InBehaviour);
	return SpreadHandler;
}

// Copyright VUEDK, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

class FRPGSaveBridgeModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	
	virtual void ShutdownModule() override;
};

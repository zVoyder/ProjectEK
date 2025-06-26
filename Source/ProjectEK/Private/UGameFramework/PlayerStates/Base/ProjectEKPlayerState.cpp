// Copyright zVoyder, Inc. All Rights Reserved.

#include "UGameFramework/PlayerStates/Base/ProjectEKPlayerState.h"

AProjectEKPlayerState::AProjectEKPlayerState()
{
	Saver = CreateDefaultSubobject<USaver>(TEXT("Saver"));
}

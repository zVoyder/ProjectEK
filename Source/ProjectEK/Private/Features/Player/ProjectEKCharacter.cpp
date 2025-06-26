// Copyright zVoyder, Inc. All Rights Reserved.

#include "Features/Player/ProjectEKCharacter.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"

AProjectEKCharacter::AProjectEKCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	GetCapsuleComponent()->SetCapsuleSize(34.0f, 96.0f);
	GetMesh()->SetOwnerNoSee(true);

	// Set the first person mesh component
	FirstPersonRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("First Person Root"));
	FirstPersonRootComponent->SetupAttachment(GetMesh());
	FirstPersonMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Mesh"));
	FirstPersonMeshComponent->SetupAttachment(FirstPersonRootComponent);
	FirstPersonMeshComponent->SetOnlyOwnerSee(true);
	
	// Create the Camera Component
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bEnableFirstPersonFieldOfView = true;
	FirstPersonCameraComponent->bEnableFirstPersonScale = true;
	FirstPersonCameraComponent->FirstPersonFieldOfView = 70.0f;
	FirstPersonCameraComponent->FirstPersonScale = 0.6f;
	
	// Configure character movement
	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
	GetCharacterMovement()->AirControl = 0.5f;
}

UCameraComponent* AProjectEKCharacter::GetFirstPersonCameraComponent() const
{
	return FirstPersonCameraComponent;
}

USkeletalMeshComponent* AProjectEKCharacter::GetFirstPersonMeshComponent() const
{
	return FirstPersonMeshComponent;
}

void AProjectEKCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	FirstPersonMeshFollowCamera(DeltaSeconds);
}

void AProjectEKCharacter::MoveInput(const FInputActionValue& Value)
{
	// get the Vector2D move axis
	const FVector2D MovementVector = Value.Get<FVector2D>();

	// pass the axis values to the move input
	DoMove(MovementVector.X, MovementVector.Y);
}

void AProjectEKCharacter::LookInput(const FInputActionValue& Value)
{
	// get the Vector2D look axis
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	// pass the axis values to the aim input
	DoAim(LookAxisVector.X, LookAxisVector.Y);
}

void AProjectEKCharacter::DoAim(float Yaw, float Pitch)
{
	if (GetController())
	{
		// pass the rotation inputs
		AddControllerYawInput(Yaw);
		AddControllerPitchInput(Pitch);
	}
}

void AProjectEKCharacter::DoMove(float Right, float Forward)
{
	if (GetController())
	{
		// pass the move inputs
		AddMovementInput(GetActorRightVector(), Right);
		AddMovementInput(GetActorForwardVector(), Forward);
	}
}

void AProjectEKCharacter::DoJumpStart()
{
	// pass Jump to the character
	Jump();
}

void AProjectEKCharacter::DoJumpEnd()
{
	// pass StopJumping to the character
	StopJumping();
}

void AProjectEKCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &AProjectEKCharacter::DoJumpStart);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &AProjectEKCharacter::DoJumpEnd);
		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AProjectEKCharacter::MoveInput);
		// Looking/Aiming
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AProjectEKCharacter::LookInput);
		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AProjectEKCharacter::LookInput);
	}
}

void AProjectEKCharacter::FirstPersonMeshFollowCamera(const float DeltaSeconds) const
{
	const FRotator CurrentRot = FirstPersonRootComponent->GetRelativeRotation();
	const FRotator CameraRot = FirstPersonCameraComponent->GetRelativeRotation();
	const FRotator TargetRot = FRotator(0.f, 0.0f, -CameraRot.Pitch);
	FRotator NewRot = FMath::RInterpTo(CurrentRot, TargetRot, DeltaSeconds, FirstPersonMeshFollowSpeed);
	FirstPersonRootComponent->SetRelativeRotation(NewRot);
}

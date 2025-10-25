// Copyright VUEDK, Inc. All Rights Reserved.

#include "WeaponCrosshair/Widgets/FirearmCrosshairWidget.h"
#include "WeaponSystem.h"
#include "Animation/WidgetAnimation.h"

void UFirearmCrosshairWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (!IsValid(Firearm))
		return;

	Firearm->OnAimEnabled.RemoveDynamic(this, &UFirearmCrosshairWidget::OnAimEnabled);
	Firearm->OnAimDisabled.RemoveDynamic(this, &UFirearmCrosshairWidget::OnAimDisabled);
	Firearm->OnReloadStarted.RemoveDynamic(this, &UFirearmCrosshairWidget::OnReloadStarted);
	Firearm->OnReloadEnded.RemoveDynamic(this, &UFirearmCrosshairWidget::OnReloadEnded);
	Firearm->OnReloadInterrupted.RemoveDynamic(this, &UFirearmCrosshairWidget::OnReloadFail);
	Firearm->OnReloadInsertedAmmo.RemoveDynamic(this, &UFirearmCrosshairWidget::OnReloadSuccess);

	const UShooterBehaviourBase* Behaviour = Firearm->Shooter->GetShooterBehaviour(FirearmBehaviourIndex);
	if (!IsValid(Behaviour))
		return;

	Behaviour->GetSpreadHandler()->OnProcessingSpread.RemoveDynamic(this, &UFirearmCrosshairWidget::OnSpreadChanged);
}

void UFirearmCrosshairWidget::OnInit_Implementation()
{
	Super::OnInit_Implementation();

	Firearm = Cast<AWeaponFirearm>(Weapon);

	if (!IsValid(Firearm))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UFirearmCrosshairWidget::OnInit_Implementation: Firearm is null."));
		return;
	}

	Firearm->OnAimEnabled.AddDynamic(this, &UFirearmCrosshairWidget::OnAimEnabled);
	Firearm->OnAimDisabled.AddDynamic(this, &UFirearmCrosshairWidget::OnAimDisabled);
	Firearm->OnReloadStarted.AddDynamic(this, &UFirearmCrosshairWidget::OnReloadStarted);
	Firearm->OnReloadEnded.AddDynamic(this, &UFirearmCrosshairWidget::OnReloadEnded);
	Firearm->OnReloadInterrupted.AddDynamic(this, &UFirearmCrosshairWidget::OnReloadFail);
	Firearm->OnReloadInsertedAmmo.AddDynamic(this, &UFirearmCrosshairWidget::OnReloadSuccess);

	const UShooterBehaviourBase* Behaviour = Firearm->Shooter->GetShooterBehaviour(FirearmBehaviourIndex);
	if (!IsValid(Behaviour))
		return;

	Behaviour->GetSpreadHandler()->OnProcessingSpread.AddDynamic(this, &UFirearmCrosshairWidget::OnSpreadChanged);
}

void UFirearmCrosshairWidget::OnAimDisabled_Implementation()
{
}

void UFirearmCrosshairWidget::OnAimEnabled_Implementation()
{
}

void UFirearmCrosshairWidget::OnSpreadChanged_Implementation(float Spread)
{
}

void UFirearmCrosshairWidget::OnReloadStarted_Implementation(FReloadEventData ReloadPayload)
{
}

void UFirearmCrosshairWidget::OnReloadEnded_Implementation()
{
}

void UFirearmCrosshairWidget::OnReloadSuccess_Implementation(FReloadEventData ReloadPayload)
{
}

void UFirearmCrosshairWidget::OnReloadFail_Implementation(FReloadEventData ReloadPayload)
{
}

void UFirearmCrosshairWidget::AnimateCrosshair(UWidgetAnimation* CrosshairAnimation)
{
	if (!IsValid(CrosshairAnimation))
	{
		UE_LOG(LogWeaponSystem, Warning, TEXT("UFirearmCrosshairWidget::AnimateCrosshair: CrosshairAnimation is null."));
		return;
	}
	
	if (!Check())
		return;

	const float MaxSpread = Firearm->GetWeaponMaxSpread();
	const float Spread = Firearm->GetWeaponSpread();

	const float Ratio = FMath::Clamp(Spread / MaxSpread, 0.0f, 1.0f);
	const float Start = Ratio - 0.0001f;
	const float End = Ratio;

	PlayAnimationTimeRange(CrosshairAnimation, Start, End, 1);
}

bool UFirearmCrosshairWidget::Check() const
{
	return IsValid(Firearm);
}

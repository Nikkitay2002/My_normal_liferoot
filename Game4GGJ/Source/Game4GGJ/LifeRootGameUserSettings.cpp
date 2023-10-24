// Fill out your copyright notice in the Description page of Project Settings.


#include "LifeRootGameUserSettings.h"
#include "Kismet/GameplayStatics.h"
#include "AudioDevice.h"
#include "Containers/Array.h"

ULifeRootGameUserSettings* ULifeRootGameUserSettings::GetLifeRootGameUserSettings()
{
	return Cast<ULifeRootGameUserSettings>(UGameUserSettings::GetGameUserSettings());
}

void ULifeRootGameUserSettings::SetBrightnessAmount(float NewValue)
{
	fBrightnessAmount = NewValue;
}

float ULifeRootGameUserSettings::GetBrightnessAmount() const
{
	return fBrightnessAmount;
}

void ULifeRootGameUserSettings::SetMotionBlur(bool NewValue)
{
	bMotionBlur = NewValue;
}

bool ULifeRootGameUserSettings::GetMotionBlur() const
{
	return bMotionBlur;
}

void ULifeRootGameUserSettings::SetShowFPS(bool NewValue)
{
	bShowFPS = NewValue;
}

bool ULifeRootGameUserSettings::GetShowFPS() const
{
	return bShowFPS;
}

void ULifeRootGameUserSettings::SetInvertMouse(bool NewValue)
{
	bInvertMouse = NewValue;
}

bool ULifeRootGameUserSettings::GetInvertMouse() const
{
	return bInvertMouse;
}

void ULifeRootGameUserSettings::SetMouseSensetivity(float NewValue)
{
	fMouseSensetivity = NewValue;
}

float ULifeRootGameUserSettings::GetMouseSensetivity() const
{
	return fMouseSensetivity;
}

void ULifeRootGameUserSettings::SetMasterVolume(float NewValue)
{
	fMasterVolume = NewValue;
}

float ULifeRootGameUserSettings::GetMasterVolume() const
{
	return fMasterVolume;
}

void ULifeRootGameUserSettings::SetMusicVolume(float NewValue)
{
	fMusicVolume = NewValue;
}

float ULifeRootGameUserSettings::GetMusicVolume() const
{
	return fMusicVolume;
}

void ULifeRootGameUserSettings::SetEffectsVolume(float NewValue)
{
	fEffectsVolume = NewValue;
}

float ULifeRootGameUserSettings::GetEffectsVolume() const
{
	return fEffectsVolume;
}

void ULifeRootGameUserSettings::SetMenuVolume(float NewValue)
{
	fMenuVolume = NewValue;
}

float ULifeRootGameUserSettings::GetMenuVolume() const
{
	return fMenuVolume;
}

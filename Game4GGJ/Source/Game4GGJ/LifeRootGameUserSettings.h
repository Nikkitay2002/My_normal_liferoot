// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "LifeRootGameUserSettings.generated.h"

/**
 *
 */
UCLASS()
class GAME4GGJ_API ULifeRootGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static ULifeRootGameUserSettings* GetLifeRootGameUserSettings();

	/*Getters and setters for all config variables. Saving immediately, if needed to use apply, create new temporary variable to store information before apply*/
	//********** Graphics **********
	UFUNCTION(BlueprintCallable)
		void SetBrightnessAmount(float NewValue);
	UFUNCTION(BlueprintPure)
		float GetBrightnessAmount() const;

	UFUNCTION(BlueprintCallable)
		void SetMotionBlur(bool NewValue);
	UFUNCTION(BlueprintPure)
		bool GetMotionBlur() const;

	UFUNCTION(BlueprintCallable)
		void SetShowFPS(bool NewValue);
	UFUNCTION(BlueprintPure)
		bool GetShowFPS() const;

	//****** Keyboard and mouse ******
	UFUNCTION(BlueprintCallable)
		void SetInvertMouse(bool NewValue);
	UFUNCTION(BlueprintPure)
		bool GetInvertMouse() const;

	UFUNCTION(BlueprintCallable)
		void SetMouseSensetivity(float NewValue);
	UFUNCTION(BlueprintPure)
		float GetMouseSensetivity() const;

	//************ Audio ************
	UFUNCTION(BlueprintCallable)
		void SetMasterVolume(float NewValue);
	UFUNCTION(BlueprintPure)
		float GetMasterVolume() const;

	UFUNCTION(BlueprintCallable)
		void SetMusicVolume(float NewValue);
	UFUNCTION(BlueprintPure)
		float GetMusicVolume() const;

	UFUNCTION(BlueprintCallable)
		void SetEffectsVolume(float NewValue);
	UFUNCTION(BlueprintPure)
		float GetEffectsVolume() const;

	UFUNCTION(BlueprintCallable)
		void SetMenuVolume(float NewValue);
	UFUNCTION(BlueprintPure)
		float GetMenuVolume() const;


protected:
	//Graphics settings
	UPROPERTY(Config)
		float fBrightnessAmount;
	UPROPERTY(Config)
		bool bMotionBlur;
	UPROPERTY(Config)
		bool bShowFPS;


	//Keyboard/Mouse settings
	UPROPERTY(Config)
		bool bInvertMouse;
	UPROPERTY(Config)
		float fMouseSensetivity;


	//Audio settings
	UPROPERTY(Config)
		float fMasterVolume;
	UPROPERTY(Config)
		float fMusicVolume;
	UPROPERTY(Config)
		float fEffectsVolume;
	UPROPERTY(Config)
		float fMenuVolume;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "HelperBlueprintFunctionLibrary.h"
#include "GameFeaturesSubsystem.h"

void UHelperBlueprintFunctionLibrary::SetGameFeatureActive(const FString& Name, bool bNewActive)
{
	FString PluginURL;
	UGameFeaturesSubsystem::Get().GetPluginURLForBuiltInPluginByName(Name, PluginURL);

	if (bNewActive)
	{
		UGameFeaturesSubsystem::Get().LoadAndActivateGameFeaturePlugin(PluginURL, FGameFeaturePluginLoadComplete());
	}
	else
	{
		UGameFeaturesSubsystem::Get().UnloadGameFeaturePlugin(PluginURL, true);
	}
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HelperBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PROJL_API UHelperBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable)
	static void SetGameFeatureActive(const FString& Name, bool bNewActive);
};

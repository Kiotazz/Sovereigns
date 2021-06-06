// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Managers/SovSingleton.h"
#include "SovBPFuncLibrary.generated.h"

/**
 * 
 */
UCLASS()
class USovBPFuncLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(Category = "Game", BlueprintPure)
	static UCreatureManager* GetCreatureManager();
};

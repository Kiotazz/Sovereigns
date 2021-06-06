// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Managers/CreatureManager.h"
#include "SovSingleton.generated.h"

/**
 * 
 */
UCLASS(config = Game, transient, BlueprintType, Blueprintable)
class SOVEREIGNS_API USovSingleton : public UObject
{
	GENERATED_BODY()
	
protected:
	UCreatureManager* creatureManager;

public:
	UFUNCTION(Category = "Game", BlueprintCallable)
	static USovSingleton* GetInstance();

	UFUNCTION(Category = "Game", BlueprintCallable)
	UCreatureManager* GetCreatureManager();
};

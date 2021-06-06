// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CreatureManager.generated.h"

/**
 * 
 */
UCLASS(config = Game, transient, BlueprintType, Blueprintable)
class SOVEREIGNS_API UCreatureManager : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Game")
	void TestPrint();

	UFUNCTION(BlueprintCallable, Category = "Game")
	void GetNearestCreature(FVector location, float range);
};

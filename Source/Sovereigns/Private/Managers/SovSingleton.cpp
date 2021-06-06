// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/SovSingleton.h"
#include "..\..\Public\Managers\SovSingleton.h"

USovSingleton* USovSingleton::GetInstance()
{
	if (!GEngine || !GEngine->GameSingleton) return nullptr;
	return Cast<USovSingleton>(GEngine->GameSingleton);
}

UCreatureManager* USovSingleton::GetCreatureManager()
{
	if (!creatureManager) creatureManager = NewObject<UCreatureManager>();
	return creatureManager;
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "Managers/CreatureManager.h"

void UCreatureManager::TestPrint() {
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("CreatureManager Test Print!"));
}

//void UCreatureManager::GetNearestCreature(FVector location, float range)
//{
//
//}

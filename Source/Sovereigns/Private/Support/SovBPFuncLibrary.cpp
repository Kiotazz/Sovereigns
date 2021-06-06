// Fill out your copyright notice in the Description page of Project Settings.


#include "Support/SovBPFuncLibrary.h"

UCreatureManager* USovBPFuncLibrary::GetCreatureManager()
{
	USovSingleton* instance = USovSingleton::GetInstance();
	return instance ? instance->GetCreatureManager() : nullptr;
}
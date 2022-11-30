// Fill out your copyright notice in the Description page of Project Settings.


#include "TestAssetManager.h"
#include "AbilitySystemGlobals.h"

void UTestAssetManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	UAbilitySystemGlobals::Get().InitGlobalData();
}

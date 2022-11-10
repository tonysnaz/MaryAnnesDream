// Fill out your copyright notice in the Description page of Project Settings.


#include "MaryAnneAssManager.h"
#include "AbilitySystemGlobals.h"

void UMaryAnneAssManager::StartInitialLoading()
{
	Super::StartInitialLoading();

	UAbilitySystemGlobals::Get().InitGlobalData();
}
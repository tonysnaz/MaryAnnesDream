// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "MaryAnneAssManager.generated.h"

/**
 * 
 */
UCLASS()
class MARYANNEDREAM_API UMaryAnneAssManager : public UAssetManager
{
	GENERATED_BODY()
	
public:
	virtual void StartInitialLoading() override;
};

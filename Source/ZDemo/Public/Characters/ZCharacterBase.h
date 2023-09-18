// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ZCharacterBase.generated.h"

UCLASS()
class ZDEMO_API AZCharacterBase : public ACharacter {
	GENERATED_BODY()
	// Global
public:
	AZCharacterBase();

protected:
	virtual void BeginPlay();


};

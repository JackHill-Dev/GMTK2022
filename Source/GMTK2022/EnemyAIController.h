// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

class UBehaviorTree;

/**
 * 
 */
UCLASS()
class GMTK2022_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
private:
	APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* BehaviorTree;
};

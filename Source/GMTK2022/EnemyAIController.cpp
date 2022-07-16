// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTree.h"

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	
	//Get the player pawn
	PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	if(BehaviorTree != nullptr)
	{
		RunBehaviorTree(BehaviorTree);
	}
	
}

void AEnemyAIController::Tick(float DeltaTime)
{
	/*Super::Tick(DeltaTime);
	
	SetFocus(PlayerPawn);
	MoveToActor(PlayerPawn, 200);
	*/
	
}

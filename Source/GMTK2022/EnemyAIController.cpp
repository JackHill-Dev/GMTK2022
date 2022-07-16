// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Kismet/GameplayStatics.h"
#include "EnemyCharacter.h"
AEnemyAIController::~AEnemyAIController()
{
	BehaviorTree = nullptr;
	delete BehaviorTree;

	PlayerPawn = nullptr;
	delete PlayerPawn;
}
void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	
	if(BehaviorTree != nullptr)
	{
		RunBehaviorTree(BehaviorTree);

		PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		
		GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());
	}
	
}

void AEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	GetBlackboardComponent()->SetValueAsVector(TEXT("PlayerLocation"), PlayerPawn->GetActorLocation());



}

// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Explode.h"
#include "EnemyAIController.h"
#include "EnemyCharacter.h"

UBTTask_Explode::UBTTask_Explode()
{
	NodeName = "Explode";
}

EBTNodeResult::Type UBTTask_Explode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if (OwnerComp.GetAIOwner() == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    AEnemyCharacter* Character = Cast<AEnemyCharacter>(OwnerComp.GetAIOwner()->GetPawn());
    if (Character == nullptr)
    {
        return EBTNodeResult::Failed;
    }

    Character->Explode();

    return EBTNodeResult::Succeeded;

}

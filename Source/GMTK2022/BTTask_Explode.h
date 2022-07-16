// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_Explode.generated.h"

/**
 * 
 */
UCLASS()
class GMTK2022_API UBTTask_Explode : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_Explode();
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

UCLASS()
class GMTK2022_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemySpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	void SpawnEnemy();
private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> EnemyToSpawn;

	int EnemyCount = 0;
	float SpawnTimer = 0.f;
	UPROPERTY(EditAnywhere)
	int MaxEnemyCount = 10;

};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BaseGameEntity.h"
#include "MyActor.generated.h"

UCLASS()
class NAVAIPLUGIN_API AMyActor : public AActor, public IBaseGameEntity
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void ChangeState(class State* NewState);

private:
	class State* CurrentState;
	
	UFUNCTION()
	void CleanUp(class AActor* DestroyedActor);
};

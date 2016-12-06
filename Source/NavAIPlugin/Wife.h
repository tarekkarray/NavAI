// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BaseGameEntity.h"
#include "StateMachine.h"
#include "Wife.generated.h"

UCLASS()
class NAVAIPLUGIN_API AWife : public AActor, public IBaseGameEntity
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWife();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	StateMachine<AWife>* GetFSM()const;
	
private:
	StateMachine<AWife>* ActorStateMachine;

	UFUNCTION()
		void CleanUp(class AActor* DestroyedActor);
	
};

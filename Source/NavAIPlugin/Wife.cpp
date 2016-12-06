// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "Wife.h"


// Sets default values
AWife::AWife()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->OnDestroyed.AddDynamic(this, &AWife::CleanUp);
	ActorStateMachine = new StateMachine<AWife>(this);
	

}

// Called when the game starts or when spawned
void AWife::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWife::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	ActorStateMachine->Update();
}

StateMachine<AWife>* AWife::GetFSM() const
{
	return ActorStateMachine;
}

void AWife::CleanUp(class AActor* DestroyedActor)
{
	if (ActorStateMachine != nullptr)
	{
		delete(ActorStateMachine);
		ActorStateMachine = NULL;
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, FString::Printf(TEXT("id %d"), GetID()));
	}
}


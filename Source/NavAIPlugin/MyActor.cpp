// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "State.h"
#include "StateMachine.h"
#include "EnterMineAndDigForNugget.h"
#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->OnDestroyed.AddDynamic(this, &AMyActor::CleanUp);
	MaxFatigue = MaxThirst = MaxCarriedGold = 10;
	ActorStateMachine = new StateMachine<AMyActor>(this);
	ActorStateMachine->SetCurrentState(EnterMineAndDigForNugget::Instance());

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	SetLifeSpan(5.0f);
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ActorStateMachine->Update();
}

StateMachine<AMyActor>* AMyActor::GetFSM() const
{
	return ActorStateMachine;
}

void AMyActor::ChangeLocation(ELocation NewLocation)
{
	CurrentLocation = NewLocation;
}

void AMyActor::AddToGoldCarried(uint32 AddedGold)
{
	if (++GoldCarried >= MaxCarriedGold)
	{
		bArePocketsFull = true;
	}
}

void AMyActor::IncreaseFatigue(uint32 AddedFatigue=1)
{
	Fatigue += AddedFatigue;
	if (Fatigue >= MaxFatigue)
	{
		bIsTired = true;
	}
}

bool AMyActor::IsThirsty()
{
	return bIsThirsty;
}

bool AMyActor::ArePocketsFull()
{
	return bArePocketsFull;
}

void AMyActor::CleanUp(AActor* DestroyedActor)
{
	if (ActorStateMachine != nullptr)
	{
		delete(ActorStateMachine);
		ActorStateMachine = NULL;
		if (GEngine)
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,FString::Printf(TEXT("id %d"),GetID()));
	}
}


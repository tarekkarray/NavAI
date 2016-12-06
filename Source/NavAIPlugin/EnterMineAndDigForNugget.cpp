// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "MyActor.h"
#include "VisitBankAndDepositGold.h"
#include "EnterMineAndDigForNugget.h"



EnterMineAndDigForNugget::~EnterMineAndDigForNugget()
{

}

void EnterMineAndDigForNugget::Execute(class AMyActor* Actor)
{
	Actor->AddToGoldCarried(1);
	Actor->IncreaseFatigue(1);
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,TEXT("Digging"));
	if (Actor->ArePocketsFull())
	{
		Actor->GetFSM()->ChangeState(VisitBankAndDepositGold::Instance());
	}
}

void EnterMineAndDigForNugget::Enter(class AMyActor* Actor)
{
	if (Actor->CurrentLocation != ELocation::Mine)
	{
		Actor->CurrentLocation = ELocation::Mine;
	}
}

void EnterMineAndDigForNugget::Exit(class AMyActor* Actor)
{

}

EnterMineAndDigForNugget* EnterMineAndDigForNugget::Instance()
{
	static EnterMineAndDigForNugget* instance = new EnterMineAndDigForNugget();
	return instance;
}

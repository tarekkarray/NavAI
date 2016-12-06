// Fill out your copyright notice in the Description page of Project Settings.

#include "NavAIPlugin.h"
#include "VisitBankAndDepositGold.h"

VisitBankAndDepositGold::VisitBankAndDepositGold()
{
}

VisitBankAndDepositGold::~VisitBankAndDepositGold()
{
}

void VisitBankAndDepositGold::Execute(class AMyActor* Actor)
{

}

void VisitBankAndDepositGold::Enter(class AMyActor* Actor)
{

}

void VisitBankAndDepositGold::Exit(class AMyActor* Actor)
{

}

VisitBankAndDepositGold* VisitBankAndDepositGold::Instance()
{
	static VisitBankAndDepositGold* instance = new VisitBankAndDepositGold();
	return instance;
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
class NAVAIPLUGIN_API VisitBankAndDepositGold :public State<class AMyActor>
{
public:
	VisitBankAndDepositGold();
	~VisitBankAndDepositGold();
	void Execute(AMyActor* Actor) override;
	void Enter(AMyActor* Actor) override;
	void Exit(AMyActor* Actor) override;
	static VisitBankAndDepositGold* Instance();
};

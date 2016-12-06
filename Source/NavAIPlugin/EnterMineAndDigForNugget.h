// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
class NAVAIPLUGIN_API EnterMineAndDigForNugget:public State<class AMyActor>
{
private:
	EnterMineAndDigForNugget(){}
public:
	EnterMineAndDigForNugget(const EnterMineAndDigForNugget&) = delete;
	EnterMineAndDigForNugget& operator=(const EnterMineAndDigForNugget &) = delete;
	~EnterMineAndDigForNugget();
	void Execute(class AMyActor* Actor) override;
	void Enter(class AMyActor* Actor) override;
	void Exit(class AMyActor* Actor) override;
	static EnterMineAndDigForNugget* Instance();
};

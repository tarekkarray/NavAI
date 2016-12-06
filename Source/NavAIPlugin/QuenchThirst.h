// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
class NAVAIPLUGIN_API QuenchThirst :public State<class AMyActor>
{
public:
	QuenchThirst();
	~QuenchThirst();
	void Execute(class AMyActor* Actor) override;
	void Enter(class AMyActor* Actor) override;
	void Exit(class AMyActor* Actor) override;
};

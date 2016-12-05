// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
class NAVAIPLUGIN_API GoAway:public State
{
public:
	GoAway();
	~GoAway();
	void Execute(class AMyActor* Actor) override;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */
class NAVAIPLUGIN_API State
{
public:
	State();
	~State();
	virtual void Execute(class AMyActor* Actor) = 0;
};

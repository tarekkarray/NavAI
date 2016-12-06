// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "State.h"
/**
 * 
 */
class AWife;
class NAVAIPLUGIN_API WifeOwnedStates
{
public:
	WifeOwnedStates();
	~WifeOwnedStates();
};

class WifeGlobalState : public State<AWife>
{
	void Execute(AWife* Actor) override;
	void Enter(AWife* Actor) override;
	void Exit(AWife* Actor) override;
	static WifeGlobalState* Instance();
};

//------------------------------------------------------------------------
//

//------------------------------------------------------------------------
class DoHouseWork : public State<AWife>
{

private:

	DoHouseWork() {}

	//copy ctor and assignment should be private
	DoHouseWork(const DoHouseWork&);
	DoHouseWork& operator=(const DoHouseWork&);

public:

	static DoHouseWork* Instance();

	virtual void Enter(AWife* wife);

	virtual void Execute(AWife* wife);

	virtual void Exit(AWife* wife);

};



//------------------------------------------------------------------------
//

//------------------------------------------------------------------------
class VisitBathroom : public State<AWife>
{
private:

	VisitBathroom() {}

	//copy ctor and assignment should be private
	VisitBathroom(const VisitBathroom&);
	VisitBathroom& operator=(const VisitBathroom&);

public:

	static VisitBathroom* Instance();

	virtual void Enter(AWife* wife);

	virtual void Execute(AWife* wife);

	virtual void Exit(AWife* wife);

};

#pragma once
#include "Wolf.h"

class StateWolf
{
public:
	StateWolf();
	virtual ~StateWolf();
	virtual void Hunt(void) = 0;
	virtual void Idle(void) = 0;

protected:
private:
	Wolf* wolf;

};


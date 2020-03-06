#pragma once
#if !defined(__FarmClassDiagram_WolfMatingBehaviorState_h)
#define __FarmClassDiagram_WolfMatingBehaviorState_h

#include "StateWolf.h"
class WolfMatingBehaviorState :
	public StateWolf
{
public:
	WolfMatingBehaviorState();
	virtual ~WolfMatingBehaviorState();
	void Hunt(void);
	void Idle(void);

};

#endif
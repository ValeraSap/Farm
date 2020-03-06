#pragma once
#if !defined(__FarmClassDiagram_SickWolf_h)
#define __FarmClassDiagram_SickWolf_h

#include "StateWolf.h"
class SickWolf :
	public StateWolf
{
public:
	SickWolf();
	virtual ~SickWolf();
	void Hunt(void);
	void Idle(void);
};

#endif
#pragma once

/* Purpose: Declaration of the class Wolf */

#if !defined(__FarmClassDiagram_Wolf_h)
#define __FarmClassDiagram_Wolf_h


#include "Animal.h"
#include "WolfPack.h"
#include "StateWolf.h"

class Wolf : public Animal
{
public:
	Wolf();
	virtual ~Wolf();
	void Update(void);

//	Reserve** reserve;
//	StateWolf** stateWolf;

protected:
private:
	int partner;
	int huntRole;
	WolfPack* pack;
	StateWolf state;
//	int reserves;
	
};

#endif
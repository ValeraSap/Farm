#pragma once

/* Purpose: Declaration of the class Wolf */

#if !defined(__FarmClassDiagram_Wolf_h)
#define __FarmClassDiagram_Wolf_h


#include "Animal.h"
#include "WolfPack.h"

#include "Reserve.h"

#include "WinterWolfBehavior.h"
#include "RaisingOffspring.h"
#include "SickWolf.h"
#include "WolfMatingBehaviorState.h"

class Wolf : public Animal
{
public:
	Wolf();
	virtual ~Wolf();
	void Update(void);

	//Reserve* reserve; Вектор или список!

protected:
private:
	Wolf* partner= nullptr;
	int huntRole;
	WolfPack* pack= nullptr;
	StateWolf* state = nullptr;
	
};

#endif
#pragma once

/* Purpose: Declaration of the class Wolf */

#if !defined(__FarmClassDiagram_Wolf_h)
#define __FarmClassDiagram_Wolf_h


#include "Animal.h"
#include "WolfPack.h"
#include "WinterWolfBehavior.h"
#include "Reserve.h"

class Wolf : public Animal
{
public:
	Wolf();
	virtual ~Wolf();
	void Update(void);

	//Reserve* reserve; Вектор или список!

protected:
private:
	int partner;
	int huntRole;
	WolfPack* pack;
	StateWolf* state = new WinterWolfBehavior;  
	
};

#endif
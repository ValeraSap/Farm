#pragma once

#include "Animal.h"

/* Purpose: Declaration of the class Sheep */

#if !defined(__FarmClassDiagram_Sheep_h)
#define __FarmClassDiagram_Sheep_h


class Sheep : public Animal
{
public:
	int Update(void);
	void Pregnancy(void);
	Sheep();
	virtual ~Sheep();

//	StateSheep** stateSheep;

protected:
private:
	int anxiety;
	int stateSheep;
	int flock;
	int cell;


};

#endif
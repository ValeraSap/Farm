#pragma once
#if !defined(__FarmClassDiagram_Cell_h)
#define __FarmClassDiagram_Cell_h

//#include "Animal.h"
class Cell
{
public:
	void Update(void);

	//Field** field;
	Cell();
	~Cell();
private:
	int grassMass;
	int CGI; //коэффициент привлекательности участка для травоядных
	//Animal** herbivorous;
};

#endif
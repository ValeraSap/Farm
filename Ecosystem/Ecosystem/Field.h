#pragma once
#if !defined(__FarmClassDiagram_Field_h)
#define __FarmClassDiagram_Field_h
#include "Cell.h"
//#include "Weather.h"
#include "config.h"

class Field
{
public:
	void PrintField(void);
	void Update(void);
	Field();
	virtual ~Field();
private:
	SIZE size;
	Cell cells;
//	Fauna fauna;
//	Weather weather;

};

#endif
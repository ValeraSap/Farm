#pragma once
#if !defined(__FarmClassDiagram_FieldCreator_h)
#define __FarmClassDiagram_FieldCreator_h

#include "Field.h"
class FieldCreator
{
public:
	Field* createField(char type);
	FieldCreator();
	virtual ~FieldCreator();
//protected:
	virtual void createCells(void)=0;
	virtual void createFauna(void)=0;
	virtual void createWeather(void)=0;
private:	
	Field field;
};

#endif
#pragma once
#if !defined(__FarmClassDiagram_FieldCreator_h)
#define __FarmClassDiagram_FieldCreator_h

#include "Field.h"
class FieldCreator //singleton áû
{
public:
	virtual Field* createField(char type)=0;
	
	virtual ~FieldCreator();
protected:
	virtual void ñreateCells()=0;
	virtual void ñreateFauna()=0;
	virtual void ñreateWeather()=0;

	FieldCreator();
private:	
	
	//Field field;
};

#endif
#pragma once
#if !defined(__FarmClassDiagram_FieldCreator_h)
#define __FarmClassDiagram_FieldCreator_h

#include "Field.h"
class FieldCreator //singleton ��
{
public:
	virtual Field* createField(char type)=0;
	
	virtual ~FieldCreator();
protected:
	virtual void �reateCells()=0;
	virtual void �reateFauna()=0;
	virtual void �reateWeather()=0;

	FieldCreator();
private:	
	
	//Field field;
};

#endif
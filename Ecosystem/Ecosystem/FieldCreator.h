#pragma once
#if !defined(__FarmClassDiagram_FieldCreator_h)
#define __FarmClassDiagram_FieldCreator_h

#include "Field.h"
class FieldCreator
{
public:
	Field* CreateField(void);
	FieldCreator();
	virtual ~FieldCreator();
protected:
	void CreateCells(void);
	void ClearCells(void);
	void CreateFauna(void);
	void CreateWeather(void);
private:	
	Field field;
};

#endif
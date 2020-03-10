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
private:	
	Field field;
};

#endif
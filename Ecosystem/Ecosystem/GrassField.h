#pragma once
#if !defined(__FarmClassDiagram_GrassField_h)
#define __FarmClassDiagram_GrassField_h

#include "Field.h"
class GrassField :	public Field //����� singleon!
{
public:
	GrassField();
	~GrassField();
};

#endif
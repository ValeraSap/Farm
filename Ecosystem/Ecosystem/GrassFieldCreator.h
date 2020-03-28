#pragma once
#if !defined(__FarmClassDiagram_GrassFieldCreator_h)
#define __FarmClassDiagram_GrassFieldCreator_h

#include "FieldCreator.h"
#include "GrassField.h"

class GrassFieldCreator : public FieldCreator
{
public:
	GrassFieldCreator();
	~GrassFieldCreator();

	Field* CreateField(void);

	GrassField** grassField;
};
#endif

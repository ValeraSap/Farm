#pragma once
#if !defined(__FarmClassDiagram_GrassFieldCreator_h)
#define __FarmClassDiagram_GrassFieldCreator_h

#include "FieldCreator.h"
#include "GrassField.h"

class GrassFieldCreator : public FieldCreator
{
	GrassField** grassField;
	
public:
	
	GrassFieldCreator();
	~GrassFieldCreator();

	Field* ñreateField(void);

	void ñreateCells(void);	
	void ñreateFauna(void);
	void ñreateWeather(void);
	
	
};
#endif

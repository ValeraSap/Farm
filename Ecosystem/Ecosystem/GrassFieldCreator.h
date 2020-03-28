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

	Field* �reateField(void);

	void �reateCells(void);	
	void �reateFauna(void);
	void �reateWeather(void);
	
	
};
#endif

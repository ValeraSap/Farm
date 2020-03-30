#pragma once
#if !defined(__FarmClassDiagram_GrassFieldCreator_h)
#define __FarmClassDiagram_GrassFieldCreator_h

#include "FieldCreator.h"
#include "GrassField.h"

class GrassFieldCreator : public FieldCreator //singleton бы //вынести в один файл к родителю??
{
	GrassField** grassField;
	
public:
	
	GrassFieldCreator();
	~GrassFieldCreator();

	virtual Field* createField(char type);
protected:

	void сreateCells();	
	void сreateFauna();
	void сreateWeather();
	
	
};
#endif

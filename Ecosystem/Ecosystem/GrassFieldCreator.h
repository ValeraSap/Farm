#pragma once
#if !defined(__FarmClassDiagram_GrassFieldCreator_h)
#define __FarmClassDiagram_GrassFieldCreator_h

#include "FieldCreator.h"
#include "GrassField.h"

class GrassFieldCreator : public FieldCreator //singleton �� //������� � ���� ���� � ��������??
{
	GrassField** grassField;
	
public:
	
	GrassFieldCreator();
	~GrassFieldCreator();

	virtual Field* createField(char type);
protected:

	void �reateCells();	
	void �reateFauna();
	void �reateWeather();
	
	
};
#endif

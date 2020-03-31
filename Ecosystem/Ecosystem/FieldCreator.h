#pragma once
#if !defined(__FarmClassDiagram_FieldCreator_h)
#define __FarmClassDiagram_FieldCreator_h

#include "Field.h"
#include "Weather.h"
//#include "Cell.h"
//#include "Fauna.h"
class FieldCreator //singleton бы
{
public:
	virtual Field* createField()=0;
	
	virtual ~FieldCreator();
protected:
	/*virtual void createCells();
	virtual void createFauna();
	virtual void createWeather();
*/
	FieldCreator();
private:	
	
	//Field field;
};

#endif
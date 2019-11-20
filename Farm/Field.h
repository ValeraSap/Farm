#pragma once
#include <list>
#include "Cell.h"
#include "Animal.h"
#include "EntitiesFactory.h"

enum SIZE { SMALL = 5, MEDIUM = 10, BIG = 15 };

class Field {//abstract product
public:
	SIZE size;
	Cell **cells;
std::list <Animal*> animal;
};
class FieldCreator { //abstract creator
protected:
	FieldEntitiesFactory * fieldEntitiesFactory;
	Field* field;
public:
	FieldCreator();
	virtual Field* CreateField(SIZE size)=0;// factory method 

};
class GrassFieldCreator : public FieldCreator { //concrete creator 

public:	
	GrassFieldCreator();

	Field* CreateField(SIZE size); 
	void CreateCells();
	void ClearCells();
	~GrassFieldCreator();
};
class GrassField : public Field { //concrete product

public:
	GrassField(SIZE size);
	void EatGrass();

};

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
//	FieldCreator(SIZE size);
	//virtual void CreateField(SIZE size)=0;// factory method //рхо тхкд* ю ме бнид!!!!!!!!!!!!!!!!!!!!!!

};
class GrassFieldCreator : public FieldCreator { //concrete creator 

public:
	GrassFieldCreator();
	GrassFieldCreator(SIZE size);

	void CreateField(SIZE size); //рхо тхкд* ю ме бнид!!!!!!!!!!!!!!!!!!!!!!
	void CreateCells();
	void ClearCells();
	~GrassFieldCreator();
};
class GrassField : public Field { //concrete product

public:
	GrassField(SIZE size);
	void EatGrass();

};

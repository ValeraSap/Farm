#include "Cell.h"
#include "EntitiesFactory.h"
#include "Animal.h"
#include "Field.h"
#include <list>
#include <iostream>

using namespace std;



	FieldCreator::FieldCreator() {
		cout << "FieldCreator default constructor" << endl;
	}
	FieldCreator::FieldCreator(SIZE size) {
		cout << "FieldCreator constructor" << endl;
		CreateField(size);
	}
	

	GrassFieldCreator::GrassFieldCreator() {
		cout << "GrassFieldCreator default constructor" << endl;
	}
	GrassFieldCreator::GrassFieldCreator(SIZE size) {
		cout << "GrassFieldCreator constructor" << endl;
	}
	
	Field* GrassFieldCreator::CreateField( SIZE size){ //ÇÀ×ÅÌ ÌÛ ÂÎÇÂÐÀÙÀÅÌ FIELD*. ÑÒÎÈÒ ËÈ ÏÐÎÑÒÎ ÏÅÐÅÄÀÒÜ ÓÊÀÇÀÒÅËÜ 
		cout << "CreateField()" << endl;
		 fieldEntitiesFactory = new GrassFieldEntitiesFactory();
		field = new GrassField(size);
		CreateCells();
		Animal* a = fieldEntitiesFactory->createAnimal();
		field->animal.push_back(a);
		return field;
	}
	
	GrassFieldCreator::~GrassFieldCreator() {
		ClearCells();
		cout << "GrassField destructor" << endl;
	}
	void GrassFieldCreator::CreateCells() { //ÑÄÅËÀÒÜ ÏÐÎÂÅÐÊÓ ÂÀËÈÄÍÎÑÒÈ!!!!!
		cout << "CreateCells()" << endl;
		field->cells = new Cell*[field->size];
		for (int i = 0; i < field->size; i++)
			field->cells[i] = new Cell[field->size];
	}
	void GrassFieldCreator::ClearCells() {
		cout << "ClearCells()" << endl;
		for (int i = 0; i < field->size; i++)
			delete field->cells[i];
		delete[] field->cells;
	}

	GrassField::GrassField(SIZE size) {
		cout << "GrassField constructor" << endl;				
	}
	void GrassField::EatGrass() {
		cout << "Grass eated" << endl;
	}
	



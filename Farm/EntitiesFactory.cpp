#include "Animal.cpp"
#include "Entities.cpp"
#include "EntitiesFactory.h"
#include <iostream>
using namespace std;

	FieldEntitiesFactory::FieldEntitiesFactory(){
		cout << "FieldEntitiesFactory constructor" << endl;
	}
	GrassFieldEntitiesFactory::GrassFieldEntitiesFactory() {
		cout << "GrassFieldEntitiesFactory constructor" << endl;
		//Instance();
	}
	Animal* GrassFieldEntitiesFactory::createAnimal() {
		cout << "Animal created" << endl;
		return new Sheep();
	}
	InteractiveObj* GrassFieldEntitiesFactory::createInteractiveObj() {
		cout << "Tree created" << endl;
		return new Tree();
	}
	UnInteractiveObj* GrassFieldEntitiesFactory::createUnInteractiveObj() {
		cout << "Stone created" << endl;
		return new Stone();
	}
	
/*FieldEntitiesFactory* FieldEntitiesFactory::_instance = 0;
FieldEntitiesFactory* FieldEntitiesFactory::Instance() {
	if (_instance == 0) {
		_instance = new GrassFieldEntitiesFactory;
	}
	cout << "FieldEntitiesFactory Instance() called" << endl;
	return _instance;
}*/

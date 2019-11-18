#pragma once
#include "Animal.h"
#include "Entities.h"
#include <iostream>
using namespace std;
class FieldEntitiesFactory {

public:
	static FieldEntitiesFactory* Instance();
	virtual Animal* createAnimal();
	virtual InteractiveObj* createInteractiveObj();
	virtual UnInteractiveObj* createUnInteractiveObj();
protected:
	FieldEntitiesFactory();
private:
	static FieldEntitiesFactory* _instance;
};
class GrassFieldEntitiesFactory :public FieldEntitiesFactory {
public:
	GrassFieldEntitiesFactory();
	Animal* createAnimal();
	InteractiveObj* createInteractiveObj();
	UnInteractiveObj* createUnInteractiveObj();
};


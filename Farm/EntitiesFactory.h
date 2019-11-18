#pragma once
#include "Animal.h"
#include "Entities.h"
#include <iostream>
using namespace std;
class FieldEntitiesFactory {

public:
//	static FieldEntitiesFactory* Instance();
	FieldEntitiesFactory();
	virtual Animal* createAnimal()=0;
	virtual InteractiveObj* createInteractiveObj()=0;
	virtual UnInteractiveObj* createUnInteractiveObj()=0;
protected:
	
/*private:
	static FieldEntitiesFactory* _instance;*/
};
class GrassFieldEntitiesFactory :public FieldEntitiesFactory {
public:
	GrassFieldEntitiesFactory();
	Animal* createAnimal();
	InteractiveObj* createInteractiveObj();
	UnInteractiveObj* createUnInteractiveObj();
	
};


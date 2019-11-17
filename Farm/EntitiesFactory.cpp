#include "Animal.cpp"
#include "Entities.cpp"
class FieldEntitiesFactory {
	virtual Animal* createAnimal();
	virtual InteractiveObj* createInteractiveObj();
	virtual UnInteractiveObj* createUnInteractiveObj();
};
class GrassFieldEntitiesFactory:public FieldEntitiesFactory {
	Animal* createAnimal() {
		return new Sheep();
	}
	InteractiveObj* createInteractiveObj() {
		return new Tree();
	}
	UnInteractiveObj* createUnInteractiveObj() {
		return new Stone();
	}
};
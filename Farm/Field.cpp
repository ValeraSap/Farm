#include "Cell.cpp"
#include "EntitiesFactory.cpp"
#include "Animal.cpp"
#include <list>
class Field {
	int size;
	Cell **cells;
std::list <Animal> animal;
};
class FieldCreator {
	
public:
	FieldCreator(FieldEntitiesFactory fieldEntitiesFactory) {
		CreateField(fieldEntitiesFactory);
	}
	virtual Field CreateField(FieldEntitiesFactory fieldEntitiesFactory);// factory method
};
class GrassFieldCreator : public FieldCreator {
	
public:
	Field CreateField(FieldEntitiesFactory* fieldEntitiesFactory){	
		FieldEntitiesFactory* fieldEntitiesFactory = new GrassFieldEntitiesFactory();
		Field* field = new GrassField(fieldEntitiesFactory);
	}
};
class GrassField: public Field {
	FieldEntitiesFactory* fieldEntitiesFactory;
public:
	GrassField(FieldEntitiesFactory* fieldEntitiesFactory) {
		this->fieldEntitiesFactory = fieldEntitiesFactory;
	}
};
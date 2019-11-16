#include "Cell.cpp"
#include "EntitiesFactory.cpp"
class Field {
	int size;
	Cell **cells;
	
};
class FieldCreator {
	
public:
	FieldCreator() {
		CreateField();
	}
	virtual Field CreateField() = 0;// factory method
};
class GrassFieldCreator : public FieldCreator {
	
public:
	Field CreateField(FieldEntitiesFactory fieldEntitiesFactory){	
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
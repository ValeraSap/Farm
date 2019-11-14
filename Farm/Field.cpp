class Field {
	int size;
	//Cell **cells;

};
class FieldCreator {
public:
	FieldCreator() {
		Create();
	}
	virtual Field Create() = 0;// factory method
};
class GrassFieldCreator : public FieldCreator {
public:
	Field Create(){}
};
class GrassField: public Field {

};
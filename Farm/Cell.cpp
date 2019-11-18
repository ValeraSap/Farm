#include <iostream>

#include "Entities.h"
#include "Cell.h"
using namespace std;

Cell::Cell() {
	cout << "Cell constructor" << endl;
}
void Cell::setOblect(Entitiy* ent) {
	this->ent = ent;
}
Entitiy* Cell::getOblect() {
	return this->ent;
}
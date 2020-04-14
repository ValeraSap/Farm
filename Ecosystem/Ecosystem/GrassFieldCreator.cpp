#include "GrassFieldCreator.h"
#include "GrassField.h"


GrassFieldCreator::GrassFieldCreator()
{
}


GrassFieldCreator::~GrassFieldCreator()
{
}


Field* GrassFieldCreator::createField() {

	return new GrassField();
}

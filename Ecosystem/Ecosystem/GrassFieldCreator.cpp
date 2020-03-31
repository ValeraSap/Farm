#include "GrassFieldCreator.h"
#include "GrassField.h"


GrassFieldCreator::GrassFieldCreator()
{
}


GrassFieldCreator::~GrassFieldCreator()
{
}


Field* GrassFieldCreator::createField() {
	//Field* f = new GrassField();
	//f.weather=createWeather();

	return new GrassField();
}

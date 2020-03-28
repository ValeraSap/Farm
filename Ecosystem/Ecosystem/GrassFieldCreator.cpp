#include "GrassFieldCreator.h"
#include "GrassField.h"


GrassFieldCreator::GrassFieldCreator()
{
}


GrassFieldCreator::~GrassFieldCreator()
{
}
Field* GrassFieldCreator::createField(void)
{
	return new GrassField();
}
void GrassFieldCreator::createCells(void)
{
	// TODO : implement
}
void GrassFieldCreator::createFauna(void)
{
	// TODO : implement
}
void GrassFieldCreator::createWeather(void)
{
	// TODO : implement
}

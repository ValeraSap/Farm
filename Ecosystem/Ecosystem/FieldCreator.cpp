#include "FieldCreator.h"

#include "GrassField.h"

Field* FieldCreator::CreateField(char type)
{
	switch (type){
	default:
		return new GrassField();
	}
}

FieldCreator::FieldCreator()
{
}


FieldCreator::~FieldCreator()
{
}

void FieldCreator::CreateCells(void)
{
	// TODO : implement
}
void FieldCreator::ClearCells(void)
{
	// TODO : implement
}
void FieldCreator::CreateFauna(void)
{
	// TODO : implement
}
void FieldCreator::CreateWeather(void)
{
	// TODO : implement
}
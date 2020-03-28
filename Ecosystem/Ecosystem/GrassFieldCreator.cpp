#include "GrassFieldCreator.h"
#include "GrassField.h"


GrassFieldCreator::GrassFieldCreator()
{
}


GrassFieldCreator::~GrassFieldCreator()
{
}
Field* GrassFieldCreator::CreateField(void)
{
	return new GrassField();
}

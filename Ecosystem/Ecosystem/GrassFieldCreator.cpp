#include "GrassFieldCreator.h"
#include "GrassField.h"


GrassFieldCreator::GrassFieldCreator()
{
}


GrassFieldCreator::~GrassFieldCreator()
{
}


Field* GrassFieldCreator::createField(char type) {
	return new GrassField();
}
void GrassFieldCreator::�reateWeather() {

}
void GrassFieldCreator::�reateCells() {

}
void GrassFieldCreator::�reateFauna() {

}
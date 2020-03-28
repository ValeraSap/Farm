#include "FieldCreator.h"

#include "GrassField.h"

Field* FieldCreator::CreateField(char type)
{
	switch (type){
	default:
		return new GrassField();
		////методы создани€ деталей пол€ сделать абстрактными
		////создавать экз пол€ (unique) 
		////дл€ пол€ создать необходимый климат, животных
		////передать указатель
	}
}

FieldCreator::FieldCreator()
{
}


FieldCreator::~FieldCreator()
{
}


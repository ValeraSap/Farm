#include "Field.h"


Field::Field()
{		
	
}

Sprite Field::getSprite() const
{
	return sprite;
}
std::pair<int, int>Field::getSize() const{	
	return size;
}

Field::~Field()
{
}

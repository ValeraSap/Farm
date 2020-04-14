#include "GrassField.h"



GrassField::GrassField()
{
	// Binding texture with sprite
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);	
	
	size.first = sprite.getGlobalBounds().width;
	size.second = sprite.getGlobalBounds().height;
	
	//на 1 спрайт 4 ячейки
	cells = new Cell*[4];

	for (int i=0; i < 4; i++)
	{
		cells[i] = new Cell(size, i);
	}

}
void GrassField::update(float elapsed)
{	
	
	//cell->upd()
	//fauna->upd()
}
void GrassField::draw(RenderWindow* renderWindow)
{
	(*renderWindow).draw(sprite);
	
	
}

void GrassField::weatherChanged(Seasons, Rain, Wind, TimeOfDay)
{
	//TODO texture changes when night/day or seasons
}

GrassField::~GrassField()
{
	for (int i = 0; i < 4; i++)
		delete cells[i];
	delete[] cells;
}

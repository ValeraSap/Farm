#include "GrassField.h"



GrassField::GrassField()
{
	// Binding texture with sprite
	texture.loadFromFile("Textures/GField.jpg");
	sprite.setTexture(texture);	
	
	size.first = sprite.getGlobalBounds().width;
	size.second = sprite.getGlobalBounds().height;
	
	//на 1 спрайт 4 ячейки
	int cellsNumb=4;
	cells = new Cell*[4];

	for (int i=0; i < 4; i++)
	{
		cells[i] = new Cell(size, i);
	}
}
GrassField::GrassField(FieldSize enumFieldSize) {

	int fieldSize = static_cast<int>(enumFieldSize);

	texture.loadFromFile("Textures/GField.jpg");
	texture.setRepeated(true);
	sprite.setTexture(texture);
	sprite.setTextureRect(IntRect(0, 0, texture.getSize().x * fieldSize, texture.getSize().y * fieldSize));  
	//sprite.setTextureRect()

	size.first = sprite.getGlobalBounds().width;
	size.second = sprite.getGlobalBounds().height;

	//4 ячейки на 1 спрайт 
	int cellsNumb = 4* fieldSize;
	cells = new Cell * [cellsNumb];

	for (int i = 0; i < cellsNumb; i++)
	{
		//XXX new formula needs
		//cells[i] = new Cell(size, i);
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

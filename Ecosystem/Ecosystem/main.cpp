#include <SFML/Graphics.hpp>
#include "Engine.h"

using namespace sf;


int main()
{
	
	Engine engine;
	
	engine.start();

	return 0;
}


/*
*1)сделать кнопки нажимаемыми. интерфейснфе приблуды - выводящими справочную информацию
*2)Придумать реализацию Cell
*3)Ввести размеры поля
*4)Анимация 
*5) Gametime занимается вызовом update для gametime
*/
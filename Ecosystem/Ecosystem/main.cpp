﻿#include <SFML/Graphics.hpp>
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
*4)избавить от фабричного метода или следовать абстрауции и привести ее в порядок 
*5) придумать метод создания поля, состоящего из нескольких текстур
*-сколько текстур
*-как они располагаются
*-где располагаются? Класс Field?!
*
*
*6) Поле - observer Weather: текстуры оосени/зимы и пр? => Engine updates weather!

*/
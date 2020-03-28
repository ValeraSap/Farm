#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h
#include "Field.h"
 class Weather //погода может быть только одна. Нужен singleon!
{	
	 //Ссылка на поле
	 Field* field= nullptr;
public:
	//void Update(void);
	Weather(Field* f);
	~Weather();
	 
};
#endif


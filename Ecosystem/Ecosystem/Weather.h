#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h
#include "Field.h"
 class Weather //������ ����� ���� ������ ����. ����� singleon!
{	
	 //������ �� ����
	 Field* field= nullptr;
public:
	//void Update(void);
	Weather(Field* f);
	~Weather();
	 
};
#endif


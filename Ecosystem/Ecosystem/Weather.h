#pragma once
#if !defined(__FarmClassDiagram_Weather_h)
#define __FarmClassDiagram_Weather_h
#include "Field.h"
 class Weather //������ ����� ���� ������ ����. ����� singleon!
{
public:
	void Update(void);
	Weather();
	~Weather();
	Field* field; //������ �� ����
};
#endif


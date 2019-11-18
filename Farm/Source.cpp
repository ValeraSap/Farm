#include <iostream>
#include "Field.h"
#include <string>
using namespace std;


//дсярпсйрнп дкъ ъвеей

int main()
{
	setlocale(LC_ALL, "Rus");

//	Field* field;	
	FieldCreator* fc = new GrassFieldCreator( SMALL);
	
	system("pause");
}

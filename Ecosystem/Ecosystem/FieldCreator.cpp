#include "FieldCreator.h"

#include "GrassField.h"

Field* FieldCreator::CreateField(char type)
{
	switch (type){
	default:
		return new GrassField();
		////������ �������� ������� ���� ������� ������������
		////��������� ��� ���� (unique) 
		////��� ���� ������� ����������� ������, ��������
		////�������� ���������
	}
}

FieldCreator::FieldCreator()
{
}


FieldCreator::~FieldCreator()
{
}


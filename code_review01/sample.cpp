#include "sample.h"
#include <iostream>


void SampleClass::Input()
{
	a = 10;
	b = 3;
}

void SampleClass::Plus()
{
	c = a + b;
}

void SampleClass::Disp()
{
	std::cout << "�ϐ�C�̒l��" << c << std::endl;
}
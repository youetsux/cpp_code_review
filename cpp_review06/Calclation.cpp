#include <iostream>
#include "Calclation.h"

Calculation::Calculation()
{
	a = 0;
	b = 0;
}

Calculation::Calculation(float val1, float val2)
{
	a = val1;
	b = val2;
}

void Calculation::SetA(float val)
{
	this->a = val;
}

void Calculation::SetB(float val)
{
	this->b = val;
}

void Calculation::Disp() {
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
}
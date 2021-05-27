#include <iostream>
#include "Data.h"

void Data::SetValue(int a)
{
	value = a;
}

void Data::Disp()
{
	std::cout << "value of menber variable m is " << value << std::endl;
}
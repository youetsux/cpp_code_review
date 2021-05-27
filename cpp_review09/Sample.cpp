#include <iostream>
#include "Sample.h"

Sample::Sample()
{
	std::cout << "Constructor has called" << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destructor has called" << std::endl;
}

void Sample::memberFunc()
{
	std::cout << "Member Function (memberFunc()) has called" << std::endl;
}
#include "sample.h"
#include <iostream>

Sample::Sample() {
	std::cout << "Constructor has called" << std::endl;
}

Sample::~Sample()
{
	std::cout << "Destructor has called" << std::endl;
}

void Sample::memberFunc()
{
	std::cout << "Member Function of Sample class has called" << std::endl;
}
#include "sample.h"
#include <iostream>

void Function();

int main()
{
	std::cout << "Now Starting Program" << std::endl;
	Function();
	std::cout << "Now Finishing Program" << std::endl;

	return 0;
}


void Function()
{
	std::cout << "Function has called" << std::endl;

	Sample instSample;

	instSample.memberFunc();
}
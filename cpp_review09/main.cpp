#include <iostream>
#include "Sample.h"

void Function();

int main() {
	std::cout << "Now Starting Program" << endl;
	Function();
	std::cout << "Now Finishing Program" << endl;

	return 0;
}

void Function()
{
	std::cout << "Function (Function()) has called" << endl;
	Sample instSample;
	instSample.memberFunc();
}
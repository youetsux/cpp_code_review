#include <iostream>
#include "Circle.h"

int main()
{
	float m;
	float r = 5.0f; //–ÊÏ

	Circle c;
	m= c.Menseki(r);
	std::cout << "Area of this Circle with radius" << r << " are " << m << " .";

}
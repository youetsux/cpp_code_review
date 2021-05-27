#include <iostream>
#include "Circle.h"

Circle::Circle() {
	this->PI = 3.1415f;
}

float Circle::Menseki(float radius) {
	return radius * radius * PI;
}
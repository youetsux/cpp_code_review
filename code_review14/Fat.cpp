#include <iostream>
#include "Fat.h"

Fat::Fat() 
{
	this->name = "";
	this->height = 0;
	this->weight = 0;
	this->BMI = 0;

}

void Fat::setName(std::string name)
{
	this->name = name;
}

void Fat::setHeight(float h) 
{
	this->height = h;
}

void Fat::setWeight(float w)
{
	this->weight = w;
}

void  Fat::calcBmi() {
	this->BMI = this->weight / (this->height * this->height);
}

float Fat::getBmi()
{
	return this->BMI;
}

void Fat::showResult() 
{
	std::cout << this->name << "‚ÌBMI‚Í" << this->BMI << "‚Å‚·" << std::endl;
}

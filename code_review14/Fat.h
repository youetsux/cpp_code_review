#pragma once
#include <string>

class Fat
{
	std::string name;
	float height;
	float weight;
	float BMI;
public:
	Fat();
	void setName(std::string name);
	void setHeight(float h);
	void setWeight(float w);
	void calcBmi();
	float getBmi();
	void showResult();
};


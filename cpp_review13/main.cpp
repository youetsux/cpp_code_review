#include <iostream>
#include "../cpp_review06/Calclation.h"

void setX(Calculation* obj_x, float a, float b);
void setY(Calculation& obj_y, float a, float b);





int main()
{
	Calculation* x, * y;

	x = new Calculation;
	setX(x, 5.0, 10.0);
	x->Disp();
	delete x;

	y = new Calculation;
	setY(*y, 8.0, 3.0);
	y->Disp();
	delete y;
}

void setX(Calculation* obj_x, float a, float b)
{
	obj_x->SetA(a);
	obj_x->SetB(b);
}

void setY(Calculation& obj_y, float a, float b)
{
	obj_y.SetA(a);
	obj_y.SetB(b);
}
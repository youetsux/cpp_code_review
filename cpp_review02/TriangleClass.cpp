#include <iostream>
#include "TriangleClass.h"

void TriangleClass::Input() {
	teihen = 20.0f;
	takasa = 15.0f;
}

void TriangleClass::Calc() {
	menseki = teihen * takasa / 2.0f;
}

void TriangleClass::Disp() {
	std::cout << "�O�p�`�̖ʐρ�" << menseki << std::endl;
}
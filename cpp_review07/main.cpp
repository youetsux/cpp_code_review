#include <iostream>
#include "Status.h"

int main() {
	int lv;
	Status st;


	while (true) {
		std::cout << "���x������͂��Ă��������@��";
		std::cin >> lv;

		if (!st.SetLv(lv)) break;
		st.Calc();

		std::cout << "HP = " << st.GetHp() << std::endl;
		std::cout << "�U���� �� " << st.GetAtk() << std::endl;
		std::cout << "�h��� �� " << st.GetDef() << std::endl;
	}
	std::cout << "�v���O�������I�����܂�" << std::endl;
}
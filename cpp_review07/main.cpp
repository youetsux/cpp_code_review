#include <iostream>
#include "Status.h"

int main() {
	int lv;
	Status st;


	while (true) {
		std::cout << "レベルを入力してください　→";
		std::cin >> lv;

		if (!st.SetLv(lv)) break;
		st.Calc();

		std::cout << "HP = " << st.GetHp() << std::endl;
		std::cout << "攻撃力 ＝ " << st.GetAtk() << std::endl;
		std::cout << "防御力 ＝ " << st.GetDef() << std::endl;
	}

	std::cout << "プログラムを終了します" << std::endl;
}
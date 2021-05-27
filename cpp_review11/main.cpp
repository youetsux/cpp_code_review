#include <iostream>
#include "player.h"
#include "enemy.h"

int main()
{
	Player pl;
	Enemy ene;

	int damage;

	for (int turn = 1;; turn++) {
		std::cout << "\n=======" << turn << "ƒ^[ƒ“–Ú======\n";

		pl.DispHp();
		ene.DispHp();

		damage = pl.Attack(ene.GetDef());
		ene.Damege(damage);
		if (ene.IsDead())break;

		damage = ene.Attack(pl.GetDef());
		pl.Damege(damage);
		if (pl.IsDead())break;

	}
}
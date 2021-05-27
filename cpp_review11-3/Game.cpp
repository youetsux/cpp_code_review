#include "Game.h"
#include <iostream>


Game::Game() {

}

void Game::Loop() {
	int damage;


	for (int turn = 1;; turn++) {
		std::cout << "\n=======" << turn << "ƒ^[ƒ“–Ú======\n";

		ply.DispHp();
		ene.DispHp();

		damage = ply.Attack(ene.GetDef());
		ene.Damege(damage);
		if (ene.IsDead())break;

		damage = ene.Attack(ply.GetDef());
		ply.Damege(damage);
		if (ply.IsDead())break;

	}
}
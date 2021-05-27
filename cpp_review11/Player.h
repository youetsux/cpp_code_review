#pragma once
class Player
{
	int hp, atk, def;
public:
	Player();
	void DispHp();
	int Attack(int i);
	void Damege(int i);
	int GetDef();
	bool IsDead();
};


#pragma once
class Enemy
{
	int hp, atk, def;
public:
	Enemy();
	void DispHp();
	int Attack(int i);
	void Damege(int i);
	int GetDef();
	bool IsDead();
};


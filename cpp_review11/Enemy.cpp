#include "Enemy.h"
#include <iostream>


Enemy::Enemy()
{
	hp = 200;
	atk = 50;
	def = 40;
}
void Enemy::DispHp()
{
	std::cout << "GĚHP F " << hp << std::endl;
}
int Enemy::Attack(int i)
{
	printf("GĚU\n");
	return (int)(atk - i / 2);
}
void Enemy::Damege(int i)
{
	std::cout << "GÍ" << i << "Ě_[WđóŻ˝" << std::endl;
	hp = hp - i;
}
int Enemy::GetDef()
{
	return def;
}
bool Enemy::IsDead()
{
	if (hp <= 0)
		return true;
	else
		return false;
}


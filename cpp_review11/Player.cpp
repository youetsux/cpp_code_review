#include <iostream>
#include "Player.h"

Player::Player()
{
	hp = 300;
	atk = 50;
	def = 60;
}
void Player::DispHp()
{
	std::cout << "�v���C���[��HP �F " << hp << std::endl;
}
int Player::Attack(int i)
{
	printf("�v���C���[�̍U��\n");
	return (int)(atk - i / 2);
}
void Player::Damege(int i)
{
	std::cout << "�v���C���[��" << i << "�̃_���[�W���󂯂�" << std::endl;
	hp = hp - i;
}
int Player::GetDef()
{
	return def;
}
bool Player::IsDead()
{
	if (hp <= 0)
		return true;
	else 
		return false;
}


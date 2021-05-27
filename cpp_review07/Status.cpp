#include <iostream>
#include "Status.h"


Status::Status()
{
	lv = 0;
	hp = 0;
	atk = 0;
	def = 0;
}


bool Status::SetLv(int i)
{
	if (i >= 100) {
		lv = 99;
	}
	else {
		lv = i;
	}
	if (lv <= 0)
		return false;
	else 
		return true;
}
void Status::Calc()
{
	hp = lv * lv + 50;
	atk = lv * 10;
	def = lv * 9;
}
int Status::GetHp()
{
	return hp;
}
int Status::GetAtk()
{
	return atk;
}
int Status::GetDef()
{
	return def;
}
#pragma once
class Status
{
	int lv,hp,atk,def;
public:
	Status();
	bool SetLv(int i);
	void Calc();
	int GetHp();
	int GetAtk();
	int GetDef();
};


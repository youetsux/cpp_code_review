#pragma once
#include "Enemy.h"
#include "Player.h"


class Game
{
	Player ply;
	Enemy ene;

public:
	Game();
	void Loop();
};


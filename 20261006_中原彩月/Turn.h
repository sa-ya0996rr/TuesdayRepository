#pragma once
#include "Player.h"
#include "Enemy.h"

class Turn
{
private:
	Player* player;
	Enemy* enemy;

public:
	/// <summary>
	/// ターンのコンストラクタ
	/// </summary>
	/// <param name="p"プレイヤーのターン>
	/// <>
	Turn(Player* p, Enemy* e);

};


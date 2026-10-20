#include "Player.h"
#include "Enemy.h"
#include <iostream>

int main(void)
{
	// Character character
	Player player;
	Enemy enemy;

	// player.ShowStatus();
	// enemy.ShowStatus();
	// player.Attack();
	// enemy.Attack();

	Character* character[2] = { &player,&enemy };

	for (int i = 0; i < 2; i++)
	{
		character[i]->ShowStatus();
		character[i]->Attack();
	}

	return 0;
}
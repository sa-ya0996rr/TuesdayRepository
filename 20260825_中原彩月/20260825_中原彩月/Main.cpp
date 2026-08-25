#include <iostream>
#include "Example.h"
using namespace std;

int main(void)
{
	// プレイヤークラスを実体化
	Example exsample;

	exsample.hp = 100;
	exsample.attack = 20;
	exsample.playerX = 0;
	exsample.playerY = 0;
	exsample.showStatus();

	exsample.Move();
	exsample.Attack();
	exsample.Damage(30);

	exsample.ShowStatus();

	return 0;

}
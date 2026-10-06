#include "Player.h"
#include "Config.h"
#include <iostream>
using namespace std;

// コンストラクタ
Player::Pleyer():Character(){}

// プレイヤーの行動
void Player::Action(Character& target)
{
	int choice;

	cout << "\n【プレイヤーのターン】" << "１：攻撃\n" << "２：回復\n" << endl;

	while (turn)
	{
		cin >> choice;
		if (config::ACTION_ATTACK > choice || Config::ACTION_ATTACK < choice)
		{
			cout << "" << endl;
		}
		else
		{
			break;
		}
	}
	if
}

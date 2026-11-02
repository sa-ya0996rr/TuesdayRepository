#include "Enemy.h"
#include <iostream>
using namespace std;

// コンストラクタ
Enemy::Enemy(int hp)
{
	this->hp = hp;  // メンバ変数hpに引数hpを代入
}

Enemy::~Enemy(){}

// HPを表示する関数
void Enemy::ShowHp()
{
    cout << "敵のHP：" << hp << endl;
}
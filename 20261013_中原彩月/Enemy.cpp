#include "Enemy.h"
#include <iostream>
using namespace std;

Enemy::Enemy(string name) :Character(name) {}

void Enemy::Attack()
{
	cout << " Performs a biting attack." << endl;
}
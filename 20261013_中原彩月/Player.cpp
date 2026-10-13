#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string name) :Character(name) {}

void Player::Attack()
{
	cout << " Player attacks with a sword!" << endl;
}
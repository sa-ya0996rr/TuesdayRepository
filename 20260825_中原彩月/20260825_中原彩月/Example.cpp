#include "Example.h"
#include <iostream>
using namespace std;

void Example::Move()
{
	playerX += 10;
}

void Example::Attack()
{
	cout << "UŒ‚—Í" << attack << "UŒ‚‚µ‚Ü‚µ‚½";
}

void Example::Damage(int damage)
{
	hp -= damage;

	if (hp < 0)
	{
		hp = 0;
	}
}
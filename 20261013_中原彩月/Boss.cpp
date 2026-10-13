#include "Boss.h"
#include <iostream>
using namespace std;

Boss::Boss(string name) :Character(name) {}

void Boss::Attack()
{
	cout << " Boss attacks with a powerful strike!" << endl;
}
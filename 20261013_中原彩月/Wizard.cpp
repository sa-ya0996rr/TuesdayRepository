#include "Wizard.h"
#include <iostream>
using namespace std;

Wizard::Wizard(string name) :Character(name) {}

void Wizard::Attack()
{
	cout << " Wizard casts a fireball!" << endl;
}
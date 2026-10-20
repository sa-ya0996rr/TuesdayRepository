#include "Character.h"
#include <iostream>
using namespace std;

Character::Character(int hp, int energy)
{
    HP = hp;
    cursedEnergy = energy;
}

void Character::ShowStatus()
{
    cout << "HP: " << HP << endl;
    cout << "Žô—Í: " << cursedEnergy << endl;
}

Character::~Character(){}
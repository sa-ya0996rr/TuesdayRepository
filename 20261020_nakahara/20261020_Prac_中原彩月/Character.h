#pragma once

class Character
{
protected:
	int HP;
	int cursedEnergy;

public:
    Character(int hp, int energy);

    void ShowStatus();

    virtual void UseTechnique() = 0;

    virtual ~Character();
};
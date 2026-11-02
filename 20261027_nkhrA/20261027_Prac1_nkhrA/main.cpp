#include "Enemy.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

const int HP_MAX = 70;
const int HP_MIN = 30;

int main(void)
{
    // —”‰Šú‰»
    srand(unsigned(time(NULL)));

    // “G‚ğ‚Ü‚Æ‚ß‚ÄŠÇ—‚·‚é
    vector<Enemy> enemies;

    // “G‚ğ3‘Ì“o˜^‚·‚é
    for (int i = 0; i < 3; i++)
    {
        int hp = rand() % HP_MAX + HP_MIN;
        enemies.push_back(Enemy(hp));
    }

    // ‘Sˆõ‚ÌHP‚ğ•\¦‚·‚é
    for (int i = 0; i < enemies.size(); i++)
    {
        enemies[i].ShowHp();
    }

    return 0;
}
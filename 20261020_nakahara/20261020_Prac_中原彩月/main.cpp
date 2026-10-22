#include <iostream>
#include "Character.h"
#include "Megumi.h"
#include "Inumaki.h"
#include "Gojo.h"
using namespace std;

int main(void)
{
    Megumi megumi;
    Inumaki inumaki;
    Gojo gojo;

    // Character型のポインタ配列
    Character* characters[3];

    characters[0] = &megumi;
    characters[1] = &inumaki;
    characters[2] = &gojo;

    // 同じ処理でステータスと術式を表示
    for (int i = 0; i < 3; i++)
    {
        cout << "--------------------" << endl;

        characters[i]->ShowStatus();
        characters[i]->UseTechnique();

        cout << endl;
    }

    return 0;
}
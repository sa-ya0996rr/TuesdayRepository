#pragma once
class Enemy
{
private:
    int hp;

public:
    // コンストラクタ
    Enemy(int hp);
    ~Enemy();

    // HPを表示する関数
    void ShowHp();
};
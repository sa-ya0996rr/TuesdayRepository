#include <iostream>
using namespace std;

void Damage(int* hp)
{
	*hp -= 20;
}

void Heal(int* hp)
{
	*hp += 30;
}

int main(void)
{
	int hp = 100;
	int* php = &hp;

	cout<<
}
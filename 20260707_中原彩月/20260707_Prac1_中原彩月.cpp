#include <iostream>
#include "20260707_Header1_中原彩月.h"
using namespace std;

int main(void)
{
	// 配列
	int arry[INDEX] = {};

	// 配列に追加する
	cout << "10個数値を入力する。\n";

	// 配列へ入力する関数を呼び出します
	AddArray(arry, INDEX);

	// 偶数と奇数で振り分ける
	cout << "偶数：" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 == 0)
		{
			cout << arry[i] << "\n";
		}
	}

	cout << "奇数：" << endl;

	for (int i = 0; i < INDEX; i++)
	{
		if (arry[i] % 2 != 0)
		{
			cout << arry[i] << "\n";
		}
	}

	return 0;
}
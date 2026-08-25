#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:
    string Name;

    void ShowProfile()
    {
        cout << "名前：" << Name << endl;
    }
};

int main()
{
    // Dogクラスをオブジェクト化
    Dog dog;

    // 名前を設定
    dog.Name = "ポチ";

    // 名前を表示
    dog.ShowProfile();

    return 0;
}
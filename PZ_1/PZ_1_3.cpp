#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string color;
    cout << "Введите ваш любимый цвет: ";
    cin >> color;

    cout << "Мне тоже нравится " << color << " цвет";

    return 0;
}

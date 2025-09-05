#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    string color;
    cout << "Введите ваш любимый цвет: ";
    cin >> color;

    cout << "Мне тоже нравится " << color << " цвет";

    return 0;
}

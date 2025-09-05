#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    string name;
    cout << "Введите ваше имя: ";
    cin >> name;

    cout << "Добрый день, " << name;
    return 0;
}

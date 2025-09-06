#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    int x;
    cout << "Введите число x: ";
    cin >> x;

    bool result = not((x - 1) & x);
    cout << "Результат (является-ли x степенью 2?): " << result;

    return 0;
}
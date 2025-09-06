#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    int x, y;
    cout << "Введите число x: ";
    cin >> x;
    cout << "Введите число y: ";
    cin >> y;

    x ^= y;
    y ^= x;
    x ^= y;
    
    cout << "\nЗначение x (после овераций XOR): " << x << endl;
    cout << "Значение y (после овераций XOR): " << y;

    return 0;
}
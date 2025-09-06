#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    int cTpr;
    cout << "Введите температуру (\260C): ";
    cin >> cTpr;

    int fTpr = (cTpr * 9) / 5 + 32;
    cout << cTpr <<"\260C = " << fTpr << "\260F";

    return 0;
}
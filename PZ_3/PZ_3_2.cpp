#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    int a = 10;
    cout << "a (int a = 10;) = " << a << endl;

    cout << "a (++a;) = " << ++a << endl;

    a -= 3;
    cout << "a (a -= 3;) = " << a << endl;

    a %= 2;
    cout << "a (a %= 2;) = " << a << endl;

    return 0;
}
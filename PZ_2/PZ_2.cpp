#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    int x = 10;
    cout << "Адрес переменной x: " << &x << endl;
    cout << "Значение переменной x: " << x << "\n\n";

    int* xPtr = &x;
    cout << "Адрес, хранящийся в указателе на переменную x: " << xPtr << endl;
    cout << "Значение, хранящееся в указателе на переменную x: " << *xPtr << "\n\n";

    *xPtr = 20;
    cout << "Адрес переменной x: " << &x << endl;
    cout << "Новое значение переменной x: " << x << endl;
    cout << "Адрес, хранящийся в указателе на переменную x: " << xPtr << endl;
    cout << "Новое значение, хранящееся в указателе на переменную x: " << *xPtr << "\n\n";

    int& xLn = x;
    xLn = 30;
    cout << "Адрес переменной x: " << &x << endl;
    cout << "Новое значение переменной x: " << x << endl;
    cout << "Адрес, хранящийся в указателе на переменную x: " << xPtr << endl;
    cout << "Новое значение, хранящееся в указателе на переменную x: " << *xPtr << endl;
    cout << "Адрес ссылки на переменную x: " << &xLn << endl;
    cout << "Новое значение ссылки на переменную x: " << xLn << "\n\n";

    cout << "Размер переменной: " << sizeof(x) << " байт\n";
    cout << "Размер ссылки: " << sizeof(xLn) << " байт\n";
    cout << "Размер указателя: " << sizeof(xPtr) << " байт";

    return 0;
}
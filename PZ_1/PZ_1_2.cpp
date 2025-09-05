#include <iostream>
// #include <windows.h>

using namespace std;

int main()
{
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    string name;
    cout << "Введите ваше имя: ";
    cin >> name;

    cout << "Добрый день, " << name;
    return 0;
}

#include <iostream>
// #include <windows.h>

using namespace std;

int main()
{
    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    string name;
    cout << "������� ���� ���: ";
    cin >> name;

    cout << "������ ����, " << name;
    return 0;
}

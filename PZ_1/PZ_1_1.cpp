#include <iostream>
#include "../common.h"

using namespace std;

int main()
{
    setupLocale();
    setlocale(LC_ALL, "Russian");

    cout << "Здравствуй, мир!";

    return 0;
}

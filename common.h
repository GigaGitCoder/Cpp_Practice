#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <windows.h>

using namespace std;

// Функция для настройки локализации
void setupLocale()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
}

#endif
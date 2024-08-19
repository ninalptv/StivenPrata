/*Имеется следующий заголовочный файл :
// golf.h —
для ре9 - 1.срр
const int Len =
4Obstruct golf
{
char fullname[Len];
int handicap;
// Неинтерактивная версия:
// функция присваивает структуре.типа golf имя игрока и его гандикап (фору),
// используя передаваемые ей аргументы
void setgolf(golf& g, const char*
name, int he);
// Интерактивная версия:
// функция предлагает пользователю ввести имя и гандикап,
// присваивает элементам структуры g введенные значения;
// возвращает 1, если введено имя, и 0, если введена пустая строка
int setgolf(golf& g);
// Функция устанавливает новое значение гандикапа
void handicap(golf& g, int he);
// Функция отображает содержимое структуры типа golf
void showgolf(const golf& g);
Обратите внимание, что функция setgolf() перегружена.Вызов первой
версии функции имеет следующий вид :
golf ann
setgolf(ann, "Ann Birdfree", 24);
Функция предоставляет информацию, которая содержится в структуре ann.
Вызов второй версии функции имеет следующий вид :
golf andy
setgolf(andy);
Функция предлагает пользователю ввести имя и гандикап, а затем сохраняет эти
данные в структуре andy.Эта функция могла бы(но не обязательно) внутренне
использовать первую версию.
Постройте многофайловую программу на основе этого заголовочного файла.
Один файл по имени golf, epp должен содержать определения функций,
которые соответствуют прототипам заголовочного файла.Второй файл должен
содержать функцию main() и обеспечивать реализацию всех средств прототипи -
рованных функций.Например, цикл должен запрашивать ввод массива структур
типа golf и прекращать ввод после заполнения массива, либо когда вместо
имени игрока в гольф пользователь вводит пустую строку.Чтобы получить доступ к
структурам типа golf, функция main() должна использовать только прототипи -
рованные функции.*/


//golf.h
#pragma once
const int Len = 40;
struct golf
{
	char fullname[Len];
	int handicap;
};
// Неинтерактивная версия:
// функция присваивает структуре.типа golf имя игрока и его гандикап (фору),
// используя передаваемые ей аргументы
void setgolf(golf& g, const char* name, int he);
// Интерактивная версия:
// функция предлагает пользователю ввести имя и гандикап,
// присваивает элементам структуры g введенные значения;
// возвращает 1, если введено имя, и 0, если введена пустая строка
int setgolf(golf& g);
// Функция устанавливает новое значение гандикапа
void handicap(golf& g, int he);
// Функция отображает содержимое структуры типа golf
void showgolf(const golf& g);



//golf.cpp
#include <iostream>
#include "golf.h"

void setgolf(golf& g, const char* name, int hc)
{
    strcpy_s(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g)
{
    int nameHas = 0;
    std::cout << "\nPlease enter the name: ";
    std::cin.ignore();
    std::cin.get(g.fullname, Len);
    if (strlen(g.fullname) > 0)
    {
        nameHas = 1;
        std::cout << "Please enter the handicap: ";
        std::cin >> g.handicap;
    }

    return nameHas;
}

void handicap(golf& g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf& g)
{
    std::cout << std::endl << g.fullname << std::endl << g.handicap << std::endl;
}



//main.cpp
#include <cstring>
#include "golf.h"

int main()
{
    const int SIZE = 4;
    golf ann;
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);

    golf player[SIZE];
    int i = 0;
    for (; i < SIZE; ++i)
        if (setgolf(player[i]) == 0)
            break;

    for (int j = 0; j < i; ++j)
        showgolf(player[j]);
    return 0;
}

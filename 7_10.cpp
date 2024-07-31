//Спроектируйте функцию calculate(), которая принимает два значения типа
//double и указатель на функцию, принимающую два аргумента double и
//возвращающую значение double.Функция calculate() также должна иметь тип
//double и возвращать значение, вычисленное функцией, которая задана
//указателем, используя аргумент double функции calculate().Например,
//предположим, что имеется следующее определение функции add() :
//	double add(double x, double y)
//{
//	return x + y;
//}
//Приведенный ниже вызов функции должен заставить calculate() передать
//значения 2.5 и 10.4 функции add() и вернуть ее результат(12.9) :
//	double q =
//	calculate(2.5, 10.4, add);
//Используйте в программе эти функции и еще хотя бы одну дополнительную,
//которая подобна add().В программе должен быть организован цикл,
//позволяющий пользователю вводить пары чисел.Для каждой пары calculate() должна
//вызвать add() и хотя бы еще одну функцию такого рода.Если вы чувствуете
//себя уверенно, попробуйте создать массив указателей на функции, подобные
//add(), и организуйте цикл, применяя calculate() для вызова этих функций
//по их указателям.Подсказка: вот как можно объявить массив из трех таких
//указателей :
//double (*pf[3])(double, double);
//Инициализировать такой массив можно с помощью обычного синтаксиса
//инициализации массивов и имен функций в качестве адресов.

#include <iostream>
using namespace std;

double add(double x, double y)
{
	cout << "\nAddition: ";
	return x + y;
}

double multi(double x, double y)
{
	cout << "\nMultiplication: ";
	return x * y;
}

double division(double x, double y)
{
	cout << "\nDivision: ";
	return x / y;
}

double subtraction(double x, double y)
{
	cout << "\nSubtraction: ";
	return x - y;
}

double calculate(double x, double y, double (*pf)(double x, double y))
{
	return pf(x, y);
}

int main()
{
	double x , y;
	cout << "Enter two values: " << endl;
	double (*pf[4])(double, double);
	pf[0] = add;
	pf[1] = multi;
	pf[2] = division;
	pf[3] = subtraction;

	while(cin>>x>>y)
	{
		for(int i=0; i<4; i++)
		{
			cout  << calculate(x, y, pf[i]) << endl;
		}
		cout << "\nEnter two values('q'-quit): " << endl;
	}
	return 0;
}
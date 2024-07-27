//Вернитесь к программе из листинга 7.15, не использующей класс array.
//Напишите следующие две версии.
//а.Используйте обычный массив из const char*
//для строковых представлений
//времен года и обычный массив из double для расходов.
//б.Используйте обычный массив из const char*
//для строковых
//представлений времен года и структуру, единственный член которой является обычным
//массивом из double для расходов. (Это очень похоже на базовое проектное
//	решение для класса array.)


#include <iostream>
#include <string>
using namespace std;
// Константные данные
const int Seasons = 4;
const int Sizelen = 7;
const char Snames[Seasons][Sizelen] = { "Spring", "Summer", "Fall", "Winter" };
struct Exp
{
	double expenses[Seasons];
};
// Функция для изменения объекта array
void fill(double arr[], const char Snames[][Sizelen]);
// Функция, использующая объект array, но не изменяющая его
void show(double arr[], const char Snames[][Sizelen]);
int main()
{
	Exp expenses;
	fill(expenses.expenses, Snames);
	show(expenses.expenses, Snames);
	return 0;
}
void fill(double arr[], const char Snames[][Sizelen])
{
	for (int i = 0; i < Seasons; i++)
	{

		cout << "Enter " << Snames[i] << " expenses: "; // ввод расходов по временам года
		cin >> arr[i];
	}
}
void show(double arr[], const char Snames[][Sizelen])
{

	double total = 0.0;
	cout << "\nEXPENSES\n"; // вывод расходов по временам года
	for (int i = 0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total Expenses: $" << total << endl; // вывод общей суммы расходов
}
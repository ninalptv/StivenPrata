//Измените программу из листинга 8.14 так, чтобы использовать две шаблонных
//функции по имени SumArray(), возвращающие сумму содержимого массива
//вместо его отображения.Программа должна сообщать общее количество предметов
//и сумму всех задолженностей(debts).

#include <iostream>
template <typename T> 
void SumArray(T arr[], int n);

template <typename T> 
void SumArray(T*arr[], int n);
struct debts
{
	char name[50];
	double amount;
};

int main()
{
	using namespace std;
	int things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] =
	{
	{"Ima Wolfe", 2400.0},
	{"Ura Foxe", 1300.0},
	{"Iby Stout", 1800.0}
	};
	double*pd[3];
	for (int i =0; i < 3; i++)
		pd[i] = &mr_E[i].amount;
	cout << "Mr. E's summ of things :\n";
	SumArray(things, 6); 
	SumArray(pd, 3); 
	return 0;
}
template <typename T>
void SumArray(T arr[], int n)
{
	using namespace std;
	T sum_things = 0;
	for (int i = 0; i < n; i++)
		sum_things += arr[i];
	cout << sum_things<<endl<<endl;
}
template <typename T>
void SumArray(T* arr[], int n)
{
	using namespace std;
	T sum_debts = 0;
	for (int i = 0; i < n; i++)
		sum_debts += *arr[i];
	cout << "The count of items: " << n << "\nthe amount of debts: " << sum_debts << endl<<endl;
}
//Напишите программу, читающую в массив double до 10 значений
//пожертвований. (Или, если хотите, используйте шаблонный объект array.) Программа
//должна прекращать ввод при получении нечисловой величины.Она должна
//выдавать среднее значение полученных чисел, а также количество значений в
//массиве, превышающих среднее.
#include<iostream>
#include<array>
using namespace std;
const int MAX = 10;
int main()
{
	double donations[MAX];
	cout << "Please enter the donations.\n";
	cout << "You may enter up to " << MAX << " donations <q to terminate>. \n";
	cout << "donation 1: ";
	int i = 0;
	while (i < MAX && cin >> donations[i]) 
	{
		if (++i < MAX)
			cout << "donation " << i + 1 << ": ";
	}
	double total = 0.0;
	double avg_total;
	for (int j = 0; j < i; j++)
		total += donations[j];
	if (i == 0)
		cout << "No donations\n";
	else
	{
		avg_total = total / i;
		cout << avg_total << " = average number of " << i << " donations\n";
		int more_avg = 0;
		for (int j = 0; j < i; j++)
			if (donations[j] > avg_total)
				more_avg++;
		cout << more_avg << " values greater than the average";
	}
	return 0;
}
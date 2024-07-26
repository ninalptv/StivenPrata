//Ќапишите программу, использующую описанные ниже функции.
//Fill_array() принимает в качестве аргумента им€ массива элементов типа
//double и размер этого массива.ќна приглашает
//пользовател€ ввести значени€ double дл€ помещени€ их в массив.¬вод
//прекращаетс€ при наполнении массива либо когда
//пользователь вводит нечисловое значение и возвращает
//действительное количество элементов.
//Show_array() принимает в качестве аргументов им€ массива значений double,
//а также его размер, и отображает содержимое массива.
//Reverse_array() принимает в качестве аргумента им€ массива значений
//double, а также его размер, и измен€ет пор€док его
//элементов на противоположный.
//ѕрограмма должна использовать эти функции дл€ наполнени€ массива,
//обращени€ пор€дка его элементов, кроме первого и последнего, с последующим
//отображением.
#include <iostream>
using namespace std;
const int MAX = 20;
int Fill_array(double arr[], int SIZE);
void Show_array(const double arr[], int SIZE);
void Reverse_array(double arr[], int SIZE);
int main()
{
	double arr[MAX];
	int SIZE = Fill_array(arr, MAX);
	cout << "Your array:\n";
	Show_array(arr, SIZE);
	Reverse_array(arr+1, SIZE-2);
	cout << "Your reverse array:\n";
	Show_array(arr, SIZE);

	return 0;
}
int Fill_array(double arr[], int SIZE)
{
	cout << "Please enter values of array:" << endl;
	int i = 0;
	double val;
	while (cin>>val&&i<SIZE)
	{
		arr[i] = val;
		i++;
	}
	return i;
}
void Show_array(const double arr[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}

void Reverse_array(double arr[], int SIZE)
{
	reverse(arr, arr+SIZE);

}


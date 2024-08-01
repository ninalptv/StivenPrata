//Добавление и удаление первого(последнего) элемента массива.
#include <iostream>
using namespace std;
void FillArray(int* const arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
	}
}

void ShowArray(const int* const arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

void push_back(int*& arr, int& size, int value)
{
	int* newarray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newarray[i] = arr[i];
	}
	newarray[size] = value;
	size++;
	delete[]arr;
	arr = newarray;
}

void push_first(int*& arr, int& size, int value)
{
	size++;
	int* newarray = new int[size];
	for (int i = 1; i < size; i++)
	{
		newarray[i] = arr[i-1];
	}
	newarray[0] = value;
	delete[]arr;
	arr = newarray;
}

void pop_back(int*& arr, int& size)
{
	size--;
	int* newarray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newarray[i] = arr[i];
	}
	

	delete[]arr;
	arr = newarray;
}

void pop_first(int*& arr, int& size)
{
	size--;
	int* newarray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newarray[i] = arr[i+1];
	}


	delete[]arr;
	arr = newarray;
}

void main()
{
	int size = 8;
	int* arr = new int[size];
	FillArray(arr, size);

	ShowArray(arr, size);
	cout << "\n===============================================\n";
	push_back(arr, size, 78);
	ShowArray(arr, size);
	cout << "\n===============================================\n";
	pop_back(arr, size);
	pop_back(arr, size);
	ShowArray(arr, size);

	cout << "\n===============================================\n";
	push_first(arr, size, 45);
	push_first(arr, size, 47);
	ShowArray(arr, size);
	cout << "\n===============================================\n";
	pop_first(arr, size);
	ShowArray(arr, size);

	delete[]arr;
}

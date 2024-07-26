//�������� ���������, ������������ ��������� ���� �������.
//Fill_array() ��������� � �������� ��������� ��� ������� ��������� ����
//double � ������ ����� �������.��� ����������
//������������ ������ �������� double ��� ��������� �� � ������.����
//������������ ��� ���������� ������� ���� �����
//������������ ������ ���������� �������� � ����������
//�������������� ���������� ���������.
//Show_array() ��������� � �������� ���������� ��� ������� �������� double,
//� ����� ��� ������, � ���������� ���������� �������.
//Reverse_array() ��������� � �������� ��������� ��� ������� ��������
//double, � ����� ��� ������, � �������� ������� ���
//��������� �� ���������������.
//��������� ������ ������������ ��� ������� ��� ���������� �������,
//��������� ������� ��� ���������, ����� ������� � ����������, � �����������
//������������.
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


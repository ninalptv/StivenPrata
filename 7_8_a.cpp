//��������� � ��������� �� �������� 7.15, �� ������������ ����� array.
//�������� ��������� ��� ������.
//�.����������� ������� ������ �� const char*
//��� ��������� �������������
//������ ���� � ������� ������ �� double ��� ��������.
//�.����������� ������� ������ �� const char*
//��� ���������
//������������� ������ ���� � ���������, ������������ ���� ������� �������� �������
//�������� �� double ��� ��������. (��� ����� ������ �� ������� ���������
//	������� ��� ������ array.)


#include <iostream>
#include <array>
#include <string>
using namespace std;
// ����������� ������
const int Seasons = 4;
const int Sizelen = 7;
const char Snames[Seasons][Sizelen] = { "Spring", "Summer", "Fall", "Winter" };
// ������� ��� ��������� ������� array
void fill(double arr[], const char Snames[][Sizelen]);
// �������, ������������ ������ array, �� �� ���������� ���
void show(double arr[], const char Snames[][Sizelen]);
int main()
{
	double expenses[Seasons];
	fill(expenses,Snames);
	show(expenses, Snames);
	return 0;
}
void fill(double arr[],const char Snames[][Sizelen])
{
	for (int i =0; i < Seasons; i++)
	{

		cout << "Enter " << Snames[i] << " expenses: "; // ���� �������� �� �������� ����
		cin >> arr[i];
	}
}
void show(double arr[], const char Snames[][Sizelen])
{
	
	double total = 0.0;
	cout << "\nEXPENSES\n"; // ����� �������� �� �������� ����
	for (int i =0; i < Seasons; i++)
	{
		cout << Snames[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout <<"Total Expenses: $" << total << endl; // ����� ����� ����� ��������
}
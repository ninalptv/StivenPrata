/*�������� ���������, ������������� � ������������ ���� ���� ����� �����.
����� ��������� ������ ��������� � ������ ����� ���� ����� �����, �������
����� ����� ����� ������.��������������, ��� ������� �������� ��������
������.��������, ���� ������������ ���� 2 � 9, ��������� ������ ��������,
��� ����� ���� ����� ����� �� 2 �� 9 ����� 44.*/
#include <iostream>
using namespace std;
int main()
{
	cout << "Enret two integers\n";
	int int_1, int_2;
	cout << "Ineger 1: ";
	cin >> int_1;
	cout << "Integer 2: ";
	cin >> int_2;
	int sum_int=0;
	for (int i = int_1; i <= int_2; i++)
		sum_int += i;
	cout << "The sum of integers in a given rahge = " << sum_int<< endl;
	return 0;
}
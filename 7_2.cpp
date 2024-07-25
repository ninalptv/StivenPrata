//�������� ���������, ������� ����������� � ������������ 10 ����������� ����
//� �����, �������� �� � �������.��� ���� ���������� ���������� �����������
//����������� ����� �� ����� ���� 10 �����������.��������� ������ ����������
//��� ���������� � ����� ������ � �������� �� ������� ��������.����������
//����, ����������� � ���������� �������� � ���� ��������� ��������,
//���������� � ���������.
#include<iostream>
using namespace std;
const int Max = 10;
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n); 
double avg_results(double ar[], int n);
int main()
{
	setlocale(LC_ALL, "RU");
	double properties[Max];
	int size = fill_array(properties, Max);
	show_array(properties, size);
	cout << "�������������������� ����������� : " << avg_results(properties, size);
	return 0;
}
int fill_array(double ar[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin)
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "Bad input; input process terminated.\n"; 
		}
		else if (temp < 0) 
			break;
		ar[i] = temp;
	}
	return i;
}
void show_array(const double ar[], int n)
{
	cout << "Results: ";
	for (int i = 0; i < n; i++)
	{
		cout << ar[i] << " ";
	}
	cout << endl;
}

double avg_results(double ar[], int n)
{
	double summ = 0;
	for (int i = 0; i < n; i++)
	{
		summ += ar[i];
	}
	return summ / n;
}
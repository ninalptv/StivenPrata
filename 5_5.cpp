//�����������, ��� �� �������� ����� �� ���������������� �� ����� C++ ���
//����������.�������� ���������, ������� �������� ������ �����������
//������ ������ � ������� ����(� ���������� ����, � �� � �������).���������
//������ ������������ ����, � ������� ��������� ����������� � ���������
//������, �������� ������ ���������� �� char(��� ������ �������� string, ����
//	�� ������������� ���), ������������������ �������� �
//	���������� �������,
//	� �������� ��������� �������� � ������� int.����� ��������� ������ �����
//	����� ����������� ������� � ������ ����� ����� ������ �� ���.
#include<iostream>
#include<string>
int main()
{
	setlocale(LC_ALL, "RU");
	using namespace std;
	string* months = new string[12];
	months[0] = "������";
	months[1] = "�������";
	months[2] = "����";
	months[3] = "������";
	months[4] = "���";
	months[5] = "����";
	months[6] = "����";
	months[7] = "������";
	months[8] = "��������";
	months[9] = "�������";
	months[10] = "������";
	months[11] = "�������";
	int num_sales[12];
	int sum_sales = 0;
	for (int i = 0; i < 12; i++)
	{
		cout << "������� ���������� ��������� ���� �� " << months[i] << ": ";
		cin >> num_sales[i];
		sum_sales += num_sales[i];
	}
	cout << "O���� ����� ������ �� ���: " << sum_sales;
	delete[] months;
	return 0;
}
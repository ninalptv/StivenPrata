//�������� ���������, ������� ��������� ��������� ����, ������ ��� ������
//�� �������� �� ������ ����� � �������� ���������� �������� � �����.
#include<iostream>
#include<fstream>
#include <cstdlib>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RU");
	ifstream inFile;
	inFile.open("6_8.txt");
	if (!(inFile.is_open()))
	{
		cout << "Could not open the file" << endl;
		exit(EXIT_FAILURE);
	}
	char ch;
	int count = 0;
	inFile >> ch;
	while (inFile.good())
	{
		++count;
		inFile >> ch;
		cout << ch << "\t";
	}
	if (inFile.eof())
		cout << "\nEnd of file\n";
	else if (inFile.fail())
		cout << "�������������� ������";
	else
		cout << "����� ����������� �� ����������� �������";
	if (count == 0)
	{
		cout << "������ ��� ����������� �����������";
	}
	else
	{
		cout << "���������� �������� � �����: " << count;
	}
	inFile.close();
	
}
//�������� ���������, ������� ���������� ������ char � ���� ��� ������ ��
//������ ����� �� ��� �� ��� ���, ���� �� ����� ������� ����� done.�����
//��������� ������ �������� ���������� ��������� ����(�������� done).������
//������� ������ ���� ����� :
//������� �����(��� ���������� ������� ����� done) :
//	anteater birthday category dumpste�
//	envy finagle geometry done for sure
//	�� ����� 7 ���� .
#include<iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int size = 20;
	char answer[size];
	int qty = 0;
	cout << "������� �����(��� ���������� ������� ����� done) :\n";
	cin >> answer;
	while (strcmp(answer, "done"))
	{
		cin >> answer;
		++qty;
	}

	cout << "�� ����� " << qty << " ����." << endl;
	cin.get();

	return 0;
}
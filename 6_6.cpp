////��������� ���������, ������� ����������� ������������� � ��������
////������ ����������� ���.��� ������ ����������� � ������������
////���������� ���������, � ����� ���������� ������� �� ����� � ����� ������������� ��
////�������.���������� ������ ����������� � ����������� ���������� �������
////��������.������ ��������� ������ ����� ��� ����� : ���������� ������(���
////	������ string) ��� �������� ����� � ���������� - ���� ���� double �
////	���
////	�������� ����� �������������.����� ������ ���� ������ ��������� ������
////	���������� ����� � ����� ������������� ���, ��� �� ������� $10 000 �
////	�����.���� ������ ������ ���� ���������� ������ "Grand Patrons".����� �����
////	��������� ������ ������ ������ ��������� �������������.�� ������ ����
////	���������� "Patrons".���� � ����� �� ���� ��������� �� �������� ������,
//	��������� ������ ���������� "����".������ ����������� ���� ���������,
//	������� ������ ���������� ������ �� �����.
#include <iostream>
#include<string>
using namespace std;
struct Patrons
{
	string name_patron;
	double donats;
};
const int donat_max = 10000;
int main()
{
	int num_patrons;
	cout << "Please enter number of patrons: ";
	cin >> num_patrons;
	cin.ignore();
	Patrons* ps = new Patrons[num_patrons];
	int i;
	for (i = 0; i < num_patrons; ++i)
	{
		cout << "Enter patrons " << i + 1 << ": \n";
		cout << "Name patrons: ";
		getline(cin, ps[i].name_patron);
		cin.clear();
		cout << "Enter the amount of donations: ";
		cin >> ps[i].donats;
		cin.ignore();
	}
	int count_more = 0;
	int count_less = 0;
	cout << "Grand Patrons: \n";
	for (int j = 0; j < num_patrons; j++)
	{
		if (ps[j].donats >= donat_max)
		{
			cout << ps[j].name_patron << "  "
				<< ps[j].donats << endl;
			count_more += 1;
		}
	}
	if (count_more == 0)
		cout << " none\n";
	cout << "Patrons: \n";
	for (int j = 0; j < num_patrons; j++)
	{
		if (ps[j].donats < donat_max)
		{
			cout << ps[j].name_patron << "  "
				<< ps[j].donats << endl;
			count_less += 1;
		}
	}
	if (count_less == 0)
		cout << " none\n";
	delete[]ps;
	return 0;
}



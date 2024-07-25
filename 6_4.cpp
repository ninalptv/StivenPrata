//����� �� �������� � ����������������� ����� �������������(���), � ���
//����� ���������� �� ���������� ��� �� ������ ��������� �����, ��
//��������� ���� ���������� ����� ���.�������� ���������, ������� �����
//�������� ������ ������ �� �������� ������, ����������, ��������� ������ ����
//�� ������������ ������ �����.� ������ �������� ��������� ��������� :
//// ��������� ���� ������������������ ������ ������������� (���)
//struct bop {
//	char fullname[strsize]; // �������� ���
//	char title[strsize]; // ���������
//	char bopname[strsize]; // ��������� ��� ���
//	int preference; // 0 =
//	������ ���, 1 =
//		�����, 2 = ��� ���
//};
//� ���� ��������� �������� ��������� ������ ����� �������� �
//��������������� ��� ���������������� ����������.����� ��������� �������� ����,
//������� ���� ����������� ������������ �������� ������ ������������ :
//a.display by name b.display by title
//c.display by bopname d.display by preference
//q.quit
//�������� ��������, ��� "display by preference" (���������� �� �������������)
//�� ��������, ��� ����� ���������� ���� preference; ��� ������, ���
//���������� ���������� ���� ���������, ������� ������������� �������� preference.
//��������, ���� preference ����� 1, �� ����� d ������ ������� �����������
//��������� ������� ������������.������ ������� ���� ��������� �����
//��������� ��������� ������� :
//Benevolent Order of Programmers Report
//a.display by name b.display by title
//c.display by bopname d.display by preference
//q.quit
//Enter your choice : a
//Wimp Macho
//Raki Rhodes
//Celia Laiter
//Hoppy Hipman
//Pat Hand
//Next choice : d
//Wimp Macho
//Junior Programmer
//MIPS
//Analyst Trainee
//LOOPY
//Next choice : q
//Bye!
#include<iostream>
#include<string>
using namespace std;
const int strsize = 20;
struct bop {
	char fullname[strsize]; // �������� ���
	char title[strsize]; // ���������
	char bopname[strsize]; // ��������� ��� ���
	int preference; // 0 =������ ���, 1 =�����, 2 = ��� ���
};
int main()
{
	bop BOP[4] = {
		{"Ivan","jun","ivanj",0},
		{"Svtlana","programmer","lana",1},
		{"Vladimir","admin","advlad",2},
		{"Andrew","jun","Anrrew",0} };
	cout << "Benevolent Order of Programmers Report\n"
		<< "a.display by name b.display by title\n"
		<< "c.display by bopname d.display by preference\n"
		<< "q.quit";
	cout << "\nEnter your choice : ";
	char ch;
	cin >> ch;
	while (ch != 'q')
	{
		for (int i = 0; i < 4; ++i)
		{
			if (ch == 'a')
				cout << BOP[i].fullname << endl;
			if (ch == 'b')
				cout << BOP[i].title << endl;
			if (ch == 'c')
				cout << BOP[i].bopname << endl;
			if (ch == 'd')
			{
				switch (BOP[i].preference)
				{
				case 0: cout << BOP[i].fullname << endl;; break;
				case 1:cout << BOP[i].title << endl;; break;
				case 2:cout << BOP[i].bopname << endl;; break;
				default: cout << "choise 0,1,2\n";
				}
			}
			if (ch == 'q')
			{
				cout << "bue!";
				break;
			}
		}
		cout << "Next choice : ";
		cin >> ch;
	}
	cout << "BUE!\n";
	return 0;
}
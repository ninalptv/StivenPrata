//�������� �������������� ���������, ����������� ����.��� ������
//���������� ���� �� ������� �������, ������ �� ��� ������� ������.����
//������������ ������ �����, ������������ �� ������� ����������, ���������
//������ �������� ���������� ��� ������ ���������� �������� �� ��� ���, ����
//�� ����� �� �������.����� ��� ������ ��������� ��������� ������� ��������
//�� ������ ����������������� ������.������ ��������� ������ ���������
//�������� ��� :
//Please enter one of the following choices :
//c) carnivore p) pianist
//t) tree g) game
//f
//Please enter a c, p, t, or g: q
//Please enter a c, p, t, or g : t
//A maple is a tree.
#include <iostream>
using namespace std;
int main()
{
	cout << "Please enter one of the following choices :\n";
	cout << "c) carnivore p) pianist\nt) tree g) game\n";
	char ch;
	while (cin >> ch)
	{
		if(ch=='c')
		{
			cout << "Tiger is a carnivore"; 
			break;
		}
		if (ch == 'p')
		{
			cout << "Shopen is a pianist"; 
			break;
		}
		if (ch == 't')
		{
			cout << "A maple is a tree"; 
			break;
		}
		if (ch == 'g')
		{
			cout << "GTA is a game";
			break;
		}
		else
			cout << "Please enter a c, p, t, or g: ";
	}
	cout << endl;
	return 0;
}
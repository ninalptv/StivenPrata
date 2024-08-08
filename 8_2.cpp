//��������� CandyBar �������� ��� �����.������ ���� ������ �������� �������
//������.������ �
//�� ���(������� ����� ����� ������� �����), � ������ �
//���������� �������(����� ��������).�������� ���������, ������������
//�������, ������� ��������� � �������� ���������� ������ �� CandyBar, ���������
//�� char, �������� double � �������� int.������� ���������� ��� ���������
//�������� ��� ��������� ��������������� ������ ���������.��� ���������
//��������� ������ ����� �������� �� ��������� : "Millennium Munch", 2 . 85 � 350.
//����� ����, ��������� ������ ������������ �������, ������� ��������� �
//�������� ��������� ������ �� CandyBar � ���������� ���������� ���� ���������.
//��� ����������, ����������� const.

#include <iostream>
using namespace std;

struct CandyBar
{
	char const* NameCandyBox;
	double weight;
	int ccal;
};
void ShowCandyBar(const CandyBar& cb)
{
	cout << "The name of the candy box: " << cb.NameCandyBox << endl;
	cout << "The weigth of the candy box: " << cb.weight << endl;
	cout << "Calories: " << cb.ccal << endl;
}
CandyBar NewCandyBar(CandyBar& cd, char const* name = "Millennium Munch", double weight = 2.85, int ccal = 350)
{
	cd.NameCandyBox = name;
	cd.weight = weight;
	cd.ccal = ccal;
	return cd;
}

int main()
{
	CandyBar cb;
	NewCandyBar(cb);
	ShowCandyBar(cb);
	NewCandyBar(cb, "Tasty Candy", 3.09, 320);
	ShowCandyBar(cb);
	return 0;
}

//�������� ���������, ������� ����������� ����������� � ������������ ����
//����� �� ��� ���, ���� ���� �� ���� �� ���� ���� �� ����� ����� 0. �
//������ ����� ��������� ������ ������������ ������� ��� ���������� ��������
//�������������� ���� �����.������� ������ ���������� ����� main() ���
//����������� ����������.������� ������������� ����� �
//��� �������� ��������
//�������� �� ��������; ��� ����������� ��������� ������� :
//������� ������������� =
//2.0 � � * � / (� + �)
#include<iostream>
using namespace std;
double foo(int, int);
int main()
{
	setlocale(LC_ALL, "RU");
	cout << "�������� ��� ����� ����� ������: ";
	int x, y;
	cin >> x >> y;
	while (x != 0 and y != 0)
	{
		double result;
		result = foo(x, y);
		cout << "������� ������������� = " << result << endl;
		cout << "�������� ��� ����� ����� ������: ";
		cin >> x >> y;
	}

	return 0;
}
double foo(int x, int y)
{
	return 2.0 * x * y / (x + y);
}
//������������� ������� calculate(), ������� ��������� ��� �������� ����
//double � ��������� �� �������, ����������� ��� ��������� double �
//������������ �������� double.������� calculate() ����� ������ ����� ���
//double � ���������� ��������, ����������� ��������, ������� ������
//����������, ��������� �������� double ������� calculate().��������,
//�����������, ��� ������� ��������� ����������� ������� add() :
//	double add(double x, double y)
//{
//	return x + y;
//}
//����������� ���� ����� ������� ������ ��������� calculate() ��������
//�������� 2.5 � 10.4 ������� add() � ������� �� ���������(12.9) :
//	double q =
//	calculate(2.5, 10.4, add);
//����������� � ��������� ��� ������� � ��� ���� �� ���� ��������������,
//������� ������� add().� ��������� ������ ���� ����������� ����,
//����������� ������������ ������� ���� �����.��� ������ ���� calculate() ������
//������� add() � ���� �� ��� ���� ������� ������ ����.���� �� ����������
//���� ��������, ���������� ������� ������ ���������� �� �������, ��������
//add(), � ����������� ����, �������� calculate() ��� ������ ���� �������
//�� �� ����������.���������: ��� ��� ����� �������� ������ �� ���� �����
//���������� :
//double (*pf[3])(double, double);
//���������������� ����� ������ ����� � ������� �������� ����������
//������������� �������� � ���� ������� � �������� �������.

#include <iostream>
using namespace std;

double add(double x, double y)
{
	cout << "\nAddition: ";
	return x + y;
}

double multi(double x, double y)
{
	cout << "\nMultiplication: ";
	return x * y;
}

double division(double x, double y)
{
	cout << "\nDivision: ";
	return x / y;
}

double subtraction(double x, double y)
{
	cout << "\nSubtraction: ";
	return x - y;
}

double calculate(double x, double y, double (*pf)(double x, double y))
{
	return pf(x, y);
}

int main()
{
	double x , y;
	cout << "Enter two values: " << endl;
	double (*pf[4])(double, double);
	pf[0] = add;
	pf[1] = multi;
	pf[2] = division;
	pf[3] = subtraction;

	while(cin>>x>>y)
	{
		for(int i=0; i<4; i++)
		{
			cout  << calculate(x, y, pf[i]) << endl;
		}
		cout << "\nEnter two values('q'-quit): " << endl;
	}
	return 0;
}
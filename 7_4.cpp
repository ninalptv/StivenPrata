//������ ������� � ��� ������������ ������� ���, ��� ���� �������������
//� �������� 7.4.�� ���� �� ��������� �� ������ ������� ��������� ����� ��
//������ ������, ����������� ����� �������. (��������, �� ������ ������� 5
//	����� �� ���� 1 - 47.) �� ����� ���������� ���� �����(���������� �������� -
//		���) �� ������� ���������, ������ ��� 1 - 27. ����� �������� ������� ����, ��
//	������ ��������� ������� ��� ������.���� �������� ����������� ���
//	����������� ���������� ���� ������� � ����, ���������� �� �����������
//	���������� ����������.��������, ����������� �������� � ��������� �����
//	������� ����������� ��� ����������� ���������� 5 ������� �� 47, ���������� ��
//	����������� ���������� ������ ������ �� 27. ������������� ������� 7.4 ���
//	���������� ����������� �������� � ����� �������.
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main()
{
	using namespace std;
	double total, choices,total_2;
	// ���� ������ ���������� ������� � ���������� �������, ������� ����� �������
	cout << "Enter the total number of choices on the game card and the number of picks allowed:\n";
	while ((cin >> total >> choices) && choices <= total)
	{
		cout << "Enter the total number of choices on the game card for  one MEGAnumber:\n";
		cin >> total_2;
		cout << "You have one chance in ";
		cout << probability(total, choices)*probability(total_2,1); // ���������� � ����� ������
		cout << " of winning. \n";
		cout << "Next two numbers (q to quit) : ";
		// ���� ��������� ���� ����� (q ��� ����������)
	}
	cout << "bye\n";
	return 0;
}
// ��������� ������� ��������� ����������� �����������
// ���������� picks ����� �� numbers ���������
long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0; // ��������� ��������� ����������
	long double n;
	unsigned p;
	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}


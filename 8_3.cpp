//�������� �������, ������� ��������� ������ �� ������ string � ��������
//��������� � ����������� ���������� string � ������� �������� ��������.
//����������� ������� toupper(), ��������� � ����. 6.4 (��.����� 6).��������
//���������, ������������ ����, ������� ��������� ��������� ������ �������
//��� ������� �����.������ ������ ����� ��������� ��������� ������� :
//Enter a string(q to quit) : go away
//GO AWAY
//Next string(q to quit) : good grief!
//GOOD GRIEF!
//Next string(q to quit) : q
//Bye.
#include <iostream>
#include <string>
using namespace std;
string ToUpper(string & str)
{
	string newstr="";
	for (int i = 0; i < str.size(); i++)
	{
		newstr.push_back(toupper(str[i]));
	}
	return newstr;
}

int main()
{
	string str;
	/*str = "ddsgs gsg";
	cout << char(toupper(str[0]));
	cout << str.size();*/
	cout << "Enter a string(q to quit) :";
	getline(cin, str);
	while (str!="q")
	{
		cout << ToUpper(str) << endl;
		cout << "Next string(q to quit) :";
		getline(cin, str);
	}
	return 0;
}
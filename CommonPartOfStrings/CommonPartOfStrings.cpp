//��������� 5. ������� 3: �������� �������, ����������� � �������� ���������� ��� ������ � ������������ ����� ������� ���������, 
//��� ��������� ������� ��������� � ������� ����� � �()�. ��������, ���� ����������� ���� ������
//"abaracadabra" � "ab", �� ������� ���� "(ab)aracad(ab)ra".

#include <iostream>
#include <string>
#include "CommonString.h"; 
#include <algorithm>
using namespace std;

static inline void ReplaceAll(string &str, const string& from, const string& to);

int main()
{		
	setlocale(LC_ALL, "rus");
	CommonString sharedString; //��������� ������

	string first, second, common;

	cout << "������� ������ ������: ";
	cin >> first;

	cout << "������� ������ ������: ";
	cin >> second;
	
		
	common == sharedString.ReplaceAll(common, first, second);
	cout << common;

	//sharedString.printString();

	return 0;

}

inline void ReplaceAll()
{
}

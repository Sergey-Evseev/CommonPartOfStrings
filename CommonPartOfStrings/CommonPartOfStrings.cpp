//��������� 5. ������� 3: �������� �������, ����������� � �������� ���������� ��� ������ � ������������ ����� ������� ���������, 
//��� ��������� ������� ��������� � ������� ����� � �()�. ��������, ���� ����������� ���� ������
//"abaracadabra" � "ab", �� ������� ���� "(ab)aracad(ab)ra".

#include <iostream>
#include <string>
#include "CommonString.h"; 
#include <algorithm>
using namespace std;

int main()
{		
	setlocale(LC_ALL, "rus");
	CommonString sharedString; //��������� ������

	string first, second;

	cout << "������� ������ ������: ";
	cin >> first;

	cout << "������� ������ ������: ";
	cin >> second;
	
	sharedString.GetCommonString(first, second);
	//sharedString.printString();

	return 0;

}
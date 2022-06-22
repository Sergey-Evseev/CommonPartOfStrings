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

	string first, second, common;

	cout << "������� ������ ������: ";
	cin >> first;

	cout << "������� ������ ������: ";
	cin >> second;
	
	ReplaceAll(first, second, '('+second+')');

	return 0;
}

inline void ReplaceAll(string & str, const string & from, const string & to)
{   // Handles case where 'to' is a substring of 'from'
	size_t start_pos = 0;
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {
		str.replace(start_pos, from.length(), to);
		start_pos += to.length(); 
	}
	cout << str << endl;
}

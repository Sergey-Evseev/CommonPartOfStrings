//Методичка 5. Задание 3: Написать функцию, принимающую в качестве параметров две строки и возвращающую копию первого параметра, 
//все вхождения второго параметра в который взяты в «()». Например, если параметрами были строки
//"abaracadabra" и "ab", то вернуть надо "(ab)aracad(ab)ra".

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

	cout << "Введите первую строку: ";
	cin >> first;

	cout << "Введите вторую строку: ";
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

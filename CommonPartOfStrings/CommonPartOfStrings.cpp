//Методичка 5. Задание 3: Написать функцию, принимающую в качестве параметров две строки и возвращающую копию первого параметра, 
//все вхождения второго параметра в который взяты в «()». Например, если параметрами были строки
//"abaracadabra" и "ab", то вернуть надо "(ab)aracad(ab)ra".

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

static inline void ReplaceAll(string &str, const string& from, const string& to);

int main()
{		
	setlocale(LC_ALL, "rus");	

	string first, second;

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
	while ((start_pos = str.find(from, start_pos)) != std::string::npos) {//пока стартовая поз.= позиции с которой заменяется не равна концу строки
		str.replace(start_pos, from.length(), to);//заменить с позиции совпадения, на длину искомой строки, на измененную строку (в скобках)
		start_pos += to.length(); //стартовую позицию увеличить на длину искомой строки в скобках, искать дальше от нее
	}
	cout << str << endl;
}

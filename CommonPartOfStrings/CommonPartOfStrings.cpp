//Методичка 5. Задание 3: Написать функцию, принимающую в качестве параметров две строки и возвращающую копию первого параметра, 
//все вхождения второго параметра в который взяты в «()». Например, если параметрами были строки
//"abaracadabra" и "ab", то вернуть надо "(ab)aracad(ab)ra".

#include <iostream>
#include <string>
#include "CommonString.h"; 
#include <algorithm>
using namespace std;

int main()
{		
	setlocale(LC_ALL, "rus");
	CommonString sharedString; //экземпляр класса

	string first, second;

	cout << "Введите первую строку: ";
	cin >> first;

	cout << "Введите вторую строку: ";
	cin >> second;
	
	sharedString.GetCommonString(first, second);
	//sharedString.printString();

	return 0;

}
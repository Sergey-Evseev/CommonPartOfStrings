#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;
//Методы поиска в строке: Методичка 5 стр. 156
class CommonString
{
public:
	string GetCommonString(string const& str1, string const&str2) {

		if (str1.find(str2) < str1.length()) {

			for (auto it = str1.begin(); it < str1.end(); ++it) {
				cout << (str1 + str2);
				return str1 + str2;
			};
		} else { cout << "Строки не имеют совпадений" << endl; }
	}
	
	void printString() {
		
	}
		
};


#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;
//������ ������ � ������: ��������� 5 ���. 156
class CommonString
{
public:
	string GetCommonString(string const& str1, string const&str2) {
		for (auto it = str1.begin(); it < str1.end(); ++it) {
			if (str1.find(str2) < str1.length()) {	

				cout << (str1 + str2);
				return str1 + str2;
			};
		}
	};
	
	void printString() {
		
	}
		
};


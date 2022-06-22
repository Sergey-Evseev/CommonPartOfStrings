#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

using namespace std;
//Методы поиска в строке: Методичка 5 стр. 156

class CommonString
{
public:
	
	
	string GetCommonString(string const& str1, string const&str2) {
				
		
		
		
		/*for (auto i = 0; i < str1.size(); i++) {
			string substr = str1.substr(i);
			if (substr.find(str2))
			{	
				str1.replace();
				cout <<str1.at(i) << endl;
			}			
		}
		*/
				
		/*int pos = 0;
		for (auto it = str1.begin(); it != str1.end(); ++it) {
			string substr = str1.substr(pos);
			if (substr.find(str2))
			{
				str1.insert();
				cout << substr << endl;
			}
			pos++;
		}*/
		
		/*int found = str1.find(str2);
		if (found != string::npos)
			str1.replace(found, str2.length(), "seventh");*/
				

		return str1;
	}
	//void printString();
};
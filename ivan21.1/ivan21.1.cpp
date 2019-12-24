// ivan21.1.cpp : Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти количество слов в строке.

#include <iostream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	string string;

	cout << "Введите, пожалуйста, строку... ";
	getline(cin, string);

	int k = 0;
	for (int i = 0; i < string.size(); i++) 
	{
		while (string[i] != ' ' && i < string.size()) 
		{
			i++;
		}
		k++;
	}

	cout << "Колличество слов в данной строке = " << k << endl;
}
// ivan21.2.cpp : Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти длину самого короткого слова.

#include <iostream>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");

	string text;

	cout << "Введите, пожалуйста, строку... ";
	getline(cin, text);


	int min = INT_MAX;
	for (int i = 0; i < text.size(); i++) 
	{
		int k = 0;
		while (text[i] != ' ' && i < text.size()) 
		{
			i++;
			k++;
		}
		if (k <= min) 
		{
			min = k;
		}
	}

	cout << "Размер самого короткого слова = " << min << endl;
}
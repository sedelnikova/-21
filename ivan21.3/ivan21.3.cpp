// ivan21.3.cpp : 3. Дана строка, состоящая из русских слов, набранных заглавными буквами и разделенных пробелами (одним или несколькими). 
//Преобразовать каждое слово в строке, заменив в нем все последующие вхождения его первой буквы на символ «.» (точка). 
//Например, слово «МИНИМУМ» надо преобразовать в «МИНИ.У.». Количество пробелов между словами не изменять

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string text;

	cout << "Введите, пожалуйста, строку... ";
	getline(cin, text);

	for (int i = 0; i < text.size(); i++) 
	{
		if (!isupper(text[i]) && isalnum(text[i])) 
		{
			cout << "Пардон, давнные некорректны ;) ";
			return 0;
		}
	}

	for (int i = 0; i < text.size(); i++) 
	{
		int k = 0;
		while (isalnum(text[i])) 
		{
			i++;
			k++;
			if (text[i] == text[i - k]) 
			{
				text[i] = '.';
			}
		}
	}

	for (int i = 0; i < text.size(); i++) {
		cout << text[i];
	}
}
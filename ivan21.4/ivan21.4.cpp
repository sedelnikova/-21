// ivan21.4.cpp : 4. Дана строка-предложение на русском языке. Подсчитать количество содержащихся в строке гласных букв.

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string text;

	cout << "Enter a string ";
	getline(cin, text);

	int k = 0;

	for (int i = 0; i < text.size(); i++) 
	{

		if (_tolower(text[i]) == 'a' || _tolower(text[i]) == 'e' || _tolower(text[i]) == 'i' || _tolower(text[i]) == 'o' || _tolower(text[i]) == 'u') 
		{
			k++;
		}
	}

	cout << k << endl;
}
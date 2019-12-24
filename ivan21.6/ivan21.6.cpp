// ivan21.6.cpp : 6. Дана строка, содержащая полное имя файла. 
// Выделить из этой строки название последнего каталога (без символов «\»). Если файл содержится в корневом каталоге, то вывести символ «\».

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string text;

	cout << "Введите, пожалуйста, путь... ";

	getline(cin, text);

	int a = text.find_last_of('\\');
	int b;
	for (b = a - 1; b >= 0; b--) 
	{
		if (text[b] == '\\') 
		{
			break;
		}
	}
	for (int i = b + 1; i < a; i++) 
	{
		cout << text[i];
	}
	cout << endl;
}
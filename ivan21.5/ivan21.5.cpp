// ivan21.5.cpp : 5. Дана строка, содержащая полное имя файла, то есть имя диска, список каталогов (путь), 
// собственно имя и расширение. Выделить из этой строки имя файла (без расширения)

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string text;

	cout << "Введите, пожалуйста, путь ...";

	getline(cin, text);

	for (int i = text.find_last_of('\\') + 1; i < text.find_last_of('.'); i++) 
	{
		cout << text[i];
	}
	cout << endl;
}


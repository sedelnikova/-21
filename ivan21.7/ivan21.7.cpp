// ivan21.7.cpp : 7. Дана строка-предложение. Зашифровать ее, поместив вначале все символы, расположенные на четных позициях строки, 
//а затем, в обратном, все символы, расположенные на нечетных позициях (например, строка «Программа» превратится в «ргамамроП»).

#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	string chet, nechet;

	cout << "Введите, пожалуйста, строку... ";

	getline(cin, nechet);

	int check;
	for (int i = 1; i < nechet.size(); i += 2)
	{
		chet += nechet[i];
		check = i;
	}

	if (check == nechet.size() - 1)
	{
		for (int i = nechet.size() - 2; i >= 0; i -= 2) 
		{
			chet += nechet[i];
		}
	}

	else 
	{
		for (int i = nechet.size() - 1; i >= 0; i -= 2) 
		{
			chet += nechet[i];
		}
	}

	cout << chet << endl;
}

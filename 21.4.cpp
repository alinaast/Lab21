#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	int i, n, j;
	int k = 0;
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = 0; i <= n; i++)
	{
		if (s[i] == 'А' || s[i] == 'а' || s[i] == 'Е' || s[i] == 'е' || s[i] == 'И' || s[i] == 'и' || s[i] == 'О' || s[i] == 'о' || s[i] == 'У' || s[i] == 'у' || s[i] == 'ы' || s[i] == 'Э' || s[i] == 'э' || s[i] == 'Ю' || s[i] == 'ю' || s[i] == 'Я' || s[i] == 'я')
			k++;
	}
	cout << "Количество гласных букв в строке равно: " << k;
	return 0;
}

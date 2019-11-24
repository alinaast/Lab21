#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;
	char c(32);
	int i, n;
	int k = 0;
	int min = 100000;
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = 0; i <= n; i++)
		if (s[i] != c)
			k++;
		else if (s[i] == c)
		{
			if (k < min)
			min = k;
		k = 0;
		}
	cout << "Минимальный размер слова равен: " << min;
	return 0;
}

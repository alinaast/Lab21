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
	char c, c1(32), c2(46);
	int i, n, j;
	int k = 0;
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = 0; i < n; i++)
	{
		if (k == 0)
		{
			c = s[i];
			k++;
		}
		if (k > 0 && s[i + 1] == c)
			s[i + 1] = c2;
		if (s[i + 1] == c1)
		{
			k = 0;
			i++;
    	}
	}
	cout << "Полученная строка: " << s;
	return 0;
}
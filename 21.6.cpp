#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c(92);
	string s;
	int i, n, j, l;
	int m = 0;
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	l = s.rfind(c);
	for (i = l - 1; s[i] != c; i--)
		j = i;
	for (i = j; i < l; i++)
	{
		if (i == 2)
			cout << c;
		cout << s[i];
	}
	return 0;
}

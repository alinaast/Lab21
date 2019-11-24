#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char c(92);
	string s;
	int i, n, j, l;
	int m = 0;
	cout << "Введите строку: ";
    getline(cin, s);
	n = s.length();
	for (i = 0; i <= n; i++)
		if (i % 2 == 1)
			cout << s[i];
	for (j = n; j >= 0; j--)
		if (j % 2 == 0)
			cout << s[j];
	return 0;
}
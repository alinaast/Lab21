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
	int i, n, j, a, t;
	int k = 0;
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = n; i > 0; i--)
		if (s[i] == '.')
		{

     		t = i - 1;
			for (j = i + 1; s[j] != c; j--)
			{
				k++;
				a = j;
			}
		}
	for (i = a; i <= t; i++)
		cout << s[i];
	return 0;
}
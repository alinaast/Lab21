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
	cout << "Введите строку: ";
	getline(cin, s);
	n = s.length();
	for (i = 0; i <= n; i++)
		if (s[i] == c && s[i + 1] != c)
			k++;
	cout << "Количество пробелов в строке равно: " << k;
	return 0;
}

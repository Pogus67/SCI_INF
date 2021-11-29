#include "szyfro.h"
#include <iostream>
#include <string>

using namespace std;

string szyfro::szyfrcezara(string a) {
	int b;
	cout << "O ile chcesz przesunac cyfry? (1-26): ";
	cin >> b;
	string c;
	if (b >= 1 and b <= 26)
	{
		for (int i = 0; i < a.size(); i++) {
			unsigned char d;
			if (a[i] + b >= 123)
			{
				d = ((a[i] + b) % 123) + 97;
				c += d;
			}
			else if (a[i] > 96 && a[i] < 123)
			{
				d = a[i] + b;
				c += d;
			}
			else
			{
				c += a[i];
			}

		}
	}
	else
	{
		cout << "Zla Liczba!" << endl;
	}
	return c;
}

string szyfro::deszyfrcezara(string a) {
	int b;
	cout << "O ile chcesz przesunac cyfry? (1-26): ";
	cin >> b;
	string c;
	if (b >= 1 and b <= 26)
	{
		for (int i = 0; i < a.size(); i++) {
			unsigned char d;
			if ((a[i] - b) < 96)
			{
				d = a[i] - b;
				char e = (a[i] % 97) + 123;
				e -= b;
				d = e;
				c += d;
			}
			else if (a[i] >= 96)
			{
				d = a[i] - b;
				c += d;
			}
			else
			{
				c += a[i];
			}

		}
	}
	else
	{
		cout << "Zla Liczba!" << endl;
	}
	return c;

}

string szyfro::szyfrprzest(string a)
{
	string b;
	for (int i = 0; i <= a.size() - 1; i += 2)
	{
		swap(a[i], a[i + 1]);
		b += a[i];
		b += a[i + 1];
	}
	if (a.size() % 2 == 1)
	{
		b += a[a.size() - 1];
	}
	return b;
}

string szyfro::szyfroba(string a)
{
	a = szyfrprzest(szyfrcezara(a));
	return a;
}


#include <iostream>
#include <string>
#include "szyfro.h"
using namespace std;

string zmienna;
int liczba;
char wybranie;

szyfro co;


int main()
{
	cout << "Podaj ciag znakow: ";
	getline(cin, zmienna);
	cout << "Jakim sposobem chcesz to zaszyfrowac? (wpisz liczbe)" << endl;
	cout << "1. Szyfr Cezara" << endl;
	cout << "2. Szyfr Przestawieniowy" << endl;
	cout << "3. Szyfr Cezara i Przestawieniowy" << endl;
	cout << "4. Odszyfrowac" << endl;
	cout << "5. Szyfr RSA" << endl;
	cin >> wybranie;
	if (wybranie == '1')
	{
		cout << "Zaszyfrowany ciag znakow: " << co.szyfrcezara(zmienna) << endl;
	}
	else if (wybranie == '2')
	{
		cout << "Zaszyfrowany ciag znakow: " << co.szyfrprzest(zmienna) << endl;
	}
	else if (wybranie == '3')
	{
		cout << "Zaszyfrowany ciag znakow: " << co.szyfroba(zmienna) << endl;
	}
	else if (wybranie == '4')
	{
		cout << "Zaszyfrowany ciag znakow: " << co.deszyfrcezara(zmienna) << endl;
	}
	else if (wybranie == '5')
	{
		cout << co.szyfrRSA(zmienna) << endl;
	}
	else
	{
		cout << "Co ty robisz opie!";
	 }
}


// ConsoleApplication9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

// ConsoleApplication12.cpp : Ten plik zawiera funkcj� �main�. W nim rozpoczyna si� i ko�czy wykonywanie programu.
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
	else
	{
		cout << "Co ty robisz opie!";
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotycz�ce rozpoczynania pracy:
//   1. U�yj okna Eksploratora rozwi�za�, aby doda� pliki i zarz�dza� nimi
//   2. U�yj okna programu Team Explorer, aby nawi�za� po��czenie z kontrol� �r�d�a
//   3. U�yj okna Dane wyj�ciowe, aby sprawdzi� dane wyj�ciowe kompilacji i inne komunikaty
//   4. U�yj okna Lista b��d�w, aby zobaczy� b��dy
//   5. Wybierz pozycj� Projekt > Dodaj nowy element, aby utworzy� nowe pliki kodu, lub wybierz pozycj� Projekt > Dodaj istniej�cy element, aby doda� istniej�ce pliku kodu do projektu
//   6. Aby w przysz�o�ci ponownie otworzy� ten projekt, przejd� do pozycji Plik > Otw�rz > Projekt i wybierz plik sln

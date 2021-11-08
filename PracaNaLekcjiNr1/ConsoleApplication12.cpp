// ConsoleApplication12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

string zmienna;
int liczba;
char wybranie;

string szyfrcezara(string a) {
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

string deszyfrcezara(string a) {
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

string szyfrprzest(string a)
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

string szyfroba(string a)
{
	a = szyfrprzest(szyfrcezara(a));
	return a;
}

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
		cout << "Zaszyfrowany ciag znakow: " << szyfrcezara(zmienna) << endl;
	}
	else if (wybranie == '2')
	{
		cout << "Zaszyfrowany ciag znakow: " << szyfrprzest(zmienna) << endl;
	}
	else if (wybranie == '3')
	{
		cout << "Zaszyfrowany ciag znakow: " << szyfroba(zmienna) << endl;
	}
	else if (wybranie == '4')
	{
		cout << "Zaszyfrowany ciag znakow: " << deszyfrcezara(zmienna) << endl;
	}
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

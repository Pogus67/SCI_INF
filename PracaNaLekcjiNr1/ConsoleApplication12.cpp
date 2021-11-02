// ConsoleApplication12.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;

string zmienna;
int liczba;
char wybranie;

string szyfrcezara(string a, int b) {
	for (int i = 0; i <= a.size(); i++) {
		if ((a[i] + b) >= 97 and (a[i] + b) <= 122) 
		{
			a[i] = int(a[i]) + b;
		}
		else if ((a[i] + b) > 122)
		{
			a[i] = a[i] % 123 + 97;
		}

	}
	return a;
}

int main()
{    
	cout << "Podaj ciag znakow: ";
	getline(cin, zmienna);
	cout << "Jakim sposobem chcesz to zaszyfrowac? (wpisz liczbe)" << endl;
	cout << "1. Szyfr Cezara" << endl;
	cout << "2. Szyfr Przestawieniowy" << endl;
	cout << "2. Szyfr Cezara i Przestawieniowy" << endl;
	cout << "4. Odszyfrowac" << endl;
	cin >> wybranie;
	if (wybranie == '1')
	{
		cout << "O ile chcesz przesunac cyfry?: ";
		cin >> liczba;
		cout << szyfrcezara(zmienna, liczba) << endl;
	} 
	else if (wybranie == '2')
	{

	}
	else if (wybranie == '3')
	{

	}
	else if (wybranie == '4')
	{

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

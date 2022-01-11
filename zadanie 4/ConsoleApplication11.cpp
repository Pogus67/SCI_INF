#include <iostream>
#include "algorytmy.h"
#include <chrono>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	ofstream ofs("times.txt");

	algorytmy al;
	vector < int > tab;
	char wybor;
	al.sortowanie(tab, 20000, 20000);
	cout << "" << endl;
	cout << "" << endl;
	cout << "Jakiego algorytmu chcesz uzyc?" << endl;
	cout << "1. Sortowanie babelkowe" << endl;
	cout << "2. Sortowanie przez wstawienie" << endl;
	cout << "3. Sortowanie przez wybor" << endl;
	cout << "4. QuickSort" << endl;
	cin >> wybor;
	if (wybor == '1')
	{
		auto start = chrono::steady_clock::now();
		al.sortowaniebabelkowe(tab);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		al.pokaz(tab);
		cout << "----- Babelkowe -----\n Czas: " << sec.count() << "s\n";
	}
	else if (wybor == '2')
	{
		auto start = chrono::steady_clock::now();
		al.sortowaniewstawianie(tab);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		al.pokaz(tab);
		cout << "----- Przez Wstawianie -----\n Czas: " << sec.count() << "s\n";
	}
	else if (wybor == '3')
	{
		auto start = chrono::steady_clock::now();
		al.sortowaniewybor(tab);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		al.pokaz(tab);
		cout << "----- Przez Wybor -----\n Czas: " << sec.count() << "s\n";
	}
	else if (wybor == '4')
	{
		auto start = chrono::steady_clock::now();
		cout << "" << endl;
		cout << "SORTOWANIE SZYBKIE" << endl;
		al.sortowaniequick(tab, 0, tab.size() - 1);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		al.pokaz(tab);
		cout << "----- QuickSort -----\n Czas: " << sec.count() << "s\n";
	}
	else
	{
		cout << "Zly znak!" << endl;
	}

}


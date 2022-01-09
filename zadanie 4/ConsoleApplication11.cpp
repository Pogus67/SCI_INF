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
	al.sortowanie(tab);
	cout << "" << endl;
	cout << "" << endl;
	cout << "Jakiego algorytmu chcesz uzyc?" << endl;
	cout << "1. Sortowanie babelkowe" << endl;
	cout << "2. Sortowanie przez wstawienie" << endl;
	cout << "3. Sortowanie przez wybor" << endl;
	cin >> wybor;
	if (wybor == '1')
	{
		auto start = chrono::steady_clock::now();
		al.sortowaniebabelkowe(tab);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		cout << "----- Babelkowe -----\n Czas: " << sec.count() << "s\n";
	}
	else if (wybor == '2')
	{
		auto start = chrono::steady_clock::now();
		al.sortowaniewstawianie(tab);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		cout << "----- Przez Wstawianie -----\n Czas: " << sec.count() << "s\n";
	}
	else if (wybor == '3')
	{
		auto start = chrono::steady_clock::now();
		al.sortowaniewybor(tab);
		auto end = chrono::steady_clock::now();
		chrono::duration <double> sec = end - start;
		cout << "----- Przez Wybor -----\n Czas: " << sec.count() << "s\n";
	}
	else
	{
		cout << "Zly znak!" << endl;
	}

}


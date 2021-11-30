#include <iostream>
#include "algorytmy.h"
#include <vector>
using namespace std;
int main()
{
	algorytmy al;
	vector < int > tab;
	char wybor;
	al.sortowanie(tab);
	cout << "" << endl;
	cout << "" << endl;
	cout << "Jakiego algorytmu chcesz uzyc?" << endl;
	cout << "1. Sortowanie babelkowe" << endl;
	cout << "2. Sortowanie przez wstawienie" << endl;
	cin >> wybor;
	if (wybor == '1')
	{
		al.sortowaniebabelkowe(tab);
		al.pokaz(tab);
	}
	else if (wybor == '2')
	{
		al.sortowaniewstawianie(tab);
		al.pokaz(tab);
	}
	else
	{
		cout << "Zly znak!" << endl;
	}

}


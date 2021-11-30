#include "algorytmy.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void algorytmy::sortowanie(vector <int>& a)
{
	cout << "LICZBY" << endl;
	for (int i = 0; i < 100; i++)
	{
		a.push_back(rand() % 1001);
		cout << a[i] << " ";
	}

}
void algorytmy::sortowaniebabelkowe(vector <int>& a)
{
	for (int j = 0; j < 100; j++)
	{
		for (int i = 0; i < 99; i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(a[i], a[i + 1]);
			}
		}

	}
	cout << "" << endl;
	cout << "SORTOWANIE BABELKOWE" << endl;
}

void algorytmy::sortowaniewstawianie(vector <int>& a)
{
	int i, b;
	vector < int > vec = a;
	for (int j = 99; j >= 0; j--)
	{
		b = vec[j];
		i = j + 1;
		while (i < 100 && b > vec[i])
		{
			vec[i - 1] = vec[i];
			i++;
		}
		vec[i - 1] = b;
	}
	a = vec;
	cout << "" << endl;
	cout << "SORTOWANIE Z WSTAWIANIEM" << endl;
}
void algorytmy::pokaz(vector <int>& a)
{
	for (int i = 0; i < 100; i++)
	{
		cout << a[i] << " ";
	}

}
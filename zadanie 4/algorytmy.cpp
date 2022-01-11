#include "algorytmy.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void algorytmy::sortowanie(vector <int>& a, int b, int c)
{
	srand(time(NULL));
	cout << "LICZBY" << endl;
	for (int i = 0; i < b; i++)
	{
		a.push_back(rand() % (c + 1));
		cout << a[i] << " ";
	}

}
void algorytmy::sortowaniebabelkowe(vector <int>& a)
{
	for (int j = 0; j < a.size(); j++)
	{
		for (int i = 0; i < a.size() - 1; i++)
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
	for (int j = (a.size() - 1); j >= 0; j--)
	{
		b = vec[j];
		i = j + 1;
		while (i < a.size() && b > vec[i])
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

void algorytmy::sortowaniewybor(vector <int>& a)
{
	int b;
	vector < int > vec = a;
	for (int i = 0; i < a.size(); i++)
	{
		b = i;
		for (int j = i + 1; j < a.size(); j++)
		{
			if (a[j] < a[b])
			{
				b = j;
			}
		}
		swap(a[i], a[b]);
	}
	cout << "" << endl;
	cout << "SORTOWANIE Z WYBOREM" << endl;
}

void algorytmy::pokaz(vector <int>& a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " "; 
	}
	cout << "" << endl;

}

void algorytmy::sortowaniequick(vector <int>& a, int left, int right)
{
	int i = (left + right) / 2;
	int b = a[i];
	a[i] = a[right];
	int j = left;
	for (i = left; i < right; i++)
	{
		if (a[i] < b)
		{
			swap(a[i], a[j]);
			j = j + 1;
		}

	}
	a[right] = a[j];
	a[j] = b;
	if (left < j - 1)
	{
		sortowaniequick(a, left, j - 1);
	}
	if (j + 1 < right)
	{
		sortowaniequick(a, j + 1, right);
	}
}
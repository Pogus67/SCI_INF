#pragma once
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class algorytmy
{
public:
	// konstruktory i destruktory mi nie dzia�a�y, wi�c zrobi�em bez nich
	void sortowanie(vector <int>& a);
	void sortowaniebabelkowe(vector <int>& a);
	void sortowaniewstawianie(vector <int>& a);
	void sortowaniewybor(vector <int>& a);
	void pokaz(vector <int>& a);
};
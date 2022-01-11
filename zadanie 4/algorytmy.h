#pragma once
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class algorytmy
{
public:
	// konstruktory i destruktory mi nie dzia³a³y, wiêc zrobi³em bez nich
	void sortowanie(vector <int>& a, int b, int c);
	void sortowaniebabelkowe(vector <int>& a);
	void sortowaniewstawianie(vector <int>& a);
	void sortowaniewybor(vector <int>& a);
	void sortowaniequick(vector <int>& a, int left, int right);
	void pokaz(vector <int>& a);
};
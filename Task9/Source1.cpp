#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<stdio.h>
#include<vector>
#include<list>
#include<string>
#include<fstream>
#include <algorithm>
#include "Header.h"
using namespace std;

struct autko
{
	int rok;
	string kraj;
	string nazwa;
	int predkosc;
};
struct olej{
	string imie;
	bool opec;
	long oil;
};
void wyswietl1(vector<autko> &busik)
{
	cout << "Pierwsze auto, ktore przekroczylo predkosc 300 km/h:" << endl;
	for (auto itr = busik.begin(); itr != busik.begin() + 1; itr++)
	{
		cout << (*itr).nazwa;
		cout << (*itr).predkosc;
		cout << (*itr).rok << endl;
	}
}

void wyswietl(vector<autko> &busik)
{
	cout<< "ilosc aut, ktore przekroczylo predkosc 300 km/h: ";
	int r = 0;
	for (auto itr = busik.begin(); itr != busik.end(); itr++)
	{
		r++;
	}
	cout << r << endl;
}
void wyswietl2(vector<autko> &busik1)
{
	fstream file1;
	file1.open("cars_sorted.txt", ios::out);
	for (auto itr = busik1.begin(); itr != busik1.end(); itr++)
	{
		file1 << (*itr).nazwa << endl;

	}
	file1.close();
}
void wyswietl3(vector<autko> &busik)
{
	for (auto itr = busik.begin(); itr != busik.begin() + 1; itr++)
	{
		cout << (*itr).nazwa;
		cout << (*itr).predkosc;
		cout << (*itr).rok << endl;
	}
}
void info(fstream &file)
{
	string dane;
	while (!file.eof()) {
		getline(file, dane);
		cout << dane << endl;
	}
}
bool carsort(autko &s1, autko&s2)
{
	if (s1.rok < s2.rok)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool carsort1(autko &s1, autko&s2)
{
	if (s1.nazwa < s2.nazwa)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool carsort2(autko &s1, autko&s2)
{
	if (s1.predkosc > s2.predkosc)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool oilsort(olej &s1, olej &s2)
{
	if (s1.oil > s2.oil)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void info(vector<olej>&paliwo)
{
	
	for (auto itr = paliwo.begin(); itr != paliwo.end(); itr++)
	{
		if ((*itr).opec == true)
		{
			cout << (*itr).imie << endl;

		}

	}
}
void info1(vector<olej>&paliwo)
{
	int io = 0;
	cout << "10 najwiekszych producentow" << endl;
	for (auto itr = paliwo.begin(); itr != paliwo.begin() + 10; itr++)
	{

		cout << (*itr).imie << endl;
		cout << (*itr).oil << endl;
		if ((*itr).opec == true)
		{
			io++;

		}


	}

	cout << "Do Opec nalezy " << io << endl;
}
void info2(vector<olej>&paliwo)
{
	long o = 0;
	long no = 0;


	for (auto itr = paliwo.begin(); itr != paliwo.begin() + 20; itr++)
	{

		if ((*itr).opec == true)
		{
			o = o + (*itr).oil;

		}
		else
		{
			no = no + (*itr).oil;

		}


	}
	cout << "Sumaryczna produkcja krajow nalezacych do OPEC" << endl;
	cout << o << endl;
	cout << "Sumaryczna produkcja krajow nienalezacych do OPEC" << endl;
	cout << no << endl;
}
void info3(vector<olej>&paliwo)
{
	int wn = 0;
	for (auto itr = paliwo.begin(); itr != paliwo.end(); itr++)
	{
		long zmienna = ((*itr).oil) / (1440);
		if (zmienna > 1000)
		{
			wn++;
		}


	}
	system("pause");
	cout << " Ilosc krajow produkujacych wiecej ni¿ 1000 barylek na minutê ";
	cout << wn << endl;
}
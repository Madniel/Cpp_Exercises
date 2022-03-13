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
#include <algorithm>
#include<fstream>
#include "Header.h"
using namespace std; 
struct student
{
	string imie;
	string nazwisko;
	float ocena;
};

struct dziecko{
	string imie;
	string polozeniex;
	string polozeniey;
};
bool compare(student& dane1, student& dane2)
{
	if (dane1.imie < dane2.imie)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool polnoc(dziecko& s1, dziecko& s2)
{
	if (s1.polozeniey > s2.polozeniey)
	{
		return true;
	}
	else
	{
		return false;
	}
}
#pragma once
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
using namespace std;
struct autko;
struct olej;
bool carsort(autko &s1, autko&s2);
bool carsort1(autko &s1, autko&s2);
bool carsort2(autko &s1, autko&s2);
bool oilsort(olej &s1, olej &s2);
void wyswietl(vector<autko> &busik);
void wyswietl1(vector<autko> &busik);
void wyswietl2(vector<autko> &busik1);
void wyswietl3(vector<autko> &busik);
void info(vector<olej>&paliwo);
void info1(vector<olej>&paliwo);
void info2(vector<olej>&paliwo);
void info3(vector<olej>&paliwo);
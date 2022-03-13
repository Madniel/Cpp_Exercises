#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

//W tym pliku znajduja sie definicje funkcji

float sredniah(float*tab, int n) 
{
	float mianownik = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Prosze podac wartosc " << i<< " elementu tablicy" << endl;
		cin >> tab[i]; //wczytywanie wartosci tablicy
		
	}
	for (int i = 0; i < n; i++)
	{
		mianownik = mianownik + (1 / tab[i]); //obliczanie mianownika n=bedacego suma odwrotnosci wartosci elementow tablicy
	}
	float sredniaH = (n / mianownik); //obliczanie sredniej harmonicznej
	return sredniaH; //zwracanie wartosci

}
int wyrazy(char*tekst)
{
	int wyrazy = 0;
	for (int i = 0; i < strlen(tekst); i++)
	{
		if (tekst[i] == ' ')
		{
			wyrazy = wyrazy + 1; //funkcja zlicza ile jest spacji w tekscie
		}
	}
	wyrazy = wyrazy + 1; //to ilosci spacji dodajemy 1 i w ten sposob otrzymujemy ilosc wyrazow
	return wyrazy; //zwracamy wartosc

}
int podobna(int*tab, int n)
{
	int podobna;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		tab[i] = rand() % 101; //do kazdego elementu tablicy przypisujemy losowa wartosci od 0 do 100 za pomoca funkcji rand()%101
		cout << "Element "<<i<<" tablicy ma wartosc: " << tab[i] << endl;
	}
	do
		podobna = rand(); //losujemy wartosci i sprawdzamy czy miesci sie w przedziale od 0 do 100
	while (!((podobna >= 0) && (podobna <= 100)));
	return podobna; //zwracamy poprawna warosc

}
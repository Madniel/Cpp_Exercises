#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include "Michal_biblioteka.h" //umieszczenie biblioteki z deklaracjami
using namespace std;

int main()
{


	bool petla = true; //warunek powtarzania sie petli while


	while (petla)
	{
		signed char znak;
		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[1] - cwiczenie 8 (srednia harmoniczna)." << endl;
		cout << "[2] - cwiczenie 9 (Obliczanie ilosci wyrazow)." << endl;
		cout << "[3] - cwiczenie 10 (Zwracanie najbardziej zblizonej liczby do podanej z tablicy )." << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
		cout << "[x], [X] - wyjscie z programu" << endl;
		cin >> znak;


		petla = false;
		switch (znak)
		{
		case '1':
		{
			const int n = 5; //przypisanie stalej ilosci elementow funkcji
			float tab[n]; //Tworzenie tablicy z n-elementami
			float sredniaH = sredniah(tab, n); //wywolanie funkcji sredniah 
			cout << "Srednia Harmoniczna wynosi:" << endl;
			cout << sredniaH << endl;
			system("pause");
			petla = true;
		}
		break;
		case '2':
		{
			cout << "Podaj tekst" << endl;
			char tekst[100]; //Tworzenie tablicy znakow
			cin.ignore();
			cin.getline(tekst, 100); //Wczytywanie tekstu
			int ilosc = wyrazy(tekst); //Wywolanie funkcji odpowiedzialne za obliczanie liczby wyrazow.
			cout << "W  tekscie jest " << ilosc << " wyrazow." << endl;
			system("pause");
			petla = true;
		}
		break;
		case '3':
		{
			const int n = 5;
			int tablica[n]; //Tworzenie tablicy z wartosciami od 0 do 100
			float tab2[n]; //druga tablica do przechowywania wartosci bezwzglednej roznicy i-elementu tablicy i liczby podobnej
			cout << "Wartosci tablicy to:" << endl;
			int zblizona = podobna(tablica, tab2, n); //Wykorzystanie funkcji do zwracania najbardziej zblizonej wartosci
			cout << "Liczba najbardziej zblizona wynosi:" << endl;
			cout << zblizona << endl;
			system("pause");
			petla = true;
		}
		break;
		case 'x': //wciœniêcie  x lub X koñczy pracê programu
		case 'X':
			break;
		default: //w przypadku wcisniecia zlego przycisku wyswietlany jest komunikat o blednym znaku
			cout << endl;
			cout << "Wcisnieto zly przycisk!!" << endl;
			cout << endl;
			petla = true;

		}
		}

		return 1;
	}
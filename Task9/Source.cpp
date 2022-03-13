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
int main()
{

	bool petla = true; //warunek powtarzania sie petli while


	while (petla)
	{

		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[1] - zadanie 1." << endl;
		cout << "[2] - zadanie 2." << endl;
		cout << "[x],[X] - wyjscie." << endl;
		petla = false;
		signed char znak;
		cin >> znak;
		switch (znak)
		{
		case '1':
		{
			fstream file;

			file.open("cars.csv", std::ios::in | std::ios::out);
			if (!(file.is_open()))
			{
				cout << "Plik nie zostal otwarty poprawnie!" << endl;
			}
			string rok1;
			string tekst;
			string vel1;
			vector<autko>busik;
			vector<autko>busik1;
			while (getline(file, tekst))
			{
				string nazwa1;
				vector<string> v;
				int i = 0;
				string kraj1;
				string prok;
				int rok;
				string kraj; //country
				string imie;	//name
				string pvel; //string speed
				int vel;

				while (tekst[i] != ';')
				{

					prok.push_back(tekst[i]);
					i++;
				}
				i++;
				while (tekst[i] != ';')
				{
					kraj.push_back(tekst[i]);
					i++;
				}
				i++;
				while (tekst[i] != ';')
				{
					imie.push_back(tekst[i]);
					i++;
				}

				i++;
				while (tekst[i] != 'k')
				{

					pvel.push_back(tekst[i]);

					i++;
				}
				vel1 = pvel;
				kraj1 = kraj;
				rok1 = prok;
				nazwa1 = imie;
				int czy = stoi(vel1);
				if (czy > 300)
				{

					autko szybkie;
					int rokw = stoi(rok1);
					szybkie.rok = rokw;
					szybkie.predkosc = czy;
					szybkie.kraj = kraj1;
					szybkie.nazwa = nazwa1;

					busik.push_back(szybkie);
					busik1.push_back(szybkie);
				}
				else
				{
					autko wolne;
					int rokw = stoi(rok1);
					wolne.rok = rokw;
					wolne.predkosc = czy;
					wolne.kraj = kraj1;
					wolne.nazwa = nazwa1;

					busik1.push_back(wolne);
				}

				v.push_back(tekst);
			}
			file.close();
			sort(busik.begin(), busik.end(), carsort);
			wyswietl1(busik);
			system("pause");
			wyswietl(busik);
			system("pause");
			sort(busik1.begin(), busik1.end(), carsort1);
			wyswietl2(busik1);
			cout << "Utworzono plik" << endl;
			system("pause");
			sort(busik.begin(), busik.end(), carsort2);
			wyswietl3(busik);
			system("pause");
			petla = true;
		}
		break;
	
	case '2':
	{
	fstream file;
	file.open("oil.csv", std::ios::in | std::ios::binary);
	if (!(file.is_open()))
	{
		cout << "Plik nie zostal otwarty poprawnie!" << endl;
	}
	string dane;
	while (!file.eof()) {
		getline(file, dane);
		cout << dane << endl;
	}
	file.close();
	system("pause");
	file.open("oil.csv", std::ios::in | std::ios::binary);
	if (!(file.is_open()))
	{
		cout << "Plik nie zostal otwarty poprawnie!" << endl;
	}

	string tex;
	vector<olej>paliwo;
	while (getline(file, tex))
	{
		olej panstwo;
		string nazwa;
		string ilosc;
		int i = 0;
		

		while (tex[i] != ';' && tex[i]!='(')
		{
			nazwa.push_back(tex[i]);
		
			i++;
		}
		
		panstwo.imie = nazwa;
		
		if (tex[i] == '(')
		{
			panstwo.opec = true;
			
			i = i+ 6;
		}
		
		else
		{
			panstwo.opec = false;
		}
		
		
		i++;
		while (tex[i] != ',')
		{
			ilosc.push_back(tex[i]);
			i++;
		}
		
		i++;
		
		for (int j = 0; j < 3; j++)
		{
			ilosc.push_back(tex[i]);
			i++;

		}
		if (tex[i]== ',')
		{
			i++;

			for (int j = 0; j < 3; j++)
			{
				ilosc.push_back(tex[i]);
				i++;

			}
		}
		long ilosc1 = stoi(ilosc);
		panstwo.oil  = ilosc1;
		
		paliwo.push_back(panstwo);
	

	}
	cout << "Panstwa nalezace do OPEC" << endl;
	info(paliwo);
	system("pause");
	sort(paliwo.begin(), paliwo.end(), oilsort);
	info1(paliwo);
	system("pause");
	info2(paliwo);
	system("pause");
	info3(paliwo);
	file.close();

	
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
	}return 1;
}
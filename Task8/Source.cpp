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
int main()
{
	bool petla = true; //warunek powtarzania sie petli while


	while (petla)
	{
		signed char znak;
		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[1] - cwiczenie 1." << endl;
		cout << "[2] - cwiczenie 2." << endl;
		cout << "[3] - cwiczenie 4." << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
		cout << "[x], [X] - wyjscie z programu" << endl;
		cin >> znak;
		petla = false;

		switch (znak)
		{
		case '1':
		{
			bool petla1 = true; //warunek powtarzania sie petli while
			vector<student> baza;
		

			while (petla1)
			{

				char klawisz;
				cout << "Witamy w programie SuperDziekanat_v2. Naciœnij dany przycisk, by wykonac zadanie" << endl;
				cout << endl;
				cout << "[1] - Wyswietl studenta" << endl;
				cout << "[2] - Dodaj studenta " << endl;
				cout << "[3] - znajdz i wyœwietl studenta o podanym nazwisku" << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
				cout << "[4] - modyfikuj studenta o zadanym nazwisku" << endl;
				cout << "[5] - wyswietl sredni¹ ocen studentow" << endl;
				cout << "[6] - wyswietl studentow o zadanej ocenie" << endl;
				cout << "[7] - podaj statystykê ocen studentow" << endl;
				cout << "[8] - usun studenta o zadanym nazwisku" << endl;
				cout << "[9] - usun wszystkich studentow." << endl;
				cout << "[x], [X] - wyjscie z programu" << endl;
				cin >> klawisz;

				petla1 = false;
				string name;
				string name1;
				string name2;
				student nowy;
				string wybor;
				float suma;
				float ocena;
				switch (klawisz)
				{
				case '1':
				{
					if (baza.empty())
					{
						cout << "Brak studentow do wyswietlenia. Prosze ich dodac" << endl;
					}
					else
					{

						for (auto itr = baza.begin(); itr != baza.end(); itr++)
						{
							// dostêp za pomoc¹ operatora ->
							cout << itr->imie << endl;
							cout << itr->nazwisko << endl;
							cout << itr->ocena << endl;
							cout << endl;
						}

					}
					system("pause");
					petla1 = true;
				}
				break;

				case'2':
				{

					cout << "Podaj imie" << endl;
					cin >> nowy.imie;
					cout << "Podaj nazwisko" << endl;
					cin >> nowy.nazwisko;
					cout << "Podaj ocena" << endl;
					cin >> nowy.ocena;
					baza.push_back(nowy);
					petla1 = true;
				}
				break;

				case '3':
				{
					cout << "Podaj nazwisko" << endl;
					cin >> name;
					for (auto itr = baza.begin(); itr != baza.end(); itr++)
					{
						if ((*itr).nazwisko == name)
						{
							// dostêp za pomoc¹ operatora ->
							cout << itr->imie << endl;
							cout << itr->nazwisko << endl;
							cout << itr->ocena << endl;
						}
						system("pause");
						petla1 = true;
					}
					break;

				case'4':
				{
					cout << "Podaj nazwisko" << endl;
					cin >> name1;
					for (auto itr = baza.begin(); itr != baza.end(); itr++)
					{
						if ((*itr).nazwisko == name1)
						{
							cout << "Co chcesz zmodyfikowac" << endl;
							cout << "Imie, nazwisko czy ocena" << endl;
							cout << "[x], [X] - wyjscie" << endl;
							cin >> wybor;
							if (wybor == "imie" || wybor == "Imie")
							{
								cin >> itr->imie;
							}
							if (wybor == "nazwisko" || wybor == "Nazwisko")
							{
								cin >> itr->nazwisko;
							}
							if (wybor == "ocena" || wybor == "Ocena")
							{
								cin >> itr->ocena;
							}
							if (wybor == "x" || wybor == "X")
							{
								break;
							}
							else
							{
								continue;
							}
						}
					}

					system("pause");
					petla1 = true;
				}
				break;
				case '5':
				{

					if (baza.size() > 0)
					{
						for (auto itr = baza.begin(); itr != baza.end(); itr++)
						{
							suma = +itr->ocena;
						}
						cout << "Srednia wynosi " << (suma / baza.size())*2 << endl;
					}
					else
					{
						cout << "Brak studentow." << endl;
					}

					system("pause");
					petla1 = true;

					break;

				case '6':
					cout << "Podaj ocene" << endl;

					cin >> ocena;
					for (auto itr = baza.begin(); itr != baza.end(); itr++)
					{
						if ((*itr).ocena == ocena)
						{
							// dostêp za pomoc¹ operatora ->
							cout << itr->imie << endl;
							cout << itr->nazwisko << endl;
							cout << itr->ocena << endl;
						}
						system("pause");
						petla1 = true;
					}
					break;
				case '7':
				{
					int n = 0;
					int p = 0;
					int e = 0;
					int g = 0;
					int h = 0;
					int i = 0;
					int j = 0;
					for (auto itr = baza.begin(); itr != baza.end(); itr++)
					{

						if ((*itr).ocena == 2.0)
						{
							n++;
						}
						if ((*itr).ocena == 2.5)
						{
							p++;
						}
						if ((*itr).ocena == 3.0)
						{
							e++;
						}
						if ((*itr).ocena == 3.5)
						{
							g++;
						}
						if ((*itr).ocena == 4.0)
						{
							h++;
						}
						if ((*itr).ocena == 4.5)
						{
							i++;
						}
						if ((*itr).ocena == 5.0)
						{
							j++;
						}
					}
					cout << "Ocen 2.0 jest " << n << endl;
					cout << "Ocen 2.5 jest " << p << endl;
					cout << "Ocen 3.0 jest " << e << endl;
					cout << "Ocen 3.5 jest " << g << endl;
					cout << "Ocen 4.0 jest " << h << endl;
					cout << "Ocen 4.5 jest " << i << endl;
					cout << "Ocen 5.0 jest " << j << endl;

					system("pause");
					petla1 = true;
				}
				break;
				}
				case '8':
				{
					cout << "Podaj nazwisko" << endl;

					cin >> name2;
					for (auto itr = baza.begin(); itr != baza.end(); itr)
					{
						if ((*itr).nazwisko == name2)
						{
							itr=baza.erase(itr);
						}
						else
						{
							itr++;
						}
					}
					system("pause");
					petla1 = true;
				}
				break;
				case '9':
				{
					baza.clear();
					system("pause");
					petla1 = true;
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
			}
		}
		
		case'2':
		{
			char kolko;
			vector<vector<char> > v_2d;
			int number_of_rows = 3;
			int number_of_cols = 3;
			for (int i = 0; i < number_of_rows; i++)
			{
				// dla ka¿dego wiersza tworzymy nowy wektor  
				vector<char> v_row;
				
				for (int j = 0; j < number_of_cols; j++)
				{
					if ((i > 0) && (i<2))
					{

						for (int g = 0; g < 3; g++)
						{

							cout << v_2d[i - 1][g] << "\t";

						}cout << endl;
					}
					if (i == 2)
					{
						for (int g = 0; g < 3; g++)
						{

							cout << v_2d[i - 2][g] << "\t";

						}cout << endl;

						for (int g = 0; g < 3; g++)
						{

							cout << v_2d[i - 1][g] << "\t";

						}cout << endl;
					}
					
					cout << "Stan gry z dolu do gory." << endl;
					cin >> kolko;
					v_row.push_back(kolko);
			
					if (!(v_row.size() == 3))
					{
						for (int i = 0; i <= j; i++)
						{

							cout << v_row[i] << "\t";
						}
					}
					cout << endl;
				}
				
				// dodajemy nowy wiersz do g³ównego wektora
				v_2d.push_back(v_row);
			}
			cout << "Wynik gry z gory do dolu" << endl;
			for (int g = 0; g < 3; g++)
			{

				cout << v_2d[3 - 3][g] << "\t";

			}cout << endl;
			for (int g = 0; g < 3; g++)
			{

				cout << v_2d[3 - 2][g] << "\t";

			}cout << endl;

			for (int g = 0; g < 3; g++)
			{

				cout << v_2d[3 - 1][g] << "\t";

			}cout << endl;

		system("pause");
		petla = true;
		}
				break;

				
		case '3':
		{
			vector<dziecko>swm;
			const int n = 4;
			for (int i = 0; i < n; i++)
			{
				dziecko nowe;
				cout << "Podaj imie" << endl;
				cin >> nowe.imie;
				cout << "Podaj polozeniex" << endl;
				cin >> nowe.polozeniex;
				cout << "Podaj polozeniey" << endl;
				cin >> nowe.polozeniey;
				swm.push_back(nowe);
			}

			sort(swm.begin(), swm.end(), polnoc);
			cout << endl << "Collection after sorting : " << endl;
			for (auto itr = swm.begin(); itr != swm.end(); itr++)
			{
				cout << itr->imie << endl;
				cout << itr->polozeniex << endl;
				cout << itr->polozeniey << endl;
			}

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



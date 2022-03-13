#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<vector>
#include<list>

using namespace std;

vector<int> v3(vector<int>&v1, vector<int>&v2)
{
	vector<int> vSuma;
	for (auto itr = v1.begin(); itr != v1.end(); ++itr)
	{
		vSuma.push_back(*itr);
	}
	for (auto itr = v2.begin(); itr != v2.end(); ++itr)
	{
		vSuma.push_back(*itr);
	}
	return vSuma;
}
vector<int> v4(vector<int>&v1, vector<int>&v2)
{
	vector<int> vSuma;
	int tab[10];
	int i = 0;
	for (auto itr = v1.begin(); itr != v1.end(); ++itr)
	{
		tab[i] = *itr;
		i++;
	}
	int r = 0;
	for (auto itr = v2.begin(); itr != v2.end(); ++itr)
	{
		tab[r] = tab[r] + *itr;
		r++;
	}
	for (int i = 0; i < v1.size(); i++)
	{
		vSuma.push_back(tab[i]);
	}
	
	return vSuma;
}

int main()
{


	bool petla = true; //warunek powtarzania sie petli while


	while (petla)
	{
		signed char znak;
		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[1] - zadanie 1 " << endl;
		cout << "[2] - zadanie 2  " << endl;
		cout << "[3] - zadanie 3 " << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
		cout << "[x], [X] - wyjscie z programu" << endl;
		cin >> znak;
		

		petla = false;

		switch (znak)
		{
		case '1':
		{
			vector<int> v1;
			vector<int> v2;
			int n1;
			cout << "Podaj ilosc elementow wektora pierwszego" << endl;
			cin >> n1;
			for (int i = 0; i < n1; i++)
			{
				int wartosc;
				cout << "Podaj wartosc " << i << " elementu wektora" << endl;
				cin >> wartosc;
				v1.push_back(wartosc);
			}
			int n2;
			cout << "Podaj ilosc elementow wektora drugiego" << endl;
			cin >> n2;
			for (int i = 0; i < n2; i++)
			{
				int wartosc;
				cout << "Podaj wartosc " << i << " elementu wektora" << endl;
				cin >> wartosc;
				v2.push_back(wartosc);
			}
			vector<int> vSuma;
			vSuma = v3(v1, v2);
			cout << "Elementy trzeciego wektora" << endl;
			for (auto itr = vSuma.begin(); itr != vSuma.end(); ++itr)
			{
				cout << *itr << endl;
			}

			system("pause");
			petla = true;
		}
		break;
		case '2':
		{
			list<int>l1;
			for (int i = 0; i < 10; i++)
			{
				int wartosc;
				cout << "Podaj wartosc " << i << " elementu listy" << endl;
				cin >> wartosc;
				l1.push_back(wartosc);
			}
			cout << "Podaj liczba, ktora ma zostac usunieta" << endl;
			int liczba;
			cin >> liczba;
			for (auto itr = l1.begin(); itr != l1.end(); ++itr)
			{
				if (*itr == liczba)
				{
					itr=l1.erase(itr);
					itr--;
				}
			}
			cout << "Elementy listy po odrzuceniu wartosci" << endl;
			for (auto itr = l1.begin(); itr != l1.end(); ++itr)
			{
				cout << *itr << endl;
			}
		system("pause");
		petla = true;
		}
		break;
		case '3':
		{
			vector<int> v1;
			vector<int> v2;
			int n1;
			cout << "Podaj ilosc elementow wektora pierwszego" << endl;
			cin >> n1;
			for (int i = 0; i < n1; i++)
			{
				int wartosc;
				cout << "Podaj wartosc " << i << " elementu wektora" << endl;
				cin >> wartosc;
				v1.push_back(wartosc);
			}
			int n2;
			cout << "Podaj ilosc elementow wektora drugiego" << endl;
			cin >> n2;
			for (int i = 0; i < n2; i++)
			{
				int wartosc;
				cout << "Podaj wartosc " << i << " elementu wektora" << endl;
				cin >> wartosc;
				v2.push_back(wartosc);
			}
			if (n1 == n2)
			{
				vector<int> vSuma;
				vSuma = v4(v1, v2);
				cout << "Elementy trzeciego wektora" << endl;
				for (auto itr = vSuma.begin(); itr != vSuma.end(); ++itr)
				{
					cout << *itr << endl;
				}
			}
			else
			{
				cout << "Blad, rozmiary wektorow nie sa takie same !" << endl;
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
	};
	return 1;
}




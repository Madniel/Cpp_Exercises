#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

float sredniag(int x, int y, int z)
{
	int srednia = pow(x*y*z, 1.0 / 3);
	return srednia;
}
int NWD(int u, int v)
{
	bool obliczone = true;
	while (obliczone)
	{
		if (u == v)
		{
			return u;
			obliczone = false;
		}
		else
		{
			if (u > v)
			{
				u = u - v;
			}
			else
			{
				v = v - u;
			}
		}
	}
	return u;
}
int zaokraglenie(float&x)
{
	if ((x - (int)x) >= (0.5))
	{
		x = (int)x + 1;
	}
	else
	{
		x = (int)x;
	}

	return x;
}
bool czyPierwsza(int pierwsza)
{
	bool liczbap;
	for (int i = 2; i <= pierwsza; i++) //petla powtarza sie tak dlugo az i nie bedzie rownej podanej warosci liczby pierwszej
	{
		if (i == pierwsza) //jesli i jest rowne zmiennej to jest wyswietlany komunikat ze liczba jest pierwsza
		{
			liczbap = true;
			return liczbap;
		}
		else
		{
			if (pierwsza%i == 0) //jesli i jest dzielnikiem liczby ale nie jest rowne to jest wyswietlany komunikat ze liczba nie jest pierwsza
			{
				liczbap = false;
				return liczbap;
			}
		}
	}

}
float kula(float&x, float&y)
{
	x = 4 * M_PI*pow(x, 2);
	y = (4 * M_PI*pow(y, 3)) / 3;
	return x;
	return y;
}
int Rekurencja(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		if (n == 1)
		{
			return 1;
		}
		else
		{
			int i = Rekurencja(n - 2) + 2 * Rekurencja(n - 1);
			return i;
		}
	}
}
char cezar(char*szyfr, int x) //funkcja do szyfrowania wedlug szyfru cezara
{
	if (x > 0)
	{
		for (int i = 0; i <= strlen(szyfr); i++){
			if (szyfr[i] >= 65 && szyfr[i] <= 90 - x)
			{
				szyfr[i] = int(szyfr[i]) + x;
			}
			else if (szyfr[i] >= 91 - x && szyfr[i] <= 90)
			{
				szyfr[i] = int(szyfr[i]) - 26 + x; //pierwsze dwa if dla duzych liter
			}
			else if (szyfr[i] >= 97 && szyfr[i] <= 122 - x)
			{
				szyfr[i] = int(szyfr[i]) + x;
			}
			else if (szyfr[i] >= 123 - x && szyfr[i] <= 122)
			{
				szyfr[i] = int(szyfr[i]) - 26 + x; //ostatnie  dwa if dla malych liter
			}

		}


	}
	else
	{
		for (int i = 0; i <= strlen(szyfr); i++)
		{
			if (szyfr[i] >= 65 && szyfr[i] <= 90 - x && (!(szyfr[i] <= 91 - 26 - x && szyfr[i] >= 90 - 26 - x)))
			{
				szyfr[i] = int(szyfr[i]) + x; //wielkie liter
			}
			else if (szyfr[i] <= 91 - 26 - x && szyfr[i] >= 90 - 26 - x)
			{
				szyfr[i] = int(szyfr[i]) + 26 + x; // wielkie litery
			}
			else if (szyfr[i] + x < 97 && szyfr[i] + x >= 79)
			{
				szyfr[i] = int(szyfr[i]) + 26 + x; //ma³e liter
			}
			else if (szyfr[i] + x >= 97 && szyfr[i] <= 122)
			{
				szyfr[i] = int(szyfr[i]) + x; //ma³e litery
			}

		}
		
	}
return *szyfr;
}
int main()
{


	bool petla = true; //warunek powtarzania sie petli while


	while (petla)
	{
		signed char znak;
		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[1] - cwiczenie 1 (obliczanie sredniej geometrycznej)." << endl;
		cout << "[2] - cwiczenie 2 (najwieszy wspolny dzielnik dwoch liczb)." << endl;
		cout << "[3] - cwiczenie 3 (najwieszy wspolny dzielnik trzech liczb)." << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
		cout << "[4] - cwiczenie 4 (szyfr cezara)." << endl;
		cout << "[5] - cwiczenie 5 (zaokraglanie liczby)" << endl;
		cout << "[6] - cwiczenie 6 (sprawdzanie czy liczba jest pierwsza oraz wyswietlanie wszystkich liczb pierwszych do 100)" << endl;
		cout << "[7] - cwiczenie 7 (obliczanie pola powierzchni oraz objetosc kuli)" << endl;
		cout << "[8] - cwiczenie 8 (wzor rekurencyjny)" << endl;
		cout << "[x], [X] - wyjscie z programu" << endl;
		cin >> znak;


		petla = false;
		switch (znak)
		{
		case '1':
		{
			cout << "Podaj pierwsza liczbe" << endl;
			int liczba1;
			cin >> liczba1;
			cout << "Podaj druga liczbe" << endl;
			int liczba2;
			cin >> liczba2;
			cout << "Podaj trzecia liczbe" << endl;
			int liczba3;
			cin >> liczba3;
			int wynik = sredniag(liczba1, liczba2, liczba3); // funkcja pobiera 3 liczy i wykonuje srednia geometryczna
			cout << "Srednia geometryczna wynosi:" << endl;
			cout << wynik << endl;
			system("pause");
			petla = true;
		}
		break;
		case '2':
		{
			cout << "Podaj pierwsza liczbe" << endl;
			int liczba1;
			cin >> liczba1;
			cout << "Podaj druga liczbe" << endl;
			int liczba2;
			cin >> liczba2;
			int dzielnik = NWD(liczba1, liczba2); //funkcja pobiera liczby i oblicza najmniejszy wspolny dzielnik
			cout << "Najwiekszy wspolny dzielnik:" << endl;
			cout << dzielnik << endl;
			system("pause");
			petla = true;
		}
		break;
		case '3':
		{

			cout << "Podaj pierwsza liczbe" << endl;
			int liczba1;
			cin >> liczba1;
			cout << "Podaj druga liczbe" << endl;
			int liczba2;
			cin >> liczba2;
			cout << "Podaj trzecia liczbe" << endl;
			int liczba3;
			cin >> liczba3;
			int dzielnik = NWD(liczba1, liczba2); //funkcja pobiera dwie pierwsze liczby i oblicza najmniejszy wspolny dzielnik
			dzielnik = NWD(dzielnik, liczba3); //funkcja pobiera dzielnik z poprzedniej funkcji i oblicza najmniejszy wspolny dzielnik jego i trzeciej liczby
			cout << "Najwiekszy wspolny dzielnik:" << endl;
			cout << dzielnik << endl;
			system("pause");
			petla = true;

		}
		break;
		case '4':
		{
			cout << "Podaj tekst" << endl;
			char text[100];
			cin.ignore();
			cin.getline(text, 100);
			cout << "Podaj parametr" << endl;
			int n;
			cin >> n;
			cezar(text, n); //tekst zostaje zaszyfrowany
			cout << text << endl;
			cout << "Czy odszyfrowac tekst [T/N]" << endl;
			char klawisz;
			cin >> klawisz;
			switch (klawisz) //odszyfrowac czy nie
			{
			case 'T':
			case't':
			{
				n = (-1)*n;
				cezar(text, n);
				cout << text << endl; //zamiana przesuniecia na przeciwne i odszyfrowanie wyniku

			}
			break;
			case 'N':
			case'n':
				break;

			}

			petla = true;

		}
		break;

		case '5':
		{
			cout << "Podaj liczbe " << endl;
			float liczba;
			cin >> liczba;
			int liczba1 = zaokraglenie(liczba); //funkcja pobiera liczbe i wykonuje zaokraglenie
			cout << "Zaokraglenie wynosi:" << endl;
			cout << liczba1 << endl;
			system("pause");
			petla = true;

		}
		break;
		case '6':
		{
			cout << "Podaj liczbe" << endl;
			int pierwsza;
			cin >> pierwsza;
			bool czyP = czyPierwsza(pierwsza);
			if (czyP)
			{
				cout << "Jest to liczba pierwsza" << endl;
			}
			else
			{
				cout << "To nie jest liczba pierwsza" << endl;
			}
			system("pause");
			cout << "Czy wyswietlicz wszystkie liczby pierwsze do 100 [T/N]" << endl;
			char klawisz;
			cin >> klawisz;
			switch (klawisz)
			{
			case 'T':
			case't':
				for (int i = 2; i < 100; i++)
				{
					if (czyPierwsza(i) == 1)
					{
						cout << i << endl; //wyswitlanie szystkich liczb pierwszych mniejszych od 100
					}
				}
				break;
			case 'N':
			case'n':
				break;

			}
			system("pause");
			petla = true;
		}
		break;
		case '7':
		{
			cout << "Podaj promien" << endl;
			float promien;
			cin >> promien;
			float promien1 = promien;
			kula(promien, promien1); //funkcja oblicza pole powierzchni i objetosc
			cout << "Pole powierzchni kuli" << endl;
			cout << promien << endl;
			cout << "Objetosz kuli" << endl;
			cout << promien1 << endl;
			system("pause");
			petla = true;

		}
		break;
		case '8':
		{
			cout << "Podaj wyraz ciagu" << endl;
			int n;
			cin >> n;
			int wynik = Rekurencja(n); //funkcja wykonuje wzor rekurencyjny
			cout << "Wynik wynosi" << endl;
			cout << wynik << endl;
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
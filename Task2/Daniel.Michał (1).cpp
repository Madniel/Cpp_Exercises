#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	

	bool petla = true; //warunek powtarzania sie petli while
	

	while (petla)
	{
		signed char znak;
		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[1] - cwiczenie 1 (obliczanie pi ze wzoru Leibniza i Wallisa)." << endl;
		cout << "[2] - cwiczenie 6 (wyswietlanie wyrazow ciagu Fibonacciego do podanego przedzialu)." << endl;
		cout << "[3] - cwiczenie 10 (sprawdzanie czy dana liczba jest pierwsza)." << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
		cout << "[4] - cwiczenie 11(wyswietlanie liczb pierwszych do podanego przedzialu)." << endl;
		cout << "[5] - cwiczenie 23 (program obliczajcy sume dla podanej liczby naturalnej." << endl;
		cout << "[x], [X] - wyjscie z programu" << endl;
		cin >> znak;
bool dobrze = true;
    int wyraz1 = 1; //definicja pierwszego wyrazu ci¹gu Fibonacciego
	int wyraz2 = 1; //definicja drugiego wyrazu ci¹gu Fibonacciego
	float piWallisa = 1;  //pocz¹tkowa wartosc zmiennej odpowiadaj¹cej za przechowywania wartosci liczby pi obliczonej ze wzory Wallisa
	float piLeibniza = 0; //pocz¹tkowa wartoscodpowiadaj¹cej za przechowywania wartosci liczby pi obliczonej ze wzory Leibniza
    float wynik = 0; //definicja poczatkowej wartosci wyniku z cwiczenia 23
	int wyraz3 = wyraz1 + wyraz2;
        
		petla = false;
		switch (znak)
		{

		case '1':	
			
			int nZ1; //definicja zmiennej dla liczby naturalnej dla cwiczenia 1 
			cout << "Podaj liczbe naturalna." << endl;
			cin >> nZ1;
			char klawisz;
			
			
			while (dobrze)
			{
				cout << "Jaka Metoda [L/W]" << endl;
				cin >> klawisz;
				switch (klawisz)
				{
				case'l':
				case'L':
				{
					for (int i = 0; i <= nZ1; i++)
					{
						piLeibniza = piLeibniza + pow((-1), i) / (2 * i + 1); //wykonywane jest dzialanie wedlug wzoru Leibniza dla podanej wartosci n

					}

					cout << "Wynik wynosi wedlug wzoru Leibniza'a wynosi: " << piLeibniza * 4 << endl; //wynik powyzszej petli jest mnozony przez 4 i wyswietlany
					dobrze = false;
				}
				break;
				case'W':
				case'w':
				{
					for (int i = 1; i <= nZ1; i++)
					{

						piWallisa = piWallisa * (2 * 2 * i*i) / ((2 * i - 1)*(2 * i + 1)); //wykonywane jest dzialanie wedlug wzoru Wallisa dla podanej wartosci n

					}

					cout << "Wynik wynosi wedlug wzoru Wallis'a wynosi: " << piWallisa * 2 << endl; //wynik powyzszej petli jest mnozony przez 2 i wyswietlany
					dobrze = false;
				}
				break;
				default: //w przypadku wcisniecia zlego przycisku wyswietlany jest komunikat o blednym znaku
					cout << endl;
					cout << "Wcisnieto zly przycisk!!" << endl;
					cout << endl;
				}
			}
			petla = true;
			system("pause");
			cout << endl;
			break;
		case '2':
			cout << "Podaj koncowa wartosc przedzialu." << endl;
			int wartosc;
			cin >> wartosc; //Podawana jest wartosci do ktorej wyrazy ciagu Fibonacciego maja byc wyswietlane
			cout << wyraz1 << endl;
			cout << wyraz2 << endl;
			do
			{
				cout << wyraz3 << endl;//wyraz trzeci jest wyswietlany
				
                wyraz1 = wyraz2;  //wyraz pierwszy ma wartosc wyrazu drugiego
				wyraz2 = wyraz3; //wyraz drugi ma wartosc wyrazu trzeci
				wyraz3 = wyraz1 + wyraz2; // wyraz trzeci jest rowny sumie wyrazu drugiego i trzeciego


			} while (wyraz3 < wartosc);
			system("pause");
			cout << endl;
			petla = true;
			break;

		

		case '3':
			cout << "Podaj liczbe" << endl;
			int pierwsza; //definicja zmiennej odpowiedzialna za liczbe pierwsza
			cin >> pierwsza;
			for (int i = 2; i <= pierwsza; i++) //petla powtarza sie tak dlugo az i nie bedzie rownej podanej warosci liczby pierwszej
			{
				if (i == pierwsza) //jesli i jest rowne zmiennej to jest wyswietlany komunikat ze liczba jest pierwsza
				{
					cout << "Liczba jest liczba pierwsza." << endl;
					
				}
				else
				{
					if (pierwsza%i == 0) //jesli i jest dzielnikiem liczby ale nie jest rowne to jest wyswietlany komunikat ze liczba nie jest pierwsza
					{
						cout << "Liczba nie jest liczba pierwsza." << endl;
						break;
					}
				}
			}

			 petla = true;
			system("pause");
			cout << endl;
			break;
		case '4':
			int dzielnik; //definiujemy zmienna, kora bedzie dzielila liczby pierwsze
			int liczbapierwsza;
			int zakres;
			cout << "Podaj zakres." << endl;
			cin >> zakres; //podajemy zakres do ktorego maja byc sprawdzane liczby pierwszze
			cout << endl;
			cout << "Liczby pierwsze z tego zakresu to:" << endl;
		    dzielnik= 2;
	
			for (liczbapierwsza = 2; liczbapierwsza <= zakres; liczbapierwsza++) //
			{
				while (liczbapierwsza % dzielnik != 0) //Jeœli modulo nie jest rowne 0 petla jest wykonywana
				{
					dzielnik++; //zwiekszamy dzielnik
				}
					if (dzielnik == liczbapierwsza) //jesli dzielnik jest rowny liczbie to jest to liczba pierwsza, ktore zostaje wyswietlona 
					{
						cout << liczbapierwsza << endl;
						dzielnik = 2; //dzielnik znow ma wartosc 2
					}
				
			}
			system("pause");
			cout << endl;
			petla = true;
			break;

		case '5':
	
			int nZ23; //definicja zmiennej dla liczby naturalnej dla cwiczenia 23
			cout << "Podaj liczbe naturalna." << endl;
			cin >> nZ23;
			for (int i = 0; i <= nZ23; i++)
			{
				wynik = wynik + pow((-1), i) / (2 * i + 1); //wykonywane jest dzialanie zalezne od zmiennej, a potem dodawane do ogolnego wyniku, ktory poczatkowo jest rowny 0
			}
			cout << "Wynik wynosi " << wynik*4 << endl; // wynik mnozony jest razy 4
			cout << "Jest to wzor Leibniza na przyblizona wartosc pi." << endl;
		    petla = true;
			system("pause");
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
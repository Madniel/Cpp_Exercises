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
		cout << "[1] - cwiczenie 2, 3, 4 i 5 (wypelnianie tablicy, wyœwietlanie stworzonej tablicy, \n znajdowanie wartoœæ maks, min w sredniej w tablicy i sortowanie tablicy  )." << endl;
		cout << "[2] - cwiczenie 16 (wyswietla wszystkie znaki ASCII 1-255 z przerwa co 40 znakow)." << endl;
		cout << "[3] - cwiczenie 17 (obliczanie silni)." << endl;  //menu z wyborem cwiczen za pomoca zmiennej char o nazwie "znak"
		cout << "[4] - cwiczenie 18 (Sprawdzenie czy wyraz jest polindromem.)" << endl;
		cout << "[5] - cwiczenie 21(Wyswietlanie pierwszych n wyrazow ciagu Fibonacciego)." << endl;
		cout << "[6] - cwiczenie 23 (program obliczajcy sume dla podanej liczby naturalnej." << endl;
		cout << "[7] - cwiczenie 25 (wczytanie 10 liczb, a nastêpnie wyswietlenie ich posortowanych wedlug wielkosci.)" << endl;
		cout << "[8] - cwiczenie 26 (wyswietlanie wszystkich liczby pierwszych mniejszych od 100.)" << endl;
		cout << "[x], [X] - wyjscie z programu" << endl;
		cin >> znak;
		float srednia = 0;
		int tabela[5];
		int wyraz1 = 1; //definicja pierwszego wyrazu ci¹gu Fibonacciego
		int wyraz2 = 1; //definicja drugiego wyrazu ci¹gu Fibonacciego
		float wynik = 0; //definicja poczatkowej wartosci wyniku z cwiczenia 23
		bool posortowano = true;
		int wyraz3 = wyraz1 + wyraz2;
		int silnia = 1;

		petla = false;

		switch (znak)
		{
		case '1':
		{
			srand(time(NULL));     
			cout << "zadanie 2 i 3" << endl;
			cout << "Wyrazy tabeli to:" << endl;
			for (int i = 0; i < 5; i++)
			{
				tabela[i] = rand();			//tworzenie tabelii z wartosci losowych
				cout << tabela[i] << endl;     
				srednia += tabela[i];
			}

			cout << "Zadanie 4 - srednia, max, min" << endl;
			cout << "srednia = " << srednia / 5 << endl;
			float minimum = tabela[0];
			float Maximum = tabela[0];

			for (int i = 1; i < 5; i++)
			{
				if (Maximum < tabela[i])
				{
					Maximum = tabela[i];     //znajdowanie maximum
				}
			}

			for (int i = 1; i < 5; i++)
			{
				if (minimum > tabela[i])
				{
					minimum = tabela[i];   //znajdowanie minimum
				}

			}
			cout << "Maximum i minimum" << endl;
			cout << "Maximum = " << Maximum << endl;
			cout << "minimum = " << minimum << endl;
			cout << "zadanie 5 - sortowanie" << endl;
			double schowek;  // tworzenie zmiennej pomocniczej do przecowywania wartosci

			do
			{
				posortowano = false;
				for (int a = 0; a<4; a++)
				{
					if (tabela[a]>tabela[a + 1])
					{
						schowek = tabela[a];
						tabela[a] = tabela[a + 1];
						tabela[a + 1] = schowek;           //sortowanie babelkowe
						posortowano = true;
					}
				}
			} while (posortowano);
			for (int i = 0; i < 5; i++)
			{
				cout << tabela[i] << endl;
			}

			system("pause");
			
			petla = true;
		}
		break;
		case '2':
		{
			unsigned char napis[256]; //tworzymy tabela na znaki od 1 do 255
			printf("DEC \t");
			printf("Char \n"); //program wyswietla dwie kolumny dla znakow
			for (int i = 1; i < 256; i++) 
			{
				napis[i] =  i;
				printf("%d\t %c\n", napis[i], napis[i]); //wyswietlamy wartosc znaku i znak sam w sobie
				if ((i % 40) == 0) //co 40 przerwa
				{
					system("pause");
				}
			}



			system("pause");
			petla = true;
		}
			break;
		case '3':
		{
			int naturalna;
			cout << "Podaj jakiej cyfry silna ma byc obliczona" << endl;
			cin >> naturalna; // do jakiego liczby ma byc wykonana silnia
			if (naturalna > 1)
			{
				for (int i = 1; i < (naturalna + 1); i++) //jesli liczba jest wieksza od 1
				{
					silnia = silnia * i; // petla wykonujaca mnozenie silni kolejnych wyrazow mniejszych od n
				}
				
			}
			else
			{
				if ((naturalna == 1) || (naturalna == 0))
				{
					silnia = 1; //jesli liczba jest rowna 1 lub 0 to wtedy silnia = 1
				cout << "Silnia wynosi" << endl;
				cout<< silnia << endl;
				}
				else
				{
					cout << "Blad, podana liczba nie jest nautralna" << endl; // w przypadku innej liczby pojawia sie komunikat o bledzie
				}
			}

			system("pause");
			petla = true;
		}
		break;
		case '4':
		{
			cout << "Podaj wyraz" << endl;
			char wyraz[10];
			char kopiawyrazu[10]; //tworzymy zmienna w ktorej przechowamy poczatkowy wyraz
			cin >> wyraz;
			int licznik;
			strcpy(kopiawyrazu, wyraz); //przkopiowujemy wyraz do jego kopii
			licznik = strlen(wyraz); //zliczamy ilosc znakow
			
			for (int i = licznik - 1; i >= 0; i--)
			{
				for (int j = 0; j < i; j++)
				{


					char znak = wyraz[j];
					wyraz[j] = wyraz[j + 1];   //tworzymy anagram
					wyraz[j + 1] = znak;

				}
			}
			cout << "Anagram:" << endl;
			cout << wyraz << endl;
			if ((strcmp(wyraz, kopiawyrazu))==0) //poruwnujemy wyraz z jego anagramem. Jesli sa takie same to wyraz jest polindromem
				{
					cout << "Podany wyraz  jest polindromem" << endl;
				}
				else
				{
					cout << "Podany wyraz nie jest polindromem" << endl;
				}

			
				
		}system("pause");
		petla = true;
		break;
		case '5':
		{
			cout << "Podaj ilosc wyrazow" << endl;
			int wartosc;
			cin >> wartosc;
			cout << endl;
			int e = 2;
			cout << wyraz1 << endl;
			cout << wyraz2 << endl;
			do
			{

				cout << wyraz3 << endl;//wyraz trzeci jest wyswietlany

				wyraz1 = wyraz2;  //wyraz pierwszy ma wartosc wyrazu drugiego
				wyraz2 = wyraz3; //wyraz drugi ma wartosc wyrazu trzeci
				wyraz3 = wyraz1 + wyraz2; // wyraz trzeci jest rowny sumie wyrazu drugiego i trzeciego
				e++;

			} while (e < wartosc);
			system("pause");
		}
		petla = true;
		break;
		case '6':
		{
			int nZ23; //definicja zmiennej dla liczby naturalnej dla cwiczenia 23
			cout << "Podaj liczbe naturalna." << endl;
			cin >> nZ23;
			for (int i = 0; i <= nZ23; i++)
			{
				wynik = wynik + pow((-1), i) / (2 * i + 1); //wykonywane jest dzialanie zalezne od zmiennej, a potem dodawane do ogolnego wyniku, ktory poczatkowo jest rowny 0
			}
			cout << "Wynik wynosi " << wynik * 4 << endl; // wynik mnozony jest razy 4
			cout << "Jest to wzor Leibniza na przyblizona wartosc pi." << endl;
			cout << "Liczba jest przyblizeniem wartoœci pi" << endl;
			petla = true;
			system("pause");
		}
			break;
		case '7':
		{
			float tab[10]; //tworzymy tablice
			for (int i = 0; i < 10; i++)
			{
				cout << "Podaj wartosc tablicy numeru " << i << endl;
				cin >> tab[i];   //wypelniamy tablice
			}
			int powtorka = 9; //ile razy sortowanie ma sie odbywac
			double schowek; //tworzymy zmienna pomocn¹ do przechowania wartosci
			bool posortowano = true;
			do
			{
				posortowano = false;
				for (int i = 0; i<powtorka;i++)
				{
					if (tab[i]>tab[i + 1])
					{
						schowek = tab[i];
						tab[i] = tab[i + 1];
						tab[i + 1] = schowek;   //jesli wartosci tab[i+1] jest mniejsza niz tab[i] to zostaja one zamienione indeksami
						posortowano = true;     
					}
				}
			} while (posortowano);
			cout << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << tab[i] << endl;  //wyswietlenie posortowanej tablicy
			}

			system("pause");
			petla = true;
			
		}
		break;
		case '8':
		{
			int dzielnik; //definiujemy zmienna, kora bedzie dzielila liczby pierwsze
			int liczbapierwsza;
			int zakres;
			cout << "Podaj zakres." << endl;
			cin >> zakres; //podajemy zakres do ktorego maja byc sprawdzane liczby pierwszze
			cout << endl;
			cout << "Liczby pierwsze z tego zakresu to:" << endl;
			dzielnik = 2;

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



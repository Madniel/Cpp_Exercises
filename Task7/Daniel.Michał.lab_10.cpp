#define _USE_MATH_DEFINES
#include<iostream>
#include<math.h>
#include<conio.h>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
struct zadanie
{
	float a;
	float b;
	float c;
};
struct roz{
	float x1;
	float x2;
};
roz rozwiazanie(zadanie& rownanie)
{
	roz wyniki;
	float delta = rownanie.b*rownanie.b - 4 * rownanie.a*rownanie.c;
	if (delta > 0)
	{
		delta = pow(delta, 1 / 2);
		wyniki.x1 = (-rownanie.b + delta) / 2 * rownanie.a;
		wyniki.x2 = (-rownanie.b - delta) / 2 * rownanie.a;
		return wyniki;
	}
	else if (delta == 0)
		{
			wyniki.x1 = (-rownanie.b) / 2 * rownanie.a;
			wyniki.x2 = wyniki.x1;
			return wyniki;
		}
		else
		{
			delta = (-1)*delta;
			cout << "Rozwiazania to:" << endl;
			if (rownanie.b == 0)
			{
				wyniki.x1 = sqrt(delta) / 2 * rownanie.a;
				wyniki.x2 = -sqrt(delta) / 2 * rownanie.a;
				cout << "x1 = (-" << sqrt(delta) << "j)/" << 2 * rownanie.a << " = "<< wyniki.x1<<"j"<<endl;
				cout << "x2 = (" << sqrt(delta) << "j)/" << 2 * rownanie.a << " = " << wyniki.x2 << "j" << endl;
				if (!(pow(sqrt(delta), 2) - delta == 0))
				{
					cout << sqrt(delta) << "Jest przyblizeniem pierwiastka kwadratowego z " << delta << endl;
				}
			}
			else
			{
				cout << "x1 = (-" << rownanie.b << "-" << sqrt(delta) << "j) /" << 2 * rownanie.a << " = " << rownanie.b / (2 * rownanie.a)<< "-" << sqrt(delta)/(2*rownanie.a) << "j" << endl;
				cout << "x2 = (" << rownanie.b << "-" << sqrt(delta) << "j) /" << 2 * rownanie.a << " = " << rownanie.b / (2 * rownanie.a) << "-" << sqrt(delta) / (2 * rownanie.a) << "j" << endl;
				if (!(pow(sqrt(delta), 2) - delta == 0))
				{
					cout << sqrt(delta) << " Jest przyblizeniem pierwiastka kwadratowego z " << delta << endl;
				}
			}
			
		}
	
}
int main()
{
	bool petla = true; //warunek powtarzania sie petli while


	while (petla)
	{
		
		cout << "Nacisniej dany przycisk, by wyswietlic zadanie." << endl;
		cout << endl;
		cout << "[8] - zadanie 8." << endl;
		cout << "[x],[X] - wyjscie." << endl;
		petla = false;
		signed char znak;
		cin >> znak;
		switch (znak)
		{
		case '8':
		{
	cout << "Mamy rownanie ax^2+bx + c = 0" << endl;
	zadanie rownanie;
	cout << "Prosze podac wartosc a (nie moze byc rowna zeru)" << endl;
	cin >> rownanie.a;
	cout << "Prosze podac wartosc b" << endl;
	cin >> rownanie.b;
	cout << "Prosze podac wartosc c" << endl;
	cin >> rownanie.c;
	roz wyniki = rozwiazanie(rownanie);
	float delta = rownanie.b*rownanie.b - 4 * rownanie.a*rownanie.c;
	if (!(delta<0))
	{
	cout << "Rozwiazania to:" << endl;
	cout << "x1 = "<< wyniki.x1 << endl;
	cout << "x2 = " << wyniki.x2 << endl;
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
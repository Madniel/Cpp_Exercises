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
	cout << "Task 1" << endl;
	float bokp;
	float bokp2;
	do
	{
		cout << "Please enter the first side of the rectangle" << endl;
		cin >> bokp;
		cout << "Please tell me the other side of the rectangle" << endl;
		cin >> bokp2;
		if ((bokp > 0) && (bokp2 > 0))
		{
			float pole = bokp*bokp2;
			float obwod = bokp * 2 + bokp2 * 2;
			cout << "The area of the rectangle is:" << endl;
			cout << pole << endl;
			cout << "The perimeter of the rectangle is:" << endl;
			cout << obwod << endl;
			cout << endl;
		}
		else
		{
			cout << "Wrong! The sides of the rectangle must be greater than zero." << endl;
			cout << endl;
		}
	} while (!((bokp > 0) && (bokp2 > 0)));
	float bok3;
	float bok4;
	float bok5;

	do
	{
		cout << "Please state the first side of the triangle" << endl;
		cin >> bok3;
		cout << "Please state the second side of the triangle" << endl;
		cin >> bok4;
		cout << "Please state the third side of the triangle" << endl;
		cin >> bok5;
		
		if ((bok3 < bok4 + bok5) && (bok5 < bok4 + bok3) && (bok4 < bok3 + bok5) && (bok3>0) && (bok4>0) && (bok5>0))
		{
			cout << "The side lengths are  " << bok3 << " " << bok4 << " " << bok5 << "." << endl;
			float polet = (float)sqrt((bok3 + bok4 + bok5)*(bok3 + bok4 - bok5)*(bok3 - bok4 + bok5)*(-bok3 + bok4 + bok5)) / 4;
			float obwodt = bok3 + bok4 + bok5;
			cout << "The area of the triangle is:" << endl;
			cout << polet << endl;
			cout << "The perimeter of the triangle is:" << endl;
			cout << obwodt << endl;
		}

		else
		{
			cout << ("Wrong! The sides of the triangle must be greater than zero and the sum of the lengths of two of them must be greater than the length of the third side.") << endl;
			cout << endl;
		}
	} while (!((bok3 < bok4 + bok5) && (bok5 < bok4 + bok3) && (bok4 < bok3 + bok5) && (bok3>0) && (bok4>0) && (bok5>0)));
	cout << endl;

	float bok6;
	float bok7;
	float bok8;
	float polet1;

	do
	{
		cout << "Please state the first side of the triangle" << endl;
		cin >> bok6;
		cout << "Please state the second side of the triangle" << endl;
		cin >> bok7;
		cout << "Please state the third side of the triangle" << endl;
		cin >> bok8;
		if ((bok6 < bok8 + bok7) && (bok7 < bok8 + bok6) && (bok8 < bok6 + bok7) && (bok6>0) && (bok7>0) && (bok8>0))
		{
			cout << "The side lengths are  " << bok6 << " " << bok7 << " " << bok8 << "." << endl;
			float α = acos((bok7*bok7 + bok8*bok8 - bok6*bok6) / (2 * bok7*bok8));
			float deg1 = (α* 180.0) / M_PI;
			cout << "The angle that is opposite the first side is" << endl;
			cout << deg1 << endl;
			float β = acos((bok6*bok6 + bok8*bok8 - bok7*bok7) / (2 * bok6*bok8));
			float deg2 = (β* 180.0) / M_PI;
			cout << "The angle that is opposite the other side is" << endl;
			cout << deg2 << endl;
			float γ = acos((bok7*bok7 + bok6*bok6 - bok8*bok8) / (2 * bok7*bok6));
			float deg3 = (γ* 180.0) / M_PI;
			cout << "The angle that is opposite the third side is" << endl;
			cout << deg3 << endl;
		}
		else
		{
			cout << ("Wrong! The sides of the triangle must be greater than zero and the sum of the lengths of two of them must be greater than the length of the third side.") << endl;
			cout << endl;
		}
	} while (!((bok6 < bok8 + bok7) && (bok7 < bok8 + bok6) && (bok8 < bok6 + bok7) && (bok6>0) && (bok7>0) && (bok8>0)));
	system("pause");
	cout << endl;


	cout << "Task 2" << endl;
	int liczba1;
	int liczba2;
	cout << "Please give the first integer (number 1)" << endl;
	cin >> liczba1;
	cout << "Please tell me the second whole number (number 2)" << endl;
	cin >> liczba2;
	int dodawanie = liczba1 + liczba2;
	int odejmowanie1 = liczba1 - liczba2;
	int odejmowanie2 = liczba2 - liczba1;
	int mnozenie = liczba1*liczba2;
	float dzielenie1 = (float)liczba1 / liczba2;
	float dzielenie2 = (float)liczba2 / liczba1;
	cout << "Addition result." << endl;
	cout << dodawanie << endl;
	cout << "Subtraction result number 1 - number 2" << endl;
	cout << odejmowanie1 << endl;
	cout << "Subtraction result number 2 - number 1" << endl;
	cout << odejmowanie2 << endl;
	cout << "Multiplication result." << endl;
	cout << mnozenie << endl;
	cout << "Result of division number1/number2." << endl;
	cout << dzielenie1 << endl;
	cout << "Result of division number2/number1." << endl;
	cout << dzielenie2 << endl;
	cout << endl;

	float liczba3;
	float liczba4;
	cout << "Please specify the first floating point number (number3)." << endl;
	cin >> liczba3;
	cout << "Please specify the second floating point number (number4)" << endl;
	cin >> liczba4;
	float dodawanie1 = liczba3 + liczba4;
	float odejmowanie3 = liczba3 - liczba4;
	float odejmowanie4 = liczba4 - liczba3;
	float mnozenie1 = liczba3*liczba4;
	float dzielenie3 = liczba3 / liczba4;
	float dzielenie4 = liczba4 / liczba3;
	cout << "Addition result." << endl;
	cout << dodawanie1 << endl;
	cout << "Subtraction result liczba3 - liczba4." << endl;
	cout << odejmowanie3 << endl;
	cout << "Subtraction result liczba4 - liczba3." << endl;
	cout << odejmowanie4 << endl;
	cout << "Multiplication result" << endl;
	cout << mnozenie1 << endl;
	cout << "Result of division number3/number4." << endl;
	cout << dzielenie3 << endl;
	cout << "Result of division number4/number3." << endl;
	cout << dzielenie4 << endl;
	system("pause");
	cout << endl;

	cout << "Tasl 3" << endl;
	cout << "Please state the number." << endl;
	float liczba;
	cin >> liczba;
	cout << "Number after pre-incrementation" << endl;
	cout << ++liczba << endl;
	liczba--;
	cout << "Number after post-incrementation" << endl;
	cout << liczba++ << endl;
	liczba--;
	cout << "Number after pre-decrementation" << endl;
	cout << --liczba << endl;
	liczba++;
	cout << "Number after post-decrementation" << endl;
	cout << liczba-- << endl;
	liczba++;
	system("pause");
	cout << endl;

	cout << "Task 4" << endl;
	cout << "Please enter a name." << endl;
	char imie[20];
	cin >> imie;
	cout << "Please state your last name." << endl;
	char nazwisko[20];
	cin >> nazwisko;
	cout << "Please state your father's first name." << endl;
	char imieO[20];
	cin >> imieO;
	cout << "Please enter the age of the father." << endl;
	int wiekO;
	cin >> wiekO;
	cout << "Please enter mother's name." << endl;
	char imieM[20];
	cin >> imieM;
	cout << "Please specify the age of the mother." << endl;
	int wiekM;
	cin >> wiekM;
	cout << "Please enter the family name of the mother." << endl;
	char nazwiskoM[20];
	cin >> nazwiskoM;
	cout << "Please specify place of birth" << endl;
	char birth[20];
	cin >> birth;
	cout << "Specify year of birth" << endl;
	int rok;
	cin >> rok;
	cout << "Specify month of birth" << endl;
	int miesiac;
	cin >> miesiac;
	cout << "Specify day of birth" << endl;
	int dzienu;
	cin >> dzienu;
	int ago;
	ago = 2015 - rok;
	float agoM;
	agoM = wiekM - ago;
	float agoO;
	agoO = wiekO - ago;
	int razem1 = ago * 365 + (10 - miesiac) * 31 ;
	float razy = (agoO+ago) / ago;
	float razyM = (agoM+ago) / ago;
	int razem2 = (ago*3) + agoM + agoO;
				cout << "First name: " << imie << endl;
				cout << "Second name: " << nazwisko << endl;
				cout << "Father's first name: " << imieO << endl;
				cout << "Father's age: " << wiekO << endl;
				cout << "Mother's first name: " << imieM << endl;
				cout << "Mother's family name: " << nazwiskoM << endl;
				cout << "Birth place: " << birth << endl;
				cout << "Birth year: : " << rok << endl;
				cout << "Birth month: " << miesiac << endl;
				cout << "Birth day: " << dzienu << endl;
				cout << endl;
				cout << "Citizen " << imie << " was born in " << birth << " " << ago << " years ago. His mother,mrs " << imieM << endl;
				cout << "(of a " << nazwiskoM << "),was " << agoM << " years old then and his father " << agoO << " years old." << endl;
				cout << endl;
				cout << "That today is 12.10.2015, year has 365 days and month 31 days." << endl;
				cout << endl;
				cout << ""<<nazwisko<<" "<<imie<<" till 12.10.2015 lived approximately " << razem1 << " days."<<endl;
				cout << "His father is " << razy << " times older than him and mother " << razyM << " times." << endl;
				cout << endl;
				cout << "It is an old family, because together they have " << razem2 << " years." << endl;
	system("pause");
	cout << endl;


    cout << "Task 5" << endl;
	cout << "Please enter a whole number." << endl;
	int a;
	cin >> a;
	cout.flags(ios::dec);
	cout << "The whole number in decimal." << endl;
	cout << a << endl;
	cout.flags(ios::hex);
	cout << "Hexadecimal integer." << endl;
	cout << a << endl;
	cout.flags(ios::oct);
	cout << "Total number in octal system." << endl;
	cout << a << endl;
	system("pause");
	return 1;
}

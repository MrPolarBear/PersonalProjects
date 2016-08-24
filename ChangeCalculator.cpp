#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;
//prototypes

void calculate (int);
double tax(double);

//main body
int main(){
	double cost;
	double paid;
	int newCost;

	cout << "Enter in cost: ";
	cin >> cost;
	newCost = tax(cost);

	cout << "Enter in amount paid: ";
	cin >> paid;
	
	int calculation = paid*100 - newCost;
	string answer;

	calculate(calculation);
	cout << endl << "Again? (Y/N)" << endl;
	cin >> answer;
	
	while(answer == "y" || answer =="Y")
	{
		cout << "Enter in cost: ";
		cin >> cost;
		newCost = tax(cost);
		cout << "Enter in amount paid: ";
		cin >> paid;
		calculation = paid*100 - newCost;
		calculate(calculation);
		cout << endl << "Again? (Y/N)" << endl;
		cin >> answer;
	}

	if(answer== "n" || answer =="N")
	{
		cout << endl << "You have selected no, peace homie." << endl;
		return 0;
	}
	else
	{
		cout << "Well you done goofed up and hit something besides y/n." << endl
		<< "Since you did that, the program will now close." << endl;
		return 0;
	}
	
return 0;
}

//define function
void calculate(int x)
{
	int q, d, n, p = 0;
	int dollar = 0;
	double calc;
	if(x < 0)
	{
		cout << "You cannot pay less than cost." << endl;
	}
	else
	{
		//debugging purposes//
		//cout << "Orginal value: " << x << endl;
		cout << "Change to be calculated: " << x/100 << "." << x%100 << endl;
		q = x/25;
		d=(x- 25*q)/10;
		n=(x- 25*q - 10*d)/05;
		p=(x- 25*q - 10*d - 05*n)/01;
		
		if (q>=4)
		{
			dollar = q/4;
			q = q - dollar*4;
		}
		
		cout << "Dollars: " << dollar << endl
		<< "Quarters: " << q << endl
		<< "Dimes: " << d << endl
		<< "Nickels: " << n << endl
		<< "Pennies: " << p << endl;
	}
}

double tax(double x)
{
	x += x*.06;
	int newC = x * 100;
	cout << "This is cost with tax rate: " << newC/100 << "." << newC%100 << endl;
	return newC;	
}

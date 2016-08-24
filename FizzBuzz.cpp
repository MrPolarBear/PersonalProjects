#include <iomanip>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main(){
	int j;
	cout << "Input max number for Fizz Buzz" << endl;
	cin >> j;
	for (int i = 1; i < j; i++)
	{
		if ( i%3 == 0 && i%5 == 0)
		cout << "Fizz Buzz, ";
		else if(i%5 == 0)
		cout << "Buzz, ";
		else if(i%3 == 0)
		cout << "Fizz, " ;
		else
		cout << i << ", ";
	}
	return 0;
}

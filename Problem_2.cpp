#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a, b;
	cout << "Enter Number of Gallon Consumption: ";
	cin >> a;
	cout << "Unpaid Balance: ";
	cin >> b;
	cout << " " << endl;
	
	if (b>0)
		cout << "Your bill is: " << 35 + (1.10 * a) + 20 + b << " pesos";
	else 
		cout << "Your bill is: " << 35 + (1.10 * a) << " pesos";

_getch();
return 0;
}
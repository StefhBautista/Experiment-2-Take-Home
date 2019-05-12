#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char pkg;
	int a;
	cout << "Enter Package Letter: Package ";
	cin >> pkg;
	cout << "Enter Hours Used: ";
	cin >> a;
	cout << " " << endl;
	
	switch (pkg)
	{
		case 'a':
		case 'A':
			if (a <= 10)
				cout << "Your bill is: 995 pesos";
			else 
				cout << "Your bill is: " << 995 + ((a-10)*20) << " pesos";
			break;

		case 'b':
		case 'B':
			if (a <= 20)
				cout << "Your bill is: 1495 pesos";
			else 
				cout << "Your bill is: " << 1495 + ((a-20)*10) << " pesos";
			break;

		case 'c':
		case 'C':
			cout << "Your bill is: 1995 pesos";
			break;

	}

_getch();
return 0;
}
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    
	int a, b, c;
	
	cout << "Enter a number: ";
	cin >> a;

	do
	{

		c=0;
		for (b=1; b<=a; b++)
		{

			c+=b;
		}
		cout << "The sum of all whole numbers from 1 to " << a << " is " << c << "." << endl;
		cout << "Enter a number: ";
		cin >> a;


	} while (a>0);

cout << "Thank you!" << endl;

_getch();
return 0;
}



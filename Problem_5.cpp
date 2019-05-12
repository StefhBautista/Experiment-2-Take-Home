#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	cout << "Fibonacci numbers:" << endl;
	int x, y, z, i;
	x = 0;
	y = 1;
	cout << x << ", " << y << ", ";
	
	for (i=0; i<=20; i++)
	{
		if (i<=18)
		{
			z = x + y;
			x = y;
			y = z;
			cout << z << ", ";
		}

		else if (i==19)
		{
			z = x + y;
			x = y;
			y = z;
			cout << z << endl;
		}
	}
	
_getch();
return 0;
}
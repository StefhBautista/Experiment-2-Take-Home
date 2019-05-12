#include<iostream>
#include <conio.h>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int a;
	double x, y, z, V;
	z = 2.50;
	cout << "Insert value for x: "; 
	cin >> a;
	cout << "Insert value for y: "; 
	cin >> y;

	switch (a)
	{
		case 1:
		{
		x=1;
		if (y>1 && y<5)
		{
			V = x*y*z;
			cout << "The Value of V is: " << setprecision(2) << setw(10) << fixed << V << endl;
		}
		else if (y>=5)
		{
			V = x+(y/z);
			cout << "The Value of V is: " << setprecision(2) << setw(10) << fixed << V << endl;

		}
	}
	break;

		case 2:
		{
		x = 2;
		if (y<=5)
		{
			V = abs((x-y)/z);
			cout << "The Value of V is: |"  << setprecision(2) << fixed << (x-y)/z << "| =" << setw(10) << V << endl;

		}

		else if (y>5)
		{
			V = x-sqrt(y+z);
			cout << "The Value of V is:" << setprecision(2) << setw(10) << fixed << V << endl;

		}

		}
		break;
	
		default:
		{
		x = a;
		V = x + y + z;
		cout << "The Value of V is:" << setprecision(2) << setw(10) << fixed << V << endl;
		}
		break;
	}

_getch();
return 0;
}
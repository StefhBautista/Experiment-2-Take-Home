#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int counter;
	cout << "Counting..." << endl;

	for (counter=1 ; counter<=10; counter++)
	{
		cout << counter << ", ";
	}


	int count;
	for (count=12 ; count<=30 ; count++)
	{		
		cout << count << ", ";
		
		if (counter==13) continue;
		cout << "14, ";
	
		if (counter==15) continue;
		cout << "16, ";

		if (counter==17) continue;
		cout << "18, ";

		if (counter==19) continue;
		cout << "20, ";

		if (counter==21) continue;
			cout << "22, ";

		if (counter==23) continue;
			cout << "24, ";

		if (counter==25) continue;
			cout << "26, ";
	
		if (counter==27) continue;
			cout << "28, ";
	
		if (counter==29) continue;
			cout << "30";

		break;
	}

_getch();
return 0;
}
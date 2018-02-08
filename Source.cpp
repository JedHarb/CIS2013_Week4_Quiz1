#include<iostream>
using namespace std;

int main()
{
	int Foo = 0;
	int Bar = 0;
	for (int counter = 1; counter <= 2000; counter++)
	{
		if (counter % 50 == 0 && counter % 33 == 0)
		{
			cout << counter << " Foo Bar" << endl;
			Foo++;
			Bar++;
		}
		else if (counter % 50 == 0)
		{
			cout << counter << " Foo" << endl;
			Foo++;
		}
		else if (counter % 33 == 0)
		{
			cout << counter << " Bar" << endl;
			Bar++;
		}
		else
		{
			cout << counter << endl;
		}


	}
	cout << "There are " << Foo << " Foo's." << endl;
	cout << "There are " << Bar << " Bar's." << endl;
	cout << "End? ";

	int a;  // have to declare this so the cin on the next line is valid
	cin >> a; //this line exists so the program won't close automatically

	return 0;
}
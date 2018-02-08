#include<iostream>
using namespace std;

int main()
{

	for (int counter = 0; counter <= 2000; counter++)
	{
		if (counter % 50 == 0 && counter % 33 == 0)
		{
			cout << counter << " Foo Bar" << endl;
		}
		else if (counter % 50 == 0)
		{
			cout << counter << " Foo" << endl;
		}
		else if (counter % 33 == 0)
		{
			cout << counter << " Bar" << endl;
		}
		else
		{
			cout << counter << endl;
		}


	}
	cout << "End? ";

	int a;  // have to declare this so the cin on the next line is valid
	cin >> a; //this line exists so the program won't close automatically

	return 0;
}
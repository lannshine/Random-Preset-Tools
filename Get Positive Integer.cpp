/*
  A way to let user input a positive integer
 */

#include <iostream>
#include <limits>
using namespace std;

int getPositiveIntNumber();

int main()
{
	int a;

	cout << "Enter a: ";
  a = getPositiveIntNumber();
  cout << "a: " << a << endl;

	return 0;
}

int getPositiveIntNumber()
{
	float input;

	do
	{
		bool validInput;

		cin >> input;
		validInput = cin.good();

		if (validInput)
		{
			if (input - ((int)input) > 0)
				cout << "Invalid Entry! Number needs to be an integer.\n"
					 << "Enter a positive integer: ";
			else if (input <= 0)
				 cout << "Invalid Entry! Number needs to be positive.\n"
					  << "Enter a positive integer: ";
				 else break;
		}
		else
		{
			cout << "Invalid Entry!\nEnter a positive integer: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	} while (true);

	return (int)input;
}

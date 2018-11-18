#include <iostream>
#include <limits>

int getPositiveIntNumber();

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

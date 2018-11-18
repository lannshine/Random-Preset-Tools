int getIntNumber();

int getIntNumber()
{
	float value;
	
	do 
	{
		bool validInput;
		
		cin >> value;
		validInput = cin.good();
		
		if (validInput)
		{
			if(value -((int) value) > 0)
				cout << "Invalid Entry! Number needs to be an integer.";
			else break;
		}
		else
		{
			cout << "The valid entries are integer numbers. "
				 << "Please enter an integer.\n";
			cin.clear();
			cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
		}
	} while (true);
	
	return (int)value;
}

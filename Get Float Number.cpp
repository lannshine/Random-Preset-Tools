float getFloatNumber();

float getFloatNumber()
{
	float userInputFloat;
	do 
		{
			bool validInput;
			
			cin >> userInputFloat;
			validInput = cin.good();
			
			if (validInput) break;
			else
			{
				cout << "Invalid Entry! Enter a number: ";
				
				cin.clear();
				cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
			}
		} while (true);
	return userInputFloat;
}

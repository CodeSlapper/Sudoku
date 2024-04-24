#include "Grid.h"
bool Grid::CheckRows()
{
	int numberToCheck = 1;
	//row
	for (int i = 0; i < sizeof gridArray/ sizeof gridArray[i]; i++)
	{
		//number in row
		for (int j = 0; j < sizeof gridArray / sizeof gridArray[i]; j++)
		{
			if (gridArray[i][j] == 0)
			{
				FindNumber(gridArray[i]);
				//check each number 1-9
				numberToCheck++;
			}
		}
	}
	return false;
}

unsigned short int Grid::FindNumber(unsigned short int pArray[])
{
	std::unordered_map< unsigned short int,std::string> KnownNumbers;
	std::vector< unsigned short int> candidates;
	for (int i = 0; i < 9; i++)
	{
		if (pArray[i] != 0)
		{
			KnownNumbers[pArray[i]] = "K" + std::to_string(i);
		}
	}
	for (int i = 1; i < 10; i++)
	{
		if (KnownNumbers.count(i)==0)
		{
			candidates.push_back(i);
		}
	}
	int paus = 0;
	return 1;
}

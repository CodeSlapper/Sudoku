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
	unsigned short int Num = 9;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			if (pArray[i]==0)
			{
				bool exists = std::find(std::begin(pArray), std::end(pArray), j) != std::end(pArray);
			}
		}
	}
	return 1;
}

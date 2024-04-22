#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <unordered_map>
class Grid
{
	public:
		Grid(std::string file)
		{
			std::string temp;
			std::ifstream GridRead(file);

			if (GridRead.is_open())
			{
				int rowPos = 0;
				while (std::getline(GridRead, temp))
				{
					int spaceCount = 0;
					for (int i = 0; i < temp.length();i++)
					{
						if (temp[i] != ' ')
						{
							unsigned short int x = temp[i] - '0';
							gridArray[rowPos][i- spaceCount] = x;
						}
						else
						{
							spaceCount++;
						}
					}
					rowPos++;
				}
			}
			GridRead.close();
		}
		~Grid(){}
		//we are using positive numbers between 0-9 we dont need integers
		unsigned short int gridArray[9][9];

		bool CheckRows();

		bool CheckColumns();

		bool CheckGrid();

		unsigned short int FindNumber(unsigned short int pArray[]);
		std::unordered_map<unsigned short int, unsigned short int> map = 
		{
			{1,1},
			{2,2},
			{3,3},
			{4,4},
			{5,5},
			{6,6},
			{7,7},
			{8,8},
			{9,9},
		};
};


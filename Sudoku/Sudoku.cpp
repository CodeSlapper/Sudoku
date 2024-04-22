// Sudoku.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Grid.h"
int main()
{
    Grid test("Sudoku.txt");
    test.CheckRows();
    return 0;
}

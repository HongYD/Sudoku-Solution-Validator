#include "Sudoku.h"

int main()
{
	int** puzzle;
	puzzle = createPuzzle();
	printPuzzle(puzzle);
	return 0;
}
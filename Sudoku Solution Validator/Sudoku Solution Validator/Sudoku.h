#pragma once
#include<stdio.h>
#include<stdlib.h>

extern int UNSOLVED;
extern int SIZE_ROWS;
extern int SIZE_COLUMNS;


typedef struct Box
{
	struct Square** squares;
	int numbers;
	int possible[9];
	int solvable;
	struct Box*next;
}Box;

typedef struct Square
{
	int number;
	int possible[9];
	int solvable;
	Box* box;
	int row;
	int column;
}Square;
void printPuzzle(int** puzzle);
int** createPuzzle();
Square*** setUpPuzzle(int** puzzle);
int updateSudoku(Square*** sudoku, int row, int column);
int solveSquare(Square* square);
Box** createBoxes();
int updateBoxes(Square*** sudoku, int row, int column);
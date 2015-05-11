#include "stdafx.h"
#include <stdlib.h>

void mazeTraverse(const int size, char maze[][12], int x, int y, int xFim, int yFim, int sentido);
void imprimir(char maze[][12]);
void imprimir(char maze[][12]){
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			printf("%c", maze[i][j]);
		}
		printf("\n");
	}
	_sleep(150);
	system("cls");
}
void mazeTraverse(const int size, char maze[][12], int x, int y, int xFim, int yFim, int sentido){

	int achou = 0;
	if (x == xFim && y == yFim){
		achou = 1;
	}

	maze[x][y] = 'X';
	printMaze(maze);
	maze[x][y] = '.';

	if (sentido == 1 && achou != 1){
		if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'X'){
			mazeTraverse(size, maze, x + 1, y, xFim, yFim, 4);
		}
		else {
			if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'X'){
				mazeTraverse(size, maze, x, y + 1, xFim, yFim, sentido); 
			}
			else {
				if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'X'){
					mazeTraverse(size, maze, x - 1, y, xFim, yFim, 3);
				}
				else {
					mazeTraverse(size, maze, x, y - 1, xFim, yFim, 2);
				}
			}
		}
	}
	else if (sentido == 2 && achou != 1){
		if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'X'){
			mazeTraverse(size, maze, x - 1, y, xFim, yFim, 3);
		}
		else {
			if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'X'){
				mazeTraverse(size, maze, x, y - 1, xFim, yFim, sentido); 
			}
			else {
				if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'X'){
					mazeTraverse(size, maze, x + 1, y, xFim, yFim, 4);
				}
				else {
					mazeTraverse(size, maze, x, y + 1, xFim, yFim, 1);
				}
			}
		}
	}
	else if (sentido == 3 && achou != 1){
		if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'X'){
			mazeTraverse(size, maze, x, y + 1, xFim, yFim, 1);
		}
		else {
			if (maze[x - 1][y] == '.' || maze[x - 1][y] == 'X'){
				mazeTraverse(size, maze, x - 1, y, xFim, yFim, sentido); 
			}
			else {
				if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'X'){
					mazeTraverse(size, maze, x, y - 1, xFim, yFim, 2);
				}
				else {
					mazeTraverse(size, maze, x + 1, y, xFim, yFim, 4);
				}
			}
		}
	}
	else if (sentido == 4 && achou != 1){
		if (maze[x][y - 1] == '.' || maze[x][y - 1] == 'X'){
			mazeTraverse(size, maze, x, y - 1, xFim, yFim, 2);
		}
		else {
			if (maze[x + 1][y] == '.' || maze[x + 1][y] == 'X'){
				mazeTraverse(size, maze, x + 1, y, xFim, yFim, sentido); 
			}
			else {
				if (maze[x][y + 1] == '.' || maze[x][y + 1] == 'X'){
					mazeTraverse(size, maze, x, y + 1, xFim, yFim, 1);
				}
				else {
					mazeTraverse(size, maze, x - 1, y, xFim, yFim, 3);
				}
			}
		}
	}
	else {
		for (int i = 0; i < 12; i++)
		{
			for (int j = 0; j < 12; j++)
			{
				printf("%c", maze[i][j]);
			}
			printf("\n");
		}
		printf("\nFim!");
	}
}
int _tmain(int argc, _TCHAR* argv[])
{
	const int size = 12;
	char labirinto[size][size] = {
		{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' },
		{ '#', '.', '.', '.', '#', '.', '.', '.', '.', '.', '.', '#' },
		{ '.', '.', '#', '.', '#', '.', '#', '#', '#', '#', '.', '#' },
		{ '#', '#', '#', '.', '#', '.', '.', '.', '.', '#', '.', '#' },
		{ '#', '.', '.', '.', '.', '#', '#', '#', '.', '#', '.', '.' },
		{ '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
		{ '#', '.', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
		{ '#', '#', '.', '#', '.', '#', '.', '#', '.', '#', '.', '#' },
		{ '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#' },
		{ '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#' },
		{ '#', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#' },
		{ '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' }
	};

	mazeTraverse(size, labirinto, 2, 0, 4, 11, 1);

	return 0;
}





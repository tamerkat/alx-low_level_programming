#include "main.h"

/**
 * free_grid - Entry point for
 * @grid: pointer
 * @height: pointer
 * Return: Always succees
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}

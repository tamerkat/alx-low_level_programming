#include "main.h"

/**
 * **alloc_grid - Entry point for
 * @width:pointer
 * @height:pointer
 * Return: Always succees
*/

int **alloc_grid(int width, int height)
{
	int **tab, i, j;

	tab = malloc(sizeof(*tab) * height);
	if (height <= 0 || height <= 0 || tab == 0)
	{
	return (NULL);
	}
	else
	{
	for (i = 0; i < height; i++)
	{
	tab[i] = malloc(width * width);
	if (tab[i] == 0)
	{
	while (i--)
	{
	free(tab[i]);
	}
	free(tab);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
	tab[i][j] = 0;
	}
	}
	}
	return (tab);
}

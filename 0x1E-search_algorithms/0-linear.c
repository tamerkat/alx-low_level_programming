#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: list
 * @value: integer
 * @size: int
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	for (int i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i - 1);
		else
			return (-1);
	}
}

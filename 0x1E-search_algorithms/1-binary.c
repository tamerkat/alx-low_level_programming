#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Entry point
 *@array: list
 *@size: size_t
 *@value: int
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;

	while (low < high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		int mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

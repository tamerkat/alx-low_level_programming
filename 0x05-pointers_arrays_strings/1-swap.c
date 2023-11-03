#include "main.h"

/**
 * swap_int -Entry point
 * @a:pointer
 * @b:pointer
 * Return: alawys succus
*/

void swap_int(int *a, int *b)
{
	int **i = a;
	int **j = b;

	*i = b;
	*j = a;
}


#include "main.h"

/**
 * print_array -Entry point
 * @a:pointer
 * @n:pointer
 * Return: alawys succus
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf(",");
	printf("%d ", a[i]);
	}
}

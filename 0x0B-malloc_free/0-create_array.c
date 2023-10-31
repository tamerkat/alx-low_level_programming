#include "main.h"

/**
 * create_array - Entry point for
 * @size: size of array
 * @c:char array
 * Return: Always succees
*/

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size);

	if (a == 0 || size == 0)
	{
	return (NULL);
	}
	while (size--)
	{
	a[size] = c;
	}
	return (a);
}

#include "main.h"

/**
 * create_array - Entry point for
 * @size: size of array
 * @c:char array
 * Return: Always succees
*/

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (array == 0 || size == 0)
	{
	return (NULL);
	}
	else
	{
	for (unsigned int i = 0; i < size; i++)
	{
	array[i] = c;
	}
	}
	return (array);
}

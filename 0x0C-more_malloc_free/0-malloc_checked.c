#include "main.h"

/**
 * malloc_checked - Entriy poient
 * @b: pointer
 * Return: always success
 */

void *malloc_checked(unsigned int b)
{
	char *c = malloc(b);

	if (c == 0)
	{
	exit(98);
	}
	return (c);
}

#include "main.h"

/**
 * memest - Entry poient
 * @s: pointer
 * @b: pointer
 * @n: pointer
 * Return: always success
 */

char *memest(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * _calloc - Entry point
 * @nmemb: pointer
 * @size: pointer
 * Return: always success
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(sizeof(int) * nmemb);
	if (c == 0)
		return (NULL);
	memest(c, 0, sizeof(int) * nmemb);

	return (c);
}

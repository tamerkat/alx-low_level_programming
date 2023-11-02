#include "main.h"

/**
 * _memset - Entry poient
 * @s: pointer
 * @b: pointer
 * @n: pointer
 * Return: always success
 */

char *_memset(char *s, char b, unsigned int n)
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
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (c == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
`
	return (m);
}

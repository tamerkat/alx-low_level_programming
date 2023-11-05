#include "main.h"

/**
 * _strncat -Entry point
 * @dest: pointer
 * @src:pointer
 * @n:pointe
 * Return: always succuss
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	;
	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[i++] = src[j];
	dest[i++] = '\0';
	return (dest);
}


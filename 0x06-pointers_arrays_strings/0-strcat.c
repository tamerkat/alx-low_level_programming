#include "main.h"

/**
 * _strcat -Entry point
 * @dest: pointer
 * @src:pointer
 * Return: always succuss
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	;
	for (j = 0; src[j]; j++)
	{
	dest[i++] = src[j];
	}
	return (dest);
}

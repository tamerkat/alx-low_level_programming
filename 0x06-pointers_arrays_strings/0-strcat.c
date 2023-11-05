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
	char *c;

	for (i = 0; dest[i] != '\0'; i++)
	;
	i++;
	for (j = 0; src[j] != '\0'; j++)
	{
	dest[i++] = src[j];
	}
	return (dest);
}

#include "main.h"

/**
 * _strcpy -Entry point
 * @dest:pointer
 * @src:pointer
 * Return: alawys succus
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = -1; src[i] != '\0'; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}

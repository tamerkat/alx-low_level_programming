#include "main.h"

/**
 * _strcpy -Entry point
 * @dest:pointer
 * @src:pointer
 * Return: alawys succus
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	for (; src[i] != '\0';)
	{
	src[i] = dest[i];
	i++;
	}
	return (dest);
}

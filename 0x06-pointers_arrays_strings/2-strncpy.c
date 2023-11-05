#include "main.h"

/**
 * _strncpy -Entry point
 * @dest: pointer
 * @src:pointer
 * @n:number
 * Return: always succuss
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	dest[i] = src[i];
}

#include "main.h"

/**
 * _strlen -Entry point
 * @s:pointer
 * Return: alawys succuss
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;
	return (i);
}

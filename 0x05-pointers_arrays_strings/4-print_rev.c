#include "main.h"

/**
 * print_rev - Entry point
 * @s:pointer
 * Return: alawys succuss
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != "\0"; i++)
	;

	while (i--)
	{
	_putchar(s[i]);
	}
}

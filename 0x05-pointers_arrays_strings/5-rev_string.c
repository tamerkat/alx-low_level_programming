#include "main.h"

/**
 * rev_string - Entry point
 * @s:pointer
 * Return: alawys succuss
*/

void rev_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	while (i--)
		_putchar(s[i]);
}

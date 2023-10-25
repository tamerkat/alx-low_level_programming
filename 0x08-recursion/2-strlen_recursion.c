#include "main.h"

/**
 * _strlen_recursion - check the code
 *@s: pointer
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	int digit = 0;

	if (*s > '\0')
	{
	digit += _strlen_recursion(s + 1) + 1;
	}
	return (digit);
}

#include "main.h"

/**
 * string_toupper - Entry point
 * @str: pointer
 * Return: always succuss
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if ((int)*str[i] >= 97 && (int)*str[i] <= 122)
	str[i] = (int*)str[i] - 32;
	}
	return (str);
}

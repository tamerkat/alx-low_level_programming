#include "main.h"

/**
 * string_toupper -Entry point
 * @str: pointer
 * Return: always succuss
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if ((int)*str >= 97 || (int)*str <= 122)
		str[i] = (int)*str - 32;
	return (str);
i}

#include "main.h"

/**
 * cap_string - Entry point
 * @str: pointer
 * Return: always succuss
*/

char *cap_string(char *str)
{
	int i, j;
	char *s = str;

	while (*str)
	{
	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] == 32)
	{
	j = i + 1;
	if ((int)str[j] >= 97 && (int)str[j] <= 122)
	str[j] = (int)str[j] - 32;
	}
	}
	str++;
	}
	return (s);
}


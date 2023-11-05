#include "main.h"

/**
 * leet - Entry point:wq
 * @str: pointer
 * Return: always succuss
*/

char *leet(char *str)
{
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int valuo[] = {4, 3, 0, 7, 1};
	unsigned int i;
	char *s = str;

	while (*str)
	{
	for (i = 0; i < (sizeof(key) / sizeof(char)); i++)
	{
	if (*str == key[i] || *str == key[i] + 32)
	{
	*str = valuo[i] + 48;
	}

	}
	str++;
	}
	return (s);
}

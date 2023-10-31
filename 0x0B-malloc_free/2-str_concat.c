#include "main.h"

/**
 * _strlen - Entry point for
 * @s: pointer
 * Return: Always succees
*/

char _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - Entry point for
 * @s1: pointer
 * @s2: pointer
 * Return: Always succees
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *c;

	if (s1 == NULL)
	{
	return ("\0");
	}
	if (s2 == NULL)
	{
	return ("\0");
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	c = malloc((size1 + size2) * sizeof(char) + 1);
	if (c == 0)
	{
	return (0);
	}
	for (i = 0; i <= size1 + size2; i++)
	{
	if (i < size1)
	{
	c[i] = s1[i];
	}
	else
	{
	c[i] = s2[i - size1];
	}
	}
	c[i] = '\0';
	return (c);
}

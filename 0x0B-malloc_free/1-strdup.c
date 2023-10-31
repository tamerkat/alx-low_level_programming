#include "main.h"

/**
 * *_strdup - Entry point for
 * @str: pointer
 * Return: Always succees
*/

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *c;

	if (str == NULL)
	{
	return (NULL);
	}
	for (; str[size] != '\0'; size++)
	;
	c = malloc(sizeof(*str) * size + 1);
	if (c == NULL)
	{
	return (NULL);
	}
	else
	{
	for (; i < size; i++)
	{
	c[i] = str[i];
	}
	}
	return (c);
}

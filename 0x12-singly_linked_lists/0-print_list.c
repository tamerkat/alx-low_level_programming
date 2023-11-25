#include "list.h"

/**
 * _strlen - Entry point
 * @s: the string
 * Return: always succuss
*/

int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
	return (0);
	while (*s++)
	i++;
	return (i);
}

/**
 * print_list - Entry point
 * @h: the string
 * Return: always succuss
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	printf("[%d] %s\n", _strlen(h->str), h->str) ? h->str : "(nil)";
	h = h->next;
	i++;
	}
	return (i);
}

#include "lists.h"

/**
 * print_listint - Entry point for printing
 * @h: pointer
 * Return: pointer to
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}

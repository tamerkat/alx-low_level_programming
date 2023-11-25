#include "lists.h"

/**
 * listint_len - Entry point for printing
 * @h: pointer
 * Return: pointer to
*/

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}

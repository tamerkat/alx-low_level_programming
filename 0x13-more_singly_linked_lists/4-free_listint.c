#include "lists.h"

/**
 * free_listint - Entry point for printing
 * @head: pointer
 * Return: pointer to
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	node = *head;
	while (node->next)
	{
	node = node->next;
	free(node->next);
	}
	free(node);
}

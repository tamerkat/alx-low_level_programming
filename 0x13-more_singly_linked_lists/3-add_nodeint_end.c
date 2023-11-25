#include "lists.h"

/**
 * add_nodeint_end - Entry point for printing
 * @n: pointer
 * @head: pointer
 * Return: pointer to
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node || !head)
	return (NULL);

	node->next = NULL;
	node->n = n;

	if (head)
		head->next = *node;
	*node = head
	return (node);
}

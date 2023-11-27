#include "lists.h"

/**
 * add_nodeint_end - Entry point for printing
 * @n: pointer
 * @head: pointer
 * Return: pointer to
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!*head)
		*head = new_node;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;

		node->next = new_node;
	}
	return (new_node);
}

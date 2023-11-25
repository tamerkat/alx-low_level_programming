#include "lists.h"

/**
 * add_nodeint - Entry point for printing
 * @n: pointer
 * @head: pointer
 * Return: pointer to
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (!head || !new_node)
	return (NULL);

		new_node->n = n;
	new_node->next = NULL;
	if (head)
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}


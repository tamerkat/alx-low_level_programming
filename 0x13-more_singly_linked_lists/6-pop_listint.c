#include "lists.h"

/**
 * pop_listint - Entry point for printing
 * @head: pointer
 * Return: pointer to
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
	return (0);

	node = (*head)->next;
	n = (*head)->n
	free(*head);
	*head = node
	return (n);
}

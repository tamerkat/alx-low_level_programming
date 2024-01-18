#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: pointer
 * @n: pointer
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !*head)
	{
	return (new ? free(new), NULL : NULL);
	}
	new->n = n;
	new->prev = NULL;
	if (!*head)
	{
	*head = new;
	new->next = NULL;
	}
	else
	{
	new->next = *head;
	(*head)->prev = new;
	*head = new;
	}
	return (new);
}

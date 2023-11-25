#include "lists.h"

/**
 * add_node_end - Entry point
 * @head: the string
 * @str: the string
 * Return: always succuss
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_head = malloc(sizeof(list_t));

	if (!head || !last_head)
	return (NULL);
	if (str)
	{
	last_head->str = strdup(str);
	if (!last_head->str)
	{
	free(last_head);
	return (NULL);
	}
	last_head->len = strlen(str);
	}
	last_head->next = NULL;
	*head = last_head;
	return (last_head);
}

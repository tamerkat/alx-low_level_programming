#include "lists.h"

/**
 * free_list - Entry point
 * @head: the string
 * Return: always succuss
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
	return;
	else
	{
	node = head;

	while (node)
	{
	node->next = next_node;
	free(next_node);
	free(node);
	node = next_node;
	}
	}
}

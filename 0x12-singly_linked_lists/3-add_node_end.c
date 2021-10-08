#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end- Adds a new node at the end of a list
 * @head: Node of a list
 * @str: string to be duplicated
 * to the new node
 *
 * Return: Address of the new element
 *	NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	p = strdup(str);
	if (p == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->str = p;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node != NULL)
		{
			last_node = last_node->next;
		}
		last->next = new_node;
	}
	return (new_node);
}

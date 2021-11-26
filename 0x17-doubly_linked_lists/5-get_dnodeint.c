#include "lists.h"

/**
 * get_dnodeint_at_index- Gets a node at index given
 * @head: The head node of DLL
 * @index: The position of node to be gotten
 *
 * Return: the nth node
 *	else NULL if doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	int k;

	for(k = 0; k < index; k++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	tmp = head;
	return (tmp);
}

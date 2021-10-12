#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- Adds a new node at the beginning of
 *	a listint_t list
 * @head: Pointer to first element
 * @n: data to the new element
 *
 * Return: Address of the new element 
 *	NULL if fails
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}

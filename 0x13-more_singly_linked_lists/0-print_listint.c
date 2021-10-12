#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint- A function that prints all the elements
 *	of a listint_t
 * @h: Pointer to the first node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	while (h != NULL)
	{
		num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}

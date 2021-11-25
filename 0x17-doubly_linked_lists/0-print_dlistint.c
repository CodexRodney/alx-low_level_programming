#include "lists.h"

/**
 * print_dlistint - Prints all elements of a DLL
 * @h: A node of the DLL
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (k);
}

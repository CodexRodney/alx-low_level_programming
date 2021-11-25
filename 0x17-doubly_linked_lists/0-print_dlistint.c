#include "lists.h"

/**
 * print_dlistint - Prints all elements of a DLL
 * @h: A node of the DLL
 *
 * Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t k;

	for(k = 1; h->next != NULL;)
	{
		printf("%d ",h->n);
		h = h->next;
		k++;
	}
	printf("%d ",h->n);
	return (k);
}

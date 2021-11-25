#include "lists.h"

/**
 * free_dlistint - Frees a DLL
 * @head: A node of DLL to be freed
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

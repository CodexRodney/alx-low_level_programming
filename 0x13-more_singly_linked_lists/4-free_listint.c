#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- Frees a list listint_t
 * @head: A pointer to the head
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;
	if (head == NULL)
	{
		free(head);
	}
	else
	{
		while ((tmp = head) != NULL)
		{
			head = head->next;
			free(tmp);
		}
	}
}

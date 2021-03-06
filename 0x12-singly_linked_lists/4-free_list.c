#include <stdio.h>
#include "lists.h"

/**
 * free_list- Frees a list_t list
 * @head: pointer to the node
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		free(head);
	}
	else
	{
		while ((tmp = head) != NULL)
		{
			head = head->next;
			free(tmp->str);
			free(tmp);
		}
	}
}

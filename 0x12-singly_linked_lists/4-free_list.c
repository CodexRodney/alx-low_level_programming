#include <stdio.h>
#include "list.h"

/**
 * free_list- Frees a list_t list
 * @head: pointer to the node
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next
		free(head->str);
		free(head);
	}
}

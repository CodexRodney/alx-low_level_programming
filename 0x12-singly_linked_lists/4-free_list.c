#include <stdio.h>
#include "list.h"

/**
 * free_list- Frees a list_t list
 * @head: pointer to the node
 *
 */
void free_list(list_t *head)
{
	free(head);
}

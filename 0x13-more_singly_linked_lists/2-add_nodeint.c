#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end- Adds a new node at the end of a listint_t
 * @head: Pointer of the first node
 * @n: data to new node
 *
 * Return: Address of new element
 *	NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	else
	{
		tmp->n = n;
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}
}

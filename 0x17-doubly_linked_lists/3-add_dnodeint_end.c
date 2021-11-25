#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of DLL
 * @head: A node of the DLL
 * @n: data of new node
 *
 * Return: address of new element
 *	NULL if failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return NULL;
	tmp->n = n;
	tmp->next = NULL;
	if (head == NULL)
	{
		tmp->prev = NULL;
		*head = tmp;
		return (tmp);
	}
	while ((*head)->next != NULL)
		*head = (*head)->next;
	tmp->prev = *head;
	(*head)->next = tmp;
	return (tmp);
}

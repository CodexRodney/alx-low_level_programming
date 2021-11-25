#include "lists.h"

/**
 * add_dnodeint - Adds new node at beginning of DLL
 * @head: The head node
 * @n: data to new node
 *
 * Return: Address of new element
 *	NULL if it fails
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	if (*head != NULL)
		(*head)->prev = tmp;
	tmp->prev = NULL;
	tmp->next = *head;
	tmp->n = n;
	*head = tmp;
	return (tmp);
}

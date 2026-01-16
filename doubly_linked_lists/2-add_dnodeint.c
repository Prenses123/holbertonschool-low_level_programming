#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint - funbction
 * @head - head of list
 * @n:data
 * Return:number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}

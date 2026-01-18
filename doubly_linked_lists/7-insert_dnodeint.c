#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function
 * @h:head
 * @idx:index
 * @n: number
 * Return:the address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	unsigned int i = 0;
	
	if (h == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*h == NULL && idx == 0)
	{
		*h = temp;
		return (temp);
	}
	ptr = *h;
	for (i = 0; ptr != NULL && i < idx - 1; i++)
	{
        	ptr = ptr->next;
	}
	if (ptr == NULL)
		return (NULL);
	temp->prev = ptr;
	temp->next = ptr->next;
	temp->n = n;
	if (ptr->next != NULL)
    	ptr->next->prev = temp;
	ptr->next = temp;
	return (temp);
}

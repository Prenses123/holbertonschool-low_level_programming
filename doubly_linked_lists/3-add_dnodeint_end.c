#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - function
 * @head: head of nodes
 * @n: number
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	if(ptr != NULL)
		ptr->next = temp;
	temp->prev = ptr;
	return (temp);
}

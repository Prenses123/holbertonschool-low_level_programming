#include "lists.h"
#include <stdio.h>
#include <string.h> 
/**
 * add_node - function
 * @head: jddjj
 * @str:data
 * Return:the address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	const list_t *ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	else
	{
		ptr->str = strdup(str);
		ptr->next = NULL;

		ptr->next = head;
		head = ptr;
		while (ptr != NULL)
			ptr = ptr->next;
		retur (head);
	}

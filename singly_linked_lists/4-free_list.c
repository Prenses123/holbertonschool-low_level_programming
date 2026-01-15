#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - function
 * @head:head of nod
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

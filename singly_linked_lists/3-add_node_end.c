#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds nod end of the list
 * @head: head of list
 * @str:variable that includes data
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	int n = 0;
	temp = malloc(sizeof(list_t));
	const char *s;

	if (head == NULL || str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	s = str;

	while (*s++)
	{
		n++;
	}
	temp->len = n;
	temp->next = NULL;
	ptr = *head;

	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}

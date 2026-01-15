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
	char *s = str;

	if (head == NULL || str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr = *head;

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	while (*s != '\0')
	{
		n++;
		s++;
	}
	temp->str = str;
	temp->link = link;
	while (ptr->link != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	ptr->len = len;
	return (ptr);
}

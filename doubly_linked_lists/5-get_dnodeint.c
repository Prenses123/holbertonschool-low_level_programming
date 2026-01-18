#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function
 * @head: head
 * @index:index of element
 * Return:nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{       
    dlistint_t *ptr;
    unsigned int i = 0;
        
    if (head == NULL)
        return (NULL);
	ptr = head;
	while (i <= index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

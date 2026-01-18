#include <stdlib.h>
#include <string.h>
#include "lists.hi"
/**
 * get_dnodeint_at_index - function
 * @head: head
 * @index:index of element
 * Return:nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{       
        dlistint_t *ptr;
        unsigned int i;
        
        if (head == NULL)
                return (NULL);
        if (index < 0)
		return (NULL);
	ptr = head
	while (i <= index && ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}

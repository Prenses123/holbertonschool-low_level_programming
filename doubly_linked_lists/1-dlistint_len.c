#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len - function
 * @h: head
 * Return:the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}

#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - function
 * @h:head
 * Return:returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

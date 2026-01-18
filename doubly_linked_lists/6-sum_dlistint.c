#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - function
 * @head: head
 * Return:eturn sums
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);
	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		sum += ptr->n;
	}
	return (sum);
}

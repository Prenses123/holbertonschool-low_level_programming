#include "lists.h"
#include <stdio.h>

/**
 * list_len - struct that returns number of nods
 * @h: head
 * Return: number of nods
 */
size_t list_len(const list_t *h);
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
}

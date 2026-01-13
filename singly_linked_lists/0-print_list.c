#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - function that prints nodes
 * @h: numbeer of nodes
 * Return:prints datas
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *ptr = NULL;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}
	ptr = h;
	while(ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("%s", ptr->str);
		else
			printf("[0] (nil)");
		ptr = ptr->next;
		count++;
	}
	return (count);
}

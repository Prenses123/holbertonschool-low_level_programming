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
	size_t count = 0;
	const list_t *ptr = h;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while(ptr != NULL)
	{
		if (ptr->str != NULL)
			printf("%s\n", ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
		count++;
	}
	return (count);
}
int main(void)
{
	print_list(h);
	return (0);
}

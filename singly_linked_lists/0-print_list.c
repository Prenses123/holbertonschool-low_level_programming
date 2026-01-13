#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function that prints nodes
 * @h: numbeer of nodes
 * Return:prints datas
 */
typedef list_s
{
	char *str;
	struct list_s *next
}list_t;
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (0);
	}
	list_t *ptr = NULL;
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

#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct list_s - singly linked list node
 * @str: string - malloc'ed string
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
	struct list_s prev;
	char *str;
	struct list_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */

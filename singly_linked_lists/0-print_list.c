#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the first node
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    const list_t *ptr = h;

    while (ptr != NULL)
    {
        if (ptr->str != NULL)
            printf("[%u] %s\n", ptr->len, ptr->str);
        else
            printf("[0] (nil)\n");

        count++;
        ptr = ptr->next;
    }

    return count;
}

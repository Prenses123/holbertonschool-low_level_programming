#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *ptr;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    ptr = *head;

    /* delete head node */
    if (index == 0)
    {
        *head = ptr->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(ptr);
        return (1);
    }

    while (ptr != NULL && i < index)
    {
        ptr = ptr->next;
        i++;
    }

    if (ptr == NULL)
        return (-1);

    if (ptr->prev != NULL)
        ptr->prev->next = ptr->next;

    if (ptr->next != NULL)
        ptr->next->prev = ptr->prev;

    free(ptr);
    return (1);
}

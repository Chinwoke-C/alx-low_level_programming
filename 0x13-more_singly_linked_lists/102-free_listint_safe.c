#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely, even with loops.
 * @h: A pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t size = 0;
    listint_t *current = *h;
    listint_t *temp = NULL;
 
    while (current)
    {
        size++;

        temp = current;
        current = current->next;
        free(temp);
    }

    *h = NULL;
    return size;
}

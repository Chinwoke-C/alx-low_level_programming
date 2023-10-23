#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
listint_t *cursor;
listint_t *temp;
if (head != NULL)
{
while (*head != NULL)
{
cursor = *head;
temp = cursor->next;
free(cursor);
*head = temp;
}
}
}

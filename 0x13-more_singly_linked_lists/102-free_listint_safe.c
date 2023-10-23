
void free_listint_safe(listint_t **head)
{
listint_t *current;
listint_t *temp;
if (head != NULL)
{
while (*head != NULL)
{
current = *head;
temp = current->next;
free(current);
*head = temp;
}
}
}

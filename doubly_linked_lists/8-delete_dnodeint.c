#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 *in a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to delete (starting at 0).
 * Return: 1 if the deletion was successful, -1
 *if it failed (e.g., invalid index or empty list).
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (current != NULL && i < index)
{
current = current->next;
i++;
}
if (current == NULL)
return (-1);

if (current->prev != NULL)
current->prev->next = current->next;
if (current->next != NULL)
current->next->prev = current->prev;
free(current);
return (1);
}

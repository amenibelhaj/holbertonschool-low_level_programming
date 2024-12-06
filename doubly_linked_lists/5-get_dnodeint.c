#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a doubly linked list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The node at the specified index, or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current_node = head;
unsigned int count = 0;

while (current_node != NULL)
{
if (count == index)
return (current_node);
current_node = current_node->next;
count++;
}
return (NULL);
}
